/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cosimavonuechtritz <cosimavonuechtritz@      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/11 10:25:57 by cosimavonue   #+#    #+#                 */
/*   Updated: 2023/03/03 16:13:06 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Still need to do
// Check if input is bigger > max int or < min int
// Apply checker to it 
// Use split function on it
// ft_printcircularlist_cl(&lista);
// system("leaks -q push_swap");
// system("leaks -q push_swap");

int	main(int argc, char **argv)
{
	t_node	*lista;
	t_node	*listb;

	listb = NULL;
	lista = NULL;
	if (argc == 1)
		return (0);
	if (input_handler(&lista, argc, argv) < 0)
	{
		ft_lstclear_cl(&lista);
		return (1);
	}
	index_list(&lista);
	quicksortwaytob(&lista, &listb, find_pivot(&lista));
	ft_lstclear_cl(&lista);
	ft_lstclear_cl(&listb);
	free(lista);
	free(listb);
	return (0);
}
