/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosimavonuechtritz <cosimavonuechtritz@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:29:18 by cosimavonue       #+#    #+#             */
/*   Updated: 2023/03/01 08:19:24 by cosimavonue      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		ft_find_min(t_node *list);
int		find_pivot(t_node **list);
int		smallerinlist(t_node *lista, int pivot);
void	partition(t_node **lista, t_node **listb, int pivot);
void	index_list(t_node **list);
int		find_median(t_node **list, int div);

void	index_list(t_node **list)
{
	int	value;
	int	max;
	int	size2;
	int	size;

	size = ft_lstsize_cl(*list);
	size2 = size;
	value = size - 1;
	set_index_zero(list);
	while (value)
	{
		max = find_maximum(*list);
		while (size2)
		{
			if ((*list)->data == max)
				(*list)->index = value;
			size2--;
			*list = (*list)->next;
		}
		value--;
		size2 = size;
	}
}

int	sorted(t_node *list)
{
	int	size;

	size = ft_lstsize_cl(list);
	if (size == 2)
	{
		if (list->index < list->next->index)
			return (1);
		else
			return (0);
	}
	size--;
	while (size)
	{
		if (list->index < list->next->index)
		{
			list = list->next;
			size--;
		}
		else
			return (0);
	}
	return (1);
}

void	quicksortwaytob(t_node **lista, t_node **listb, int pivot)
{
	if (*lista == NULL)
		return ;
	if (sorted(*lista) && ft_lstsize_cl(*listb) == 0)
		return ;
	if (ft_lstsize_cl(*lista) <= 5)
	{
		sort_small(lista, listb);
		if (ft_lstsize_cl(*listb) != 0)
			sortbacktoa(lista, listb);
		return ;
	}
	else
	{
		partition(lista, listb, find_pivot(lista));
		quicksortwaytob(lista, listb, find_pivot(lista));
	}
}

//sa and sb if sb->index < sb->next->index
//if rb needs to be perfromed do rr if 

void	partition(t_node **lista, t_node **listb, int pivot)
{
	int	size;
	int	rot;

	size = ft_lstsize_cl(*lista);
	while (size)
	{
		if ((*lista)->index <= pivot)
		{
			if ((*lista)->index < (pivot / 2))
			{
				pb(lista, listb);
				if (smallerinlist(*lista, pivot) && (*lista)->index > pivot)
					rr(lista, listb);
				else
					rb(listb);
			}
			else
				pb(lista, listb);
		}
		else if (smallerinlist(*lista, pivot))
			ra(lista);
		else if (smallerinlist(*lista, pivot) == 0)
			return ;
		size--;
	}
}

void	sortbacktoa(t_node **lista, t_node **listb)
{
	int	size;

	index_list(listb);
	size = ft_lstsize_cl(*listb);
	while (size != 0)
	{
		if ((*listb)->index == (size - 1))
		{
			pa(lista, listb);
			size = ft_lstsize_cl(*listb);
			if (size == 0)
				return ;
			index_list(listb);
		}
		else if (shortest_route(*listb, size -1) < 0)
			rrb(listb);
		else
			rb(listb);
	}
}
