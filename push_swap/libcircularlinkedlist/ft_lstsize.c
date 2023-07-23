/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosimavonuechtritz <cosimavonuechtritz@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:29:15 by cuechtri          #+#    #+#             */
/*   Updated: 2023/02/11 14:15:30 by cosimavonue      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libcircularlinkedlist.h"

int	ft_lstsize_cl(t_node *lst)
{
	t_node	*current;
	t_node	*head;
	int		size;

	size = 2;
	if (lst == NULL)
		return (0);
	if (lst->next == lst)
		return (1);
	head = lst;
	current = lst->next;
	while (current->next != head)
	{
		current = current->next;
		size++;
	}
	return (size);
}
