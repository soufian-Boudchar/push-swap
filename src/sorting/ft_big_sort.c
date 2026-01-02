/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 21:42:31 by sboudcha          #+#    #+#             */
/*   Updated: 2026/01/02 21:48:44 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static t_list	*ft_max_finder(t_list *stack_a)
{
	t_list	*max;

	max = stack_a;
	while (stack_a)
	{
		if (max->index < stack_a->index)
			max = stack_a;
		stack_a = stack_a->next;
	}
	return (max);
}

static int	ft_check_pos(t_list *stack_b, t_list *max)
{
	int	pos;

	pos = 0;
	while (stack_b && stack_b != max)
	{
		stack_b = stack_b->next;
		pos++;
	}
	return (pos);
}

static void	ft_push_back_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*max;
	int		pos;

	while (*stack_b)
	{
		max = ft_max_finder(*stack_b);
		pos = ft_check_pos(*stack_b, max);
		if (pos > ft_list_size(*stack_b) / 2)
			while (*stack_b != max)
				ft_rrb(stack_b);
		else
			while (*stack_b != max)
				ft_rb(stack_b);
		ft_pa(stack_b, stack_a);
	}
}

void	ft_big_sort(t_list **stack_a, t_list **stack_b)
{
	int	range;
	int	i;

	i = 0;
	if (ft_list_size(*stack_a) <= 100)
		range = 15;
	else
		range = 35;
	while (*stack_a)
	{
		if ((*stack_a)->index <= i + range)
		{
			ft_pb(stack_a, stack_b);
			if ((*stack_b)->index < i)
				ft_rb(stack_b);
			i++;
		}
		else
			ft_ra(stack_a);
	}
	ft_push_back_a(stack_a, stack_b);
}
