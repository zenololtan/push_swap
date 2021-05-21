/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_dlist_first_bonus.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/19 19:27:32 by ztan          #+#    #+#                 */
/*   Updated: 2021/05/19 19:27:53 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dlist	*ft_dlstlast(t_dlist *lst)
{
	if (!lst)
		return (NULL);
	while (lst->prev)
		lst = lst->prev;
	return (lst);
}
