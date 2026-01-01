/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_lists.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:31:38 by sboudcha          #+#    #+#             */
/*   Updated: 2025/12/31 17:31:32 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"
void	ft_list_free(t_list **head)
{
	if (!head || !*head)
		return ;

	t_list *tmp;

	tmp = (*head)->next;

	while (tmp)
	{
		free(*head);
		*head = tmp;
		tmp = tmp->next;
	}
	free(*head);
}