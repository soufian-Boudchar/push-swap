/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tokens.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 09:31:30 by sboudcha          #+#    #+#             */
/*   Updated: 2025/12/29 17:29:23 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_list	*ft_free_tokens(char **tokens)
{
	int i;

	i = 0;
	while (tokens[i])
		free(tokens[i++]);
	free(tokens);
	return (NULL);
}

t_list  *error_free_tokens(char **tokens)
{
    ft_free_tokens(tokens);
    return (ft_print_error());
}

// Function bach t-freer stack w t-affichi error
t_list  *error_free_stack(t_list **stack)
{
    ft_list_free(stack);
    return (ft_print_error());
}