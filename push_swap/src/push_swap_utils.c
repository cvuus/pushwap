/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosimavonuechtritz <cosimavonuechtritz@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:09:35 by cuechtri          #+#    #+#             */
/*   Updated: 2023/03/01 22:23:40 by cosimavonue      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	smallerinlist(t_node *list, int pivot)
{
	int	size;

	size = ft_lstsize_cl(list);
	while (size)
	{
		if (list->index <= pivot)
			return (1);
		else
			list = list->next;
		size--;
	}
	return (0);
}

int	find_pivot(t_node **list)
{
	int	size;
	int	pivot;

	if (*list == NULL)
		return (0);
	size = ft_lstsize_cl(*list);
	if (size < 300)
		pivot = find_median(list, 4);
	else
		pivot = find_median(list, 7);
	return (pivot);
}

int	find_median(t_node **lista, int div)
{
	t_node	*tmp;
	t_node	*list;
	int		median;
	int		i;

	i = 0;
	list = *lista;
	tmp = *lista;
	median = ft_lstsize_cl(tmp) / div;
	index_list(&tmp);
	while (tmp->index != median)
	{
		i++;
		list = list->next;
		tmp = tmp->next;
	}
	return (list->index);
}

void	set_index_zero(t_node **list)
{
	int	size;

	size = ft_lstsize_cl(*list);
	while (size)
	{
		(*list)->index = 0;
		*list = (*list)->next;
		size--;
	}
}

int	shortest_route(t_node *list, int element)
{
	int	size;
	int	position;
	int	middle;

	size = ft_lstsize_cl(list) / 2;
	while (size)
	{
		if ((list)->index == element)
			return (1);
		list = list->next;
		size--;
	}
	return (-100);
}
