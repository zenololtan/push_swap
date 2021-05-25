/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   funcs.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/20 20:15:15 by ztan          #+#    #+#                 */
/*   Updated: 2021/05/25 19:27:12 by ztan          ########   odam.nl         */
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

void	swap(t_dlist **lst)
{
	t_dlist *temp;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	temp = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = temp;
}

void	ss(t_dlist **a, t_dlist **b)
{
	swap(a);
	swap(b);
}

void	rotate(t_dlist **lst)
{
	if (!lst || !*lst)
		return ;
	ft_dlstadd_back(lst, ft_dlstnew(dup_cont((*lst)->content)));
	ft_dlstdelone(lst, 1, del_content);
}

void	rr(t_dlist **a, t_dlist **b)
{
	rotate(a);
	rotate(b);
}

void	reverse_rotate(t_dlist **lst)
{
	t_dlist *node;

	if (!lst || !*lst)
		return ;
	node = ft_dlstlast((*lst));
	ft_dlstadd_front(lst, ft_dlstnew(dup_cont(node->content)));
	ft_dlstdelone(lst, ft_dlstsize(*lst), del_content);
}

void	rrr(t_dlist **a, t_dlist **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
}
