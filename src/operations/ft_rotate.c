/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 18:41:29 by sboudcha          #+#    #+#             */
/*   Updated: 2025/12/31 23:23:53 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void ft_rotate(t_list **stack)
{
  t_list *tmp;
  t_list *last;
  if(!stack || !*stack || !(*stack)->next)
  return;
  tmp = *stack;
  last = *stack;
  while(last->next)
      last = last->next;
  *stack = (*stack)->next;
  tmp->next = NULL;
  last->next = tmp;
}

void ft_ra(t_list **stack_a)
{
    ft_rotate(stack_a);
    write(1, "ra\n", 3);
}

void ft_rb(t_list **stack_b)
{
    ft_rotate(stack_b);
    write(1, "rb\n", 3);
}
void ft_rr(t_list **stack_a, t_list **stack_b)
{
    ft_rotate(stack_a);
    ft_rotate(stack_b);
    write(1, "rr\n", 3);
}