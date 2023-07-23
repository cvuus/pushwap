/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cosimavonuechtritz <cosimavonuechtritz@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 09:47:02 by cuechtri          #+#    #+#             */
/*   Updated: 2023/02/11 11:36:32 by cosimavonue      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libcircularlinkedlist.h"

void	ft_lstdelone_cl(t_node *lst)
{
	if (lst == 0)
		return ;
	free(lst);
}
