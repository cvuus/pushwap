/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cosimavonuechtritz <cosimavonuechtritz@      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/18 15:55:24 by cuechtri      #+#    #+#                 */
/*   Updated: 2023/02/28 16:54:19 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libcircularlinkedlist.h"

t_node	*ft_lstnew_cl(int content, int index)
{
	t_node	*new;

	new = malloc(sizeof(*new));
	if (new == 0)
		return (NULL);
	new->data = content;
	new->index = index;
	new->next = new;
	return (new);
}
