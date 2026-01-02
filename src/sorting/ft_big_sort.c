#include "../../includes/push_swap.h"
static void ft_helper(t_list **stack_a, t_list **stack_b, int *push_count)
{
    ft_pb(stack_a, stack_b);
    (*push_count)++;
}
void ft_big_sort(t_list **stack_a, t_list **stack_b)
{
    int chunk_size;
    int push_count;
    int start;
    int end;
    push_count = 0;
    if (ft_list_size(*stack_a) <= 100)
        chunk_size = 15;
    else
        chunk_size = 35;
    start = 0;
    end = chunk_size - 1;
    while (*stack_a)
    {
        while(*stack_a && push_count < chunk_size)
        {    
            if ((*stack_a)->index >= start && (*stack_a)->index  <= end)
                ft_helper(stack_a, stack_b, &push_count);
            else
                ft_ra(stack_a);
        } 
        start += chunk_size;
        end += chunk_size;
        push_count = 0;
    }
}
