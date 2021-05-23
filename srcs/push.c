/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/20 20:15:15 by ztan          #+#    #+#                 */
/*   Updated: 2021/05/23 16:43:55 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	push(t_dlist **from, t_dlist **dest)
{
	if (!from || !*from)
		return ;
	ft_dlstadd_front(dest, ft_dlstnew(dup_cont((*from)->content)));
	ft_dlstdelone(from, 1, del_content);
}