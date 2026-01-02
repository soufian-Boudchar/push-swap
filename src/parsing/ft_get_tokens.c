/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_tokens.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 02:05:49 by sboudcha          #+#    #+#             */
/*   Updated: 2026/01/01 02:38:21 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"


char	**get_token(int ac, char *av[])
{
    char	*joined;
	char	**tokens;
    
	if (!validate_input(av + 1))
	{
		return (NULL);
	}
	joined = ft_join(ac, av);
	if (!joined)
	{
		return (NULL);
	}
	tokens = ft_split(joined);
	free(joined);
	if (!tokens)
	{
		return (NULL);
	}
	if (!validate_input(tokens) || !ft_check_tokens(tokens))
	{
		ft_free_tokens(tokens);
		return (NULL);
	}
	return (tokens);
}

static t_list	*process_stack(char **tokens)
{
	t_list	*stack_a;

	stack_a = ft_init_stack(tokens);
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
	if(!ft_check_sorted(stack_a))
		{
			ft_list_free(&stack_a);
			exit(0);
		}
	return (stack_a);
}

t_list	*ft_parsing(int ac, char *av[])
{
	t_list	*stack_a;
	char	**tokens;

	if (ac < 1)
		exit(1);

	
	tokens = get_token(ac, av);
	if (!tokens)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	stack_a = process_stack(tokens);
	if (!stack_a)
	{
		printf("hello");
	}
	
	return (stack_a);
}