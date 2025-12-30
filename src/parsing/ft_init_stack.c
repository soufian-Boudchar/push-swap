/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 18:19:25 by sboudcha          #+#    #+#             */
/*   Updated: 2025/12/30 09:25:49 by sboudcha         ###   ########.fr       */
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

t_list	*ft_parsing(int ac, char *av[])
{
	char	*joined;
	char	**tokens;
	t_list	*stack_a;

	if (!validate_input(av + 1))
		return (ft_print_error_list());
	joined = ft_join(ac - 1, av + 1);
	if (!joined)
		return (ft_print_error_list());
	tokens = ft_split(joined);
	free(joined);
	if (!tokens)
		return (ft_print_error_list());
	if (!validate_input(tokens) || !ft_check_tokens(tokens))
		return (error_free_tokens(tokens));
	stack_a = ft_init_stack_a(tokens);
	if (!stack_a)
		return (error_free_tokens(tokens));
	ft_free_tokens(tokens);
	if (!ft_check_duplicates(stack_a))
		return (error_free_stack(&stack_a));
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
		add_back(&stack, add_node((int)ft_atoi(tokens[i])));
		if (ft_atoi(tokens[i]) == 2147483648)
		{
			ft_list_free(&stack);
			return (NULL);
		}

		i++;
	}

	return (stack);
}