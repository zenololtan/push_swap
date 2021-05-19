/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   swap.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/19 19:23:48 by ztan          #+#    #+#                 */
/*   Updated: 2021/05/19 21:08:41 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	swap(t_dlist **lst)
{
	t_dlist *temp;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	temp = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = temp;
}