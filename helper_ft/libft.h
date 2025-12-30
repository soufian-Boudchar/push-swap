/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:56:32 by sboudcha          #+#    #+#             */
/*   Updated: 2025/12/29 17:51:56 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <limits.h>

typedef struct s_list
{
	int				value;
	struct s_list	*next;
}					t_list;
t_list	*add_node(int content);
void	ft_list_free(t_list **head);
void	add_back(t_list **head, t_list *new);
void	ft_add_front(t_list **head, t_list *new);
 
long	ft_atoi(char *ptr);
char	*ft_join(int size, char **str);
char	**ft_split(char *s);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char *s1, char *s2);
int	ft_strlen(const char *s);
char	*ft_substr(char *s, int start, int len);
void	ft_strcat(char *dst, char *src);
#endif 