/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:24:36 by sboudcha          #+#    #+#             */
/*   Updated: 2025/12/31 17:31:50 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"
char	*ft_substr(char *s, int start, int len)
{
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = start;
	if (!s)
		return (NULL);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (j < (start + len) && s[j])
		ptr[i++] = s[j++];
	ptr[i] = '\0';
	return (ptr);
}
