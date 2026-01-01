/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 18:19:25 by sboudcha          #+#    #+#             */
/*   Updated: 2025/12/31 23:51:00 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	ft_size_arr(char **arr)
{
	int	size;

	size = 0;
	while (arr[size])
		size++;
	return (size);
}

static char	**get_token(int ac, char *av[])
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
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	
	tokens = get_token(ac, av);
	if (!tokens)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	stack_a = process_stack(tokens);
	return (stack_a);
}

t_list	*ft_init_stack_a(char **tokens)

{
	int size;

	int i;
	i = 0;
	size = ft_size_arr(tokens);
	t_list *stack;
	stack = NULL;
	while (i < size)
	{
		ft_add_back(&stack, ft_new_node((int)ft_atoi(tokens[i])));
		if (ft_atoi(tokens[i]) == 2147483648)
		{
			ft_list_free(&stack);
			return (NULL);
		}
		i++;
	}
	return (stack);
}