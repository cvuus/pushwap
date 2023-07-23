/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstremove.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cosimavonuechtritz <cosimavonuechtritz@      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 19:40:42 by cosimavonue   #+#    #+#                 */
/*   Updated: 2023/02/28 10:51:57 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libcircularlinkedlist.h"

void	ft_lstremove_cl(t_node **list, int delindex)
{
	t_node	*curent;
	t_node	*previous;

	if (*list == NULL)
	{
		ft_printf("Index out of bounce in lstremove\n");
		return ;
	}
	if (delindex == 0)
	{
		ft_lstdelfirst_cl(list);
		return ;
	}
	if (delindex > (ft_lstsize_cl(*list) - 1))
		return ;
	curent = *list;
	previous = *list;
	while (delindex > 0)
	{
		previous = curent;
		curent = curent->next;
		delindex--;
	}
	previous->next = curent->next;
	ft_lstdelone_cl(curent);
}
