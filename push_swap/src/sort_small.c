/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_small.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cosimavonuechtritz <cosimavonuechtritz@      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/22 16:07:58 by cuechtri      #+#    #+#                 */
/*   Updated: 2023/03/03 16:34:13 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_small(t_node **lista, t_node **listb)
{
	int	size;

	size = ft_lstsize_cl(*lista);
	if (sorted(*lista) == 1)
		return ;
	if (size == 2)
		sa(lista);
	else if (size == 3)
	{
		sort_three(lista);
	}
	else if (size < 6)
		sort_five(lista, listb);
}

void	sort_three(t_node **l)
{
	int	sorted;

	sorted = 0;
	index_list(l);
	while (sorted != 1)
	{
		if (ft_get(*l, 0) < ft_get(*l, 1) && ft_get(*l, 1) < ft_get(*l, 2))
			sorted = 1;
		else if (ft_get(*l, 0) < ft_get(*l, 1) && ft_get(*l, 1) > ft_get(*l, 2)
			&& ft_get(*l, 2) < ft_get(*l, 0))
			ra(l);
		else if (ft_get(*l, 0) > ft_get(*l, 1) && ft_get(*l, 1) < ft_get(*l, 2)
			&& ft_get(*l, 2) < ft_get(*l, 0))
			ra(l);
		else if (ft_get(*l, 0) < ft_get(*l, 1) && ft_get(*l, 1) > ft_get(*l, 2))
			sa(l);
		else if (ft_get(*l, 0) > ft_get(*l, 1) && ft_get(*l, 1) < ft_get(*l, 2))
			sa(l);
		else if (ft_get(*l, 0) > ft_get(*l, 1) && ft_get(*l, 1) > ft_get(*l, 2))
			ra(l);
	}
}

void	sort_five(t_node **lista, t_node **listb)
{
	int	minimum;
	int	size;

	minimum = find_minimum(*lista);
	if ((*lista)->next->index == minimum)
		ra(lista);
	else
	{
		while ((*lista)->index != minimum)
			rra(lista);
	}
	pb(lista, listb);
	size = ft_lstsize_cl(*lista);
	if (size == 4)
	{
		minimum = find_minimum(*lista);
		while ((*lista)->index != minimum)
			rra(lista);
		pb(lista, listb);
	}
	sort_three(lista);
	pa(lista, listb);
	if (size == 4)
		pa(lista, listb);
}

int	find_minimum(t_node *list)
{
	int	size;
	int	minimum;

	minimum = INT_MAX;
	size = ft_lstsize_cl(list);
	while (size)
	{
		if (list->index < minimum)
			minimum = list->index;
		size--;
		list = list->next;
	}
	return (minimum);
}

int	find_maximum(t_node *list)
{
	int	size;
	int	max;

	max = INT_MIN;
	size = ft_lstsize_cl(list);
	while (size)
	{
		if (list->data > max && list->index == 0)
			max = list->data;
		size--;
		list = list->next;
	}
	return (max);
}
