/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 15:32:52 by sboudcha          #+#    #+#             */
/*   Updated: 2025/12/30 09:15:07 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_list	*ft_print_error_list(void)
{
	write(2, "Error", 5);
	return (NULL);
}
int ft_print_error_int(void)
{
	write(2, "Error", 5);
	return (0);
}