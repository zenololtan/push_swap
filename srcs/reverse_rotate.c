/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reverse_rotate.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/23 16:25:59 by ztan          #+#    #+#                 */
/*   Updated: 2021/05/23 16:29:32 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	reverse_rotate(t_dlist **lst)
{
	t_dlist *node;

	if (!lst || !*lst)
		return ;
	node = ft_dlstlast((*lst));
	ft_dlstadd_front(lst, ft_dlstnew(dup_cont(node->content)));
	ft_dlstdelone(lst, ft_dlstsize(*lst), del_content);
}