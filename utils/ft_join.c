/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 13:15:03 by sboudcha          #+#    #+#             */
/*   Updated: 2026/01/02 21:34:38 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

static int	ft_len(int size, char **str)
{
	int	i;
	int	j;
	int	total;

	i = 0;
	j = 0;
	total = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j])
		{
			total++;
			j++;
		}
		i++;
	}
	total += (1 * (size - 1));
	return (total);
}

static char	*ft_res(int size, char *res, char **str)
{
	char	*tmp;
	int		i;

	i = 0;
	while (i < size)
	{
		tmp = res;
		res = ft_strjoin(res, str[i]);
		if (!res)
			return (NULL);
		free(tmp);
		if (i < size - 1)
		{
			tmp = res;
			res = ft_strjoin(tmp, " ");
			if (!res)
				return (NULL);
			free(tmp);
		}
		i++;
	}
	return (res);
}

char	*ft_join(int size, char **str)
{
	char	*res;
	int		len;

	if (!str)
		return (NULL);
	len = ft_len(size, str);
	res = (char *)malloc(len + 1);
	if (!res)
		return (NULL);
	res[0] = '\0';
	return (ft_res(size, res, str));
}
