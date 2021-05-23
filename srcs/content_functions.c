/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   content_functions.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/20 19:39:49 by ztan          #+#    #+#                 */
/*   Updated: 2021/05/23 16:18:04 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	print_content(void *content)
{
	t_content *cont;

	cont = content;
	printf(" - %i\n", cont->i);
}

void	print_numbers(t_dlist *array_a, t_dlist *array_b)
{
	t_content *a;
	t_content *b;
	
	a = NULL;
	b = NULL;
	if (array_a)
		a = array_a->content;
	if (array_b)
		b = array_b->content;
	if (a)
		ft_putstr_fd(ft_itoa(a->i), STDOUT_FILENO);
	else
		ft_putstr_fd(" ", STDOUT_FILENO);
	ft_putstr_fd(" ", STDOUT_FILENO);
	if (b)
		ft_putstr_fd(ft_itoa(b->i), STDOUT_FILENO);
	ft_putstr_fd("\n", STDOUT_FILENO);
}

void	print_arrays(t_dlist *array_a, t_dlist *array_b)
{
	int len;

	if (ft_dlstsize(array_a) >= ft_dlstsize(array_b))
		len = ft_dlstsize(array_a);
	else
		len = ft_dlstsize(array_b);
	while (len > 0)
	{
		print_numbers(array_a, array_b);
		if (array_a)
			array_a = array_a->next;
		if (array_b)
			array_b = array_b->next;
		len--;
	}
	ft_putstr_fd("- -\na b\n", STDOUT_FILENO);
	ft_putstr_fd("------------------------------------------\n", STDOUT_FILENO);
}

t_content	*dup_cont(t_content *cont)
{
	t_content *new;
	new = malloc(sizeof(t_content));
	new->i = cont->i;
	return (new);
}

t_content	*new_cont(int num)
{
	t_content *new;
	new = malloc(sizeof(t_content));
	new->i = num;
	return (new);
}

void	del_content(void *cont)
{
	free(cont);
}
