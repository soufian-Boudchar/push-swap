/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:09:44 by sboudcha          #+#    #+#             */
/*   Updated: 2025/12/30 22:34:56 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int ac, char *av[])
{
	t_list *stack_a;
	stack_a = NULL;
	stack_a = ft_parsing(ac - 1, av + 1);
	
	t_list *tmp;
	tmp = stack_a;

	while (tmp)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}

	while (stack_a)
	{
		tmp = stack_a;
		stack_a = stack_a->next;
		free(tmp);
	}
}