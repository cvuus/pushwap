/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libcircularlinkedlist.h                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cosimavonuechtritz <cosimavonuechtritz@      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/07 09:14:40 by cuechtri      #+#    #+#                 */
/*   Updated: 2023/02/22 17:06:54 by cuechtri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBCIRCULARLINKEDLIST_H
# define LIBCIRCULARLINKEDLIST_H

# include <stdlib.h>
# include "../libftprintf/ft_printf.h"

typedef struct s_node
{
	int				data;
	int				index;
	struct s_node	*next;
}				t_node;

t_node	*ft_lstlast_cl(t_node *lst);
t_node	*ft_lstnew_cl(int content, int index);
int		ft_get(t_node *list, int index);
int		ft_lstsize_cl(t_node *lst);
void	ft_lstchangedata_cl(t_node **list, int change, int value);
void	ft_lstclear_cl(t_node **lst);
void	ft_lstdelone_cl(t_node *lst);
void	ft_lstdelfirst_cl(t_node **list);
void	ft_printcircularlistindex_cl(t_node **list);
void	ft_lstadd_front_cl(t_node **lst, t_node *newHead);
void	ft_lstadd_back_cl(t_node **lst, t_node *new);
void	ft_lstremove_cl(t_node **list, int delindex);
void	ft_printcircularlist_cl(t_node **list);

#endif