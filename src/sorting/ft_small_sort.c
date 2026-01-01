#include "../../includes/push_swap.h"

void ft_sort_two(t_list **stack)
{
  if((*stack)->data > (*stack)->next->data)
      ft_sa(stack);
  return;
}

void ft_sort_three(t_list **stack)
{
    int     frst;
    int     scnd;
    int     thrd;
    
    frst = (*stack)->data;
    scnd = (*stack)->next->data;
    thrd = (*stack)->next->next->data;
    if (frst < scnd && scnd > thrd && frst > thrd)
        ft_rra(stack);
    if (frst > scnd && scnd < thrd && frst > thrd)
        ft_ra(stack);    
    if (frst < scnd && scnd > thrd && frst < thrd)
    {
        ft_sa(stack);
        ft_ra(stack);
    }
    if (frst > scnd && scnd < thrd && frst < thrd)
        ft_sa(stack);
    if (frst > scnd && scnd > thrd && frst > thrd)
        {
            ft_ra(stack);
            ft_sa(stack);
        }    
}
