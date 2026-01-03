/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sboudcha <sboudcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:09:51 by sboudcha          #+#    #+#             */
/*   Updated: 2026/01/02 21:26:54 by sboudcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "utils.h"
# include <limits.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
// stack utils
int		validate_input(char **av);
int		ft_check_tokens(char **str);
int		ft_check_duplicates(t_list *stack);
t_list	*ft_init_stack(char **tokens);
int		ft_check_sorted(t_list *stack_a);
// nodes utils
t_list	*ft_new_node(int content);
t_list	*ft_parsing(int ac, char *av[]);
void	ft_add_back(t_list **head, t_list *new);
// operation: swap (s)
void	ft_sa(t_list **stack);
void	ft_sb(t_list **stack);
void	ft_ss(t_list **stack_a, t_list **stack_b);
// operation: push (p)
void	ft_pb(t_list **stack_a, t_list **stack_b);
void	ft_pa(t_list **stack_b, t_list **stack_a);
// operation: rotate (r)
void	ft_ra(t_list **stack_a);
void	ft_rb(t_list **stack_b);
void	ft_rr(t_list **stack_a, t_list **stack_b);
// operation: reverse rotate (rr)
void	ft_rra(t_list **stack_a);
void	ft_rrb(t_list **stack_b);
void	ft_rrr(t_list **stack_a, t_list **stack_b);
// sorting
void	ft_sort_two(t_list **stack);
void	ft_sort_three(t_list **stack);
void	ft_sort_four(t_list **stack_a, t_list **stack_b);
void	ft_sort_five(t_list **stack_a, t_list **stack_b);
void	ft_big_sort(t_list **stack_a, t_list **stack_b);
void	ft_sorting(t_list **stack_a, t_list **stack_b);
#endif
