/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 18:19:25 by sboudcha          #+#    #+#             */
/*   Updated: 2026/01/01 02:38:21 by sboudcha         ###   ########.fr       */
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

t_list	*ft_init_stack(char **tokens)
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

