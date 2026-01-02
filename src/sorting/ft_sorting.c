#include "../../includes/push_swap.h"

void ft_sorting(t_list **stack_a, t_list **stack_b)
{
    int size;
    size = ft_list_size((*stack_a));

    if(size == 2)
        ft_sort_two(stack_a);
    else if (size == 3)
        ft_sort_three(stack_a);
    else if (size == 4)
        ft_sort_four(stack_a, stack_b);
    else if (size == 5)
        ft_sort_five(stack_a, stack_b);
    else
        ft_big_sort(stack_a, stack_b);
    
}