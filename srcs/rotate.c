/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/23 16:19:42 by ztan          #+#    #+#                 */
/*   Updated: 2021/05/23 16:25:18 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rotate(t_dlist **lst)
{
	if (!lst || !*lst)
		return ;
	ft_dlstadd_back(lst, ft_dlstnew(dup_cont((*lst)->content)));
	ft_dlstdelone(lst, 1, del_content);
}
