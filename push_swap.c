/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:09:44 by sboudcha          #+#    #+#             */
/*   Updated: 2025/12/30 09:14:47 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int ac, char *av[])
{
	t_list *stack_a;
	stack_a = NULL;
	if (ac <= 1)
		return ft_print_error_int();
	stack_a = ft_parsing(ac, av);
	
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