/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 21:43:50 by sboudcha          #+#    #+#             */
/*   Updated: 2026/01/02 21:43:51 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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
