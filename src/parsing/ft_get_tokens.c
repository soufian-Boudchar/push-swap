/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_tokens.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 02:05:49 by sboudcha          #+#    #+#             */
/*   Updated: 2026/01/05 02:13:30 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
//join and split, 
char	**ft_split_and_validate(int ac, char *av[])
{
	char	*joined;
	char	**tokens;

	if (!validate_input(av + 1))
		return (NULL);
	joined = ft_join(ac, av);
	if (!joined)
		return (NULL);
	tokens = ft_split(joined);
	free(joined);
	if (!tokens)
		return (NULL);
	if (!validate_input(tokens) || !ft_check_tokens(tokens))
	{
		ft_free_tokens(tokens);
		return (NULL);
	}
	return (tokens);
}

static t_list	*ft_build_stack(char **tokens)
{
	t_list	*stack_a;

	stack_a = ft_init_stack_a(tokens);
	if (!stack_a)
	{
		ft_free_tokens(tokens);
		write(2, "Error\n", 6);
		exit(1);
	}
	ft_free_tokens(tokens);
	if (!ft_check_duplicates(stack_a))
	{
		ft_list_free(&stack_a);
		write(2, "Error\n", 6);
		exit(1);
	}
	return (stack_a);
}

t_list	*ft_parsing(int ac, char *av[])
{
	t_list	*stack_a;
	char	**tokens;

	if (ac < 1)
		exit(0);
	tokens = ft_split_and_validate(ac, av);
	if (!tokens)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	stack_a = ft_build_stack(tokens);
	return (stack_a);
}
