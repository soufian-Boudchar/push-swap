/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 20:41:17 by sboudcha          #+#    #+#             */
/*   Updated: 2025/12/29 17:03:27 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char *s)
{
	int	i;
	int	nb;
	int	in_word;

	i = 0;
	nb = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			nb++;
		}
		i++;
	}
	return (nb);
}

static int	ft_skip(char *str)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] == ' '))
		i++;
	return (i);
}

static int	ft_words(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != ' ')
		i++;
	return (i);
}

static char	**ft_free_error(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
		free(ptr[i++]);
	free(ptr);
	return (NULL);
}

char	**ft_split(char *s)
{
	int		full_len;
	char	**ptr;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	full_len = ft_count(s);
	ptr = malloc((full_len + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (i < full_len)
	{
		j = j + ft_skip(&s[j]);
		ptr[i] = ft_substr(s, j, ft_words(&s[j]));
		if (!ptr[i])
			return (ft_free_error(ptr));
		j = j + ft_words(&s[j]);
		i++;
	}
	ptr[i] = NULL;
	return (ptr);
}
