/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelfirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosimavonuechtritz <cosimavonuechtritz@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:47:02 by cuechtri          #+#    #+#             */
/*   Updated: 2023/02/11 14:27:42 by cosimavonue      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libcircularlinkedlist.h"

//What happens if list = 0 || list = 1 || list > 1

void	ft_lstdelfirst_cl(t_node **list)
{
	t_node	*head;
	t_node	*lastnode;

	head = *list;
	if (head == NULL)
		return ;
	if (head->next == head)
	{
		ft_lstdelone_cl(*list);
		*list = NULL;
		return ;
	}
	lastnode = ft_lstlast_cl(head);
	*list = head->next;
	lastnode->next = *list;
	ft_lstdelone_cl(head);
}
