#include "../../includes/push_swap.h"

void ft_sort_four(t_list **stack_a, t_list **stack_b)
{
    t_list *min;
    t_list *tmp;
    tmp = (*stack_a);
    min = (*stack_a);
    
    while (tmp) 
    {
      if (min->content > tmp->content)
        min = tmp;
      tmp = tmp->next;
    }
    while ((*stack_a)->content != min->content)
     { 
      if(!min->next || !min->next->next)
            ft_rra(stack_a);
        else
            ft_ra(stack_a);
      }
      if(!ft_check_sorted((*stack_a)))
        return;
    ft_pb(stack_a, stack_b);
    ft_sort_three(stack_a);
    ft_pa(stack_b, stack_a);
}
