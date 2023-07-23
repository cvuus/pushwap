/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosimavonuechtritz <cosimavonuechtritz@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:45:25 by cuechtri          #+#    #+#             */
/*   Updated: 2023/03/01 08:06:20 by cosimavonue      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libcircularlinkedlist.h"

void	ft_lstadd_back_cl(t_node **lst, t_node *new)
{
	t_node	*last;
	t_node	*head;

	if (new == NULL)
		return ;
	if (lst[0] == 0)
	{
		lst[0] = new;
		new->next = new;
	}
	else
	{
		head = *lst;
		last = ft_lstlast_cl(*lst);
		last->next = new;
		new->next = head;
	}
}
