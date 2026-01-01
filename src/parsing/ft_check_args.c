/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:09:18 by sboudcha          #+#    #+#             */
/*   Updated: 2025/12/31 15:17:11 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	validate_input(char **av)
{
	int	i;
	int	j;
	int	has_digit;

	i = 0;
	while (av[i])
	{
		j = 0;
		has_digit = 0;
		while (av[i][j])
		{
			if (av[i][j] >= '0' && av[i][j] <= '9')
				has_digit = 1;
			else if (!(av[i][j] == ' ' || av[i][j] == '+' || av[i][j] == '-'))
				return (0);
			j++;
		}
		if (!has_digit)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_tokens(char **tokens)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tokens[i])
	{
		j = 0;
		if (tokens[i][j] == '+' || tokens[i][j] == '-')
			j++;
		while (tokens[i][j])
		{
			if ((tokens[i][j] == '-' || tokens[i][j] == '+'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check_duplicates(t_list *stack)
{
	t_list	*i;
	t_list	*j;

	i = stack;
	while (i)
	{
		j = i->next;
		while (j)
		{
			if (i->data == j->data)
			{
				return (0);
			}
			j = j->next;
		}
		i = i->next;
	}
	return (1);
}
