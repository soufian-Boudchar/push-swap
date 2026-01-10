/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_small_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 21:43:42 by sboudcha          #+#    #+#             */
/*   Updated: 2026/01/02 21:43:43 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sort_two(t_list **stack)
{
	if (!ft_check_sorted((*stack)))
		return ;
	ft_sa(stack);
}

void	ft_sort_three(t_list **stack)
{
	int	frst;
	int	scnd;
	int	thrd;

	if (!ft_check_sorted((*stack)))
		return ;
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

void	ft_sort_four(t_list **stack_a, t_list **stack_b)
{
	t_list	*min;
	t_list	*tmp;

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
		if (!min->next || !min->next->next)
			ft_rra(stack_a);
		else
			ft_ra(stack_a);
	}
	if (!ft_check_sorted((*stack_a)))
		return ;
	ft_pb(stack_a, stack_b);
	ft_sort_three(stack_a);
	ft_pa(stack_b, stack_a);
}

void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*min;

	tmp = (*stack_a);
	min = (*stack_a);
	if (!ft_check_sorted((*stack_a)))
		return ;
	while (tmp)
	{
		if (min->content > tmp->content)
			min = tmp;
		tmp = tmp->next;
	}
	while ((*stack_a)->content != min->content)
	{
		if (!min->next || !min->next->next)
			ft_rra(stack_a);
		else
			ft_ra(stack_a);
	}
	ft_pb(stack_a, stack_b);
	ft_sort_four(stack_a, stack_b);
	ft_pa(stack_b, stack_a);
}
