/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cosimavonuechtritz <cosimavonuechtritz@      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 15:03:59 by cuechtri      #+#    #+#                 */
/*   Updated: 2023/02/28 10:51:41 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

// if list = 0 || list = 1 || list > 1

void	rotate(t_node **list)
{
	t_node	*newhead;

	if (*list == NULL)
		return ;
	if ((*list)->next == *list)
		return ;
	newhead = (*list)->next;
	*list = newhead;
}

void	ra(t_node **list)
{
	ft_printf("ra\n");
	rotate(list);
}

void	rb(t_node **list)
{
	ft_printf("rb\n");
	rotate(list);
}

void	rr(t_node **listA, t_node **listB)
{
	ft_printf("rr\n");
	rotate(listA);
	rotate(listB);
}
