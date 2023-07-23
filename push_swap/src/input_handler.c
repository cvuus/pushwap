/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosimavonuechtritz <cosimavonuechtritz@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:27:16 by cosimavonue       #+#    #+#             */
/*   Updated: 2023/03/02 14:59:47 by cosimavonue      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//Ft atoi needs to check for int range, if it is a int or sth else and change b
//How to check if string exceeds maximum integer range

int		doubler_checker(t_node **list);
char	**free_all(char **result);

int	input_handler(t_node **list, int argc, char **argv)
{
	long long int	number;
	int				check;
	int				i;

	i = 1;
	check = 0;
	while (i < argc)
	{
		if ((ft_strrchr(argv[i], ' ')))
			check = split_input(argv[i], list);
		else
			check = unsplitted_input(argv[i], list);
		if (check < 0 || argv[i][0] == ' ')
			return (write(2, "Error\n", 6), -1);
		i++;
	}
	if (doubler_checker(list) < 0 || *list == NULL)
		return (write(2, "Error\n", 6), -1);
	return (0);
}

int	split_input(char *argv, t_node **list)
{
	char			**splitted;
	int				i;
	int				check;
	long long int	number;
	t_node			*node;

	i = 0;
	splitted = ft_split(argv, ' ');
	if (splitted == NULL)
		return (-1);
	while (splitted[i])
	{
		check = ft_atoi_ps(splitted[i], &number);
		if ((number) > INT_MAX || number < INT_MIN || check < 0)
			return (free_all(splitted), -1);
		node = ft_lstnew_cl(number, 0);
		if (node == NULL)
			return (-1);
		else
			ft_lstadd_back_cl(list, node);
		i++;
	}
	return (free_all(splitted), 1);
}

int	unsplitted_input(char *argv, t_node **list)
{
	int				check;
	long long int	number;
	t_node			*node;

	check = ft_atoi_ps(argv, &number);
	if ((number) > INT_MAX || number < INT_MIN || check < 0)
		return (-1);
	node = ft_lstnew_cl(number, 0);
	if (node == NULL)
		return (-1);
	else
		ft_lstadd_back_cl(list, node);
	return (1);
}

int	doubler_checker(t_node **list)
{
	int		*array;
	int		index;
	int		arrayindex;
	int		size;

	index = 0;
	arrayindex = 0;
	size = ft_lstsize_cl(*list);
	array = ft_calloc(size, sizeof(int));
	if (array == NULL)
		return (-1);
	while (index < size)
	{
		while (arrayindex < index)
		{
			if ((*list)->data == array[arrayindex])
				return (free(array), -1);
			arrayindex++;
		}
		array[arrayindex] = (*list)->data;
		arrayindex = 0;
		*list = (*list)->next;
		index++;
	}
	return (free(array), 0);
}

char	**free_all(char **result)
{
	int	j;

	j = 0;
	while (result[j])
	{
		free(result[j]);
		j++;
	}
	free(result);
	return (NULL);
}
