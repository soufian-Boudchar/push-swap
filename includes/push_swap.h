/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:09:51 by sboudcha          #+#    #+#             */
/*   Updated: 2025/12/29 17:31:20 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h> //////
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "../libft/libft.h"


int					validate_input(char **av);
int					ft_check_tokens(char **str);
int					ft_check_duplicates(t_list *stack);
t_list				*ft_free_tokens(char **tokens);
t_list				*ft_init_stack_a(char **tokens);
t_list				*add_node(int content);
t_list				*ft_print_error(void);
t_list	            *ft_parsing(int ac, char *av[]);
t_list              *error_free_tokens(char **tokens);
t_list              *error_free_stack(t_list **stack);
void				add_back(t_list **head, t_list *new);