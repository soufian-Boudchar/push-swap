/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_lists.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:31:38 by sboudcha          #+#    #+#             */
/*   Updated: 2026/01/02 21:30:50 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

void	ft_list_free(t_list **head)
{
	t_list	*tmp;

	if (!head || !*head)
		return ;
	tmp = (*head)->next;
	while (tmp)
	{
		free(*head);
		*head = tmp;
		tmp = tmp->next;
	}
	free(*head);
}
