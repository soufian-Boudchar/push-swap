/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:56:32 by sboudcha          #+#    #+#             */
/*   Updated: 2025/12/31 18:12:03 by sboudcha         ###   ########.fr       */
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
	int				data;
	struct s_list	*next;
}					t_list;

t_list	*ft_new_node(int content);
void	ft_list_free(t_list **head);
void	ft_add_back(t_list **head, t_list *new);
void	ft_add_front(t_list **head, t_list *new);
int ft_list_size(t_list *list);

long	ft_atoi(char *ptr);
char	*ft_join(int size, char **str);
char	**ft_split(char *s);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char *s1, char *s2);
int	ft_strlen(const char *s);
char	*ft_substr(char *s, int start, int len);
void	ft_strcat(char *dst, char *src);
void	ft_free_tokens(char **tokens);
#endif 