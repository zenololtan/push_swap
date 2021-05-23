/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlist_iter_bonus.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/19 17:45:52 by ztan          #+#    #+#                 */
/*   Updated: 2021/05/19 17:58:55 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstiter(t_dlist *lst, void (*f)(void *))
{
	t_dlist *temp;

	if (!lst)
		return ;
	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}