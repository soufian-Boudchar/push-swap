/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 02:40:02 by sboudcha          #+#    #+#             */
/*   Updated: 2026/01/01 03:17:51 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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
        ft_ra(stack);
        ft_ra(stack);
        ft_sa(stack);
    }
    if (frst > scnd && scnd < thrd && frst < thrd)
        ft_sa(stack);
    if (frst > scnd && scnd > thrd && frst > thrd)
        {
            ft_ra(stack);
            ft_sa(stack);
        }
    
}
