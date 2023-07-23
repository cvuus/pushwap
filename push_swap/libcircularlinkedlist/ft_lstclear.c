/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cosimavonuechtritz <cosimavonuechtritz@      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/19 11:01:32 by cuechtri      #+#    #+#                 */
/*   Updated: 2023/02/28 16:47:13 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libcircularlinkedlist.h"

//Edge Cases: size == 0 || size == 1 || size > 1

void	ft_lstclear_cl(t_node **lst)
{
	t_node	*tmp;
	t_node	*head;

	if (*lst == NULL)
		return ;
	head = *lst;
	if ((*lst)->next == head)
	{
		ft_lstdelone_cl(*lst);
		*lst = NULL;
		return ;
	}
	*lst = (*lst)->next;
	while (*lst != head)
	{
		tmp = (*lst)->next;
		ft_lstdelone_cl(*lst);
		*lst = tmp;
	}
	ft_lstdelone_cl(head);
	*lst = NULL;
}
