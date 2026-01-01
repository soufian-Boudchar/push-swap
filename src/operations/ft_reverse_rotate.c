/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 22:00:27 by sboudcha          #+#    #+#             */
/*   Updated: 2025/12/31 23:45:50 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void ft_reverse_rotate(t_list **stack)
{
  t_list *tmp;
  t_list *last;
  if (!stack || !*stack || !(*stack)->next)
    return;
  tmp = *stack;
  while(tmp->next->next)
    tmp = tmp->next;
  last = tmp->next;
  tmp->next = NULL;
  last->next = *stack;
  *stack = last;
}

void ft_rra(t_list **stack_a)
{
    ft_reverse_rotate(stack_a);
    write(1, "rra\n", 4);
}
void ft_rrb(t_list **stack_b)
{
    ft_reverse_rotate(stack_b);
    write(1, "rrb\n", 4);
}
void ft_rrr(t_list **stack_a, t_list **stack_b)
{
    ft_reverse_rotate(stack_a);
    ft_reverse_rotate(stack_b);
    write(1, "rrr\n", 4);
}