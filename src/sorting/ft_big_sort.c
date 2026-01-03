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

static t_list	*ft_max_finder(t_list *stack)
{
	t_list	*max;

	max = stack;
	while (stack)
	{
		if (max->index < stack->index)
			max = stack;
		stack = stack->next;
	}
	return (max);
}

static int	ft_check_pos(t_list *stack, t_list *max)
{
	int	pos;

	pos = 0;
	while (stack && stack != max)
	{
		stack = stack->next;
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
static t_list	*ft_range_finder(t_list *stack, int range)
{
	t_list *last;
	t_list *tmp;
	tmp = stack;
	
	
	while (tmp)
	{
		if (tmp->index <= range)
		{
			last = tmp;
			break;
		}
		tmp = tmp->next;
	}
	return last;
}
void	ft_big_sort(t_list **stack_a, t_list **stack_b)
{
	int	range;
	int	i;

	i = 0;
	if (ft_list_size(*stack_a) <= 100)
		range = 3;
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
		else if (ft_check_pos(*stack_a, ft_range_finder(*stack_a, i + range)) < ft_list_size(*stack_a) / 2)
			ft_ra(stack_a);
		else
			ft_rra(stack_a);
	}
	ft_push_back_a(stack_a, stack_b);
}