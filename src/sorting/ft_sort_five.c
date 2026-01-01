#include "../../includes/push_swap.h"

void ft_sort_five(t_list **stack_a, t_list **stack_b)
{
    t_list *tmp;
    tmp = (*stack_a)->next;
    t_list *min;
    min = (*stack_a);
    while(tmp)
    {
        if(min->data > tmp->data)
            min = tmp;
        tmp = tmp->next;
    }
    tmp = (*stack_a);
    while((*stack_a)->data != min->data)
    {
        if(!min->next || !min->next->next)
            ft_rra(stack_a);
        else
            ft_ra(stack_a);
    }
    ft_pb(stack_a, stack_b);
    ft_sort_four(stack_a, stack_b);
    ft_pa(stack_b, stack_a);
}