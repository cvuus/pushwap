/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cosimavonuechtritz <cosimavonuechtritz@      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 16:04:40 by cuechtri      #+#    #+#                 */
/*   Updated: 2023/02/28 10:50:56 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push(t_node **list_pushed_off, t_node **list_to_push)
{
	t_node	*firstelement;

	if (*list_pushed_off == NULL)
	{
		ft_printf("Command Push: List is empty\n");
		return ;
	}
	firstelement = ft_lstnew_cl((*list_pushed_off)->data,
			(*list_pushed_off)->index);
	ft_lstadd_front_cl(list_to_push, firstelement);
	ft_lstdelfirst_cl(list_pushed_off);
}

void	pa(t_node **listA, t_node **listB)
{
	ft_printf("pa\n");
	push(listB, listA);
}

void	pb(t_node **listA, t_node **listB)
{
	ft_printf("pb\n");
	push(listA, listB);
}
