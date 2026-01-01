/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 23:57:52 by sboudcha          #+#    #+#             */
/*   Updated: 2026/01/01 02:20:47 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int ft_check_sorted(t_list *stack_a)
{
    t_list *i;
    t_list *j;

    i = stack_a;
    j = stack_a->next;

    while (j)
    {
        if (i->data > j->data)
            return (1);
        j = j->next;
        i = i->next;
    }
    return (0);
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