#include "../../includes/push_swap.h"

void ft_sort_two(t_list **stack)
{
    if(!ft_check_sorted((*stack)))
        return;
      ft_sa(stack);
}

void ft_sort_three(t_list **stack)
{
    int     frst;
    int     scnd;
    int     thrd;
    if(!ft_check_sorted((*stack)))
        return;
    frst = (*stack)->content;
    scnd = (*stack)->next->content;
    thrd = (*stack)->next->next->content;
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
