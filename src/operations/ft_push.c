/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 16:09:11 by sboudcha          #+#    #+#             */
/*   Updated: 2025/12/31 23:12:23 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void ft_push(t_list **src, t_list **dst)
{
  t_list *tmp;
  if(!src || !*src)
    return;
  tmp = *src;
  *src = (*src)->next;
  tmp->next = *dst;
  *dst = tmp;
  }

void ft_pb(t_list **stack_a, t_list **stack_b)
{
    ft_push(stack_a, stack_b);
    write(1, "pb\n", 3);
}

void ft_pa(t_list **stack_b, t_list **stack_a)
{
    ft_push(stack_b, stack_a);
    write(1, "pa\n", 3);
}