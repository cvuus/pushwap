/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstchangedata.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: cuechtri <cuechtri@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/14 17:28:14 by cuechtri      #+#    #+#                 */
/*   Updated: 2023/02/14 18:20:38 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libcircularlinkedlist.h"

void	ft_lstchangedata_cl(t_node **list, int change, int value)
{
	t_node	*head;
	int		size;

	size = ft_lstsize_cl((*list));
	if (ft_lstsize_cl(*list) == 0)
		return ;
	head = *list;
	while ((*list)->data != change && size > 0)
	{
		*list = (*list)->next;
		size--;
	}
	(*list)->data = value;
	*list = head;
}
