/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosimavonuechtritz <cosimavonuechtritz@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:14:41 by cosimavonue       #+#    #+#             */
/*   Updated: 2023/02/28 09:18:59 by cosimavonue      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swap(t_node **list)
{
	t_node	*head;
	t_node	*firstelement;

	if (ft_lstsize_cl(*list) < 2)
		return ;
	head = ft_lstnew_cl((*list)->data, (*list)->index);
	firstelement = ft_lstnew_cl((*list)->next->data, (*list)->next->index);
	ft_lstdelfirst_cl(list);
	ft_lstdelfirst_cl(list);
	ft_lstadd_front_cl(list, head);
	ft_lstadd_front_cl(list, firstelement);
}

void	sa(t_node **list)
{
	ft_printf("sa\n");
	swap(list);
}

void	sb(t_node **list)
{
	ft_printf("sb\n");
	swap(list);
}

void	ss(t_node **listA, t_node **listB)
{
	ft_printf("ss\n");
	swap(listA);
	swap(listB);
}
