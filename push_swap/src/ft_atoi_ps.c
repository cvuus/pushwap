/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi_ps.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cosimavonuechtritz <cosimavonuechtritz@      +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 15:46:32 by cuechtri      #+#    #+#                 */
/*   Updated: 2023/03/03 16:33:08 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	int	ft_iswhitespace(char c);
int			calculate_result(const char *str, long long int *result);

int	ft_atoi_ps(const char *str, long long int *value)
{
	int				sign;
	long long int	result;

	sign = 1;
	result = 0;
	while (ft_iswhitespace(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	if (*str == '+' && sign == -1)
		return (-1);
	if (*str == '+')
		str++;
	if (!(ft_isdigit(*str)))
		return (-1);
	if (calculate_result(str, &result) < 0)
		return (-1);
	return (*value = result * sign, 1);
}

int	ft_iswhitespace(char c)
{
	if (((c >= 9) && (c <= 13)) || (c == 32))
		return (c);
	return (0);
}

int	calculate_result(const char *str, long long int *result)
{
	while (ft_isdigit(*str))
	{
		*result = (*result * 10 + (*str - '0'));
		str++;
	}
	if (*str != '\0')
		return (-1);
	return (0);
}
