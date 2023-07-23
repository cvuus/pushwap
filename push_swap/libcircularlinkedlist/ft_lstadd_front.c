/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosimavonuechtritz <cosimavonuechtritz@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:13:37 by cuechtri          #+#    #+#             */
/*   Updated: 2023/02/11 11:54:31 by cosimavonue      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libcircularlinkedlist.h"
#include <stdio.h>

void	ft_lstadd_front_cl(t_node **lst, t_node *newHead)
{
	t_node	*lastnode;

	if (*lst == NULL)
	{
		lst[0] = newHead;
		newHead->next = newHead;
		return ;
	}
	lastnode = ft_lstlast_cl(*lst);
	newHead->next = *lst;
	lastnode->next = newHead;
	*lst = newHead;
}
