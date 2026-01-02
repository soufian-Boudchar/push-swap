/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 03:50:52 by sboudcha          #+#    #+#             */
/*   Updated: 2026/01/02 03:50:52 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"
static int ft_find_index(t_list *stack, int content)
{
    t_list *tmp;
    tmp = stack;
    int i;
    i = 0;
    while (tmp)
    {
        if (tmp->content < content)
            i++;
        tmp = tmp->next;
    }
    return i;
}

void ft_set_index(t_list **stack)
{
    t_list *tmp;
    tmp = *stack;
    while (tmp)
    {
        tmp->index = ft_find_index(*stack, tmp->content);
        tmp = tmp->next;
    }
}