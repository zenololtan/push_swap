/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   content_functions.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/20 19:39:49 by ztan          #+#    #+#                 */
/*   Updated: 2021/05/20 20:55:49 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	print_content(void *content)
{
	t_content *cont;

	cont = content;
	printf(" - %i\n", cont->i);
}

void	print_arrays(t_dlist *array_a, t_dlist *array_b)
{
	
	while (array_a || array_b)
	{
		if (array_a)
			ft_putstr_fd(ft_itoa((t_content)array_a->content->i), STDOUT_FILENO);
		if (array_b)
			ft_putstr_fd(ft_itoa((t_content *)(array_a->content)->i), STDOUT_FILENO);
		printf("\n");
		if (array_a)
			array_a = array_a->next;
		if (array_b)
			array_b = array_b->next;
	}
	ft_putstr_fd("- -\na b\n", STDOUT_FILENO);
	ft_putstr_fd("---------------------------------------------------------------\n", STDOUT_FILENO);
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
