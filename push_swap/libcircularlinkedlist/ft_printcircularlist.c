/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printcircularlist.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: cosimavonuechtritz <cosimavonuechtritz@      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 11:08:44 by cuechtri      #+#    #+#                 */
/*   Updated: 2023/02/21 12:07:27 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libcircularlinkedlist.h"
#include <stdio.h>

// if list.size == 0 || list = 1 || list > 1

void	ft_printcircularlist_cl(t_node **list)
{
	t_node	*head;
	t_node	*current;

	if (list == NULL)
	{
		ft_printf("ERROR: List is null\n");
		return ;
	}
	if (*list == NULL)
	{
		ft_printf("ERROR: List is null\n");
		return ;
	}
	current = *list;
	head = *list;
	ft_printf(" %d", current->data);
	current = current->next;
	while (current != head)
	{
		ft_printf(" %d", current->data);
		current = current->next;
	}
	ft_printf("\n");
}

void	ft_printcircularlistindex_cl(t_node **list)
{
	t_node	*head;
	t_node	*current;

	if (list == NULL)
	{
		ft_printf("ERROR: List is null\n");
		return ;
	}
	if (*list == NULL)
	{
		ft_printf("ERROR: List is null\n");
		return ;
	}
	current = *list;
	head = *list;
	ft_printf(" %d", current->index);
	current = current->next;
	while (current != head)
	{
		ft_printf(" %d", current->index);
		current = current->next;
	}
	ft_printf("\n");
}
