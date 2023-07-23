/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_get.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cosimavonuechtritz <cosimavonuechtritz@      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/13 15:22:52 by cuechtri      #+#    #+#                 */
/*   Updated: 2023/02/22 17:06:40 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libcircularlinkedlist.h"

int	ft_get(t_node *list, int index)
{
	t_node	*current;

	if (ft_lstsize_cl(list) == 0 || (index) > (ft_lstsize_cl(list) - 1))
		return (ft_printf("An Error has occured in ft_get_cl\n"), 0);
	if (ft_lstsize_cl(list) == 1)
		return (list->data);
	current = list;
	while (index > 0)
	{
		current = current->next;
		index--;
	}
	return (current->index);
}
