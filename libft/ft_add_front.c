/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lists.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:09:31 by sboudcha          #+#    #+#             */
/*   Updated: 2025/12/29 16:53:59 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_add_front(t_list **head, t_list *new)
{
	t_list	*tmp;

	tmp = new;
	tmp->next = *head;
	*head = tmp;
}
