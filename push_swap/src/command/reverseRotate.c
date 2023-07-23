/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverseRotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosimavonuechtritz <cosimavonuechtritz@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:04:40 by cuechtri          #+#    #+#             */
/*   Updated: 2023/02/28 09:18:53 by cosimavonue      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	reverse_rotate(t_node **list)
{
	t_node	*lastelement;

	if (*list == NULL)
		return ;
	if ((*list)->next == *list)
		return ;
	lastelement = ft_lstlast_cl(*list);
	*list = lastelement;
}

void	rra(t_node **list)
{
	ft_printf("rra\n");
	reverse_rotate(list);
}

void	rrb(t_node **list)
{
	ft_printf("rrb\n");
	reverse_rotate(list);
}

void	rrr(t_node **listA, t_node **listB)
{
	ft_printf("rrr\n");
	reverse_rotate(listA);
	reverse_rotate(listB);
}
