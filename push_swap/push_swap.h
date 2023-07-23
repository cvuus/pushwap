/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cosimavonuechtritz <cosimavonuechtritz@      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/11 11:45:31 by cosimavonue   #+#    #+#                 */
/*   Updated: 2023/02/28 10:40:14 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define INT_MIN -2147483648
# define INT_MAX 2147483647

# include "libft/libft.h"
# include "libftprintf/ft_printf.h"
# include "libcircularlinkedlist/libcircularlinkedlist.h"

//Command
void	sa(t_node **list);
void	sb(t_node **list);
void	ss(t_node **listA, t_node **listB);
void	pb(t_node **listB, t_node **listA);
void	pa(t_node **listA, t_node **listB);
void	rr(t_node **listA, t_node **listB);
void	rb(t_node **list);
void	ra(t_node **list);
void	rra(t_node **list);
void	rrb(t_node **list);
void	rrr(t_node **listA, t_node **listB);

//Input
void	index_list(t_node **list);
int		split_input(char *argv, t_node **list);
int		unsplitted_input(char *argv, t_node **list);
int		input_handler(t_node **list, int argc, char **argv);
int		ft_atoi_ps(const char *str, long long int *value);

//Sorting
void	sort_five(t_node **lista, t_node **listb);
void	sort_three(t_node **list);
void	sort_small(t_node **lista, t_node **listb);
void	quicksortwaytob(t_node **lista, t_node **listb, int pivot);
void	sortbacktoa(t_node **lista, t_node **listb);
void	swap_checker(t_node **lista, t_node **listb);
int		find_median(t_node **lista, int div);
int		find_pivot(t_node **list);
int		sorted(t_node *list);

//Utils
int		shortest_route(t_node *list, int element);
void	set_index_zero(t_node **list);
int		smallerinlist(t_node *list, int pivot);
int		find_minimum(t_node *list);
int		find_maximum(t_node *list);

#endif