/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosimavonuechtritz <cosimavonuechtritz@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:36:34 by cuechtri          #+#    #+#             */
/*   Updated: 2023/02/11 11:36:35 by cosimavonue      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libcircularlinkedlist.h"

t_node	*ft_lstlast_cl(t_node *lst)
{
	t_node	*current;
	t_node	*head;

	if (lst == NULL)
		return (NULL);
	head = lst;
	current = head->next;
	while (current != head)
	{
		if (current->next == head)
			return (current);
		else
			current = current->next;
	}
	return (current);
}
