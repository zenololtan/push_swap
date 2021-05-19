/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/19 17:10:58 by ztan          #+#    #+#                 */
/*   Updated: 2021/05/19 21:31:00 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include "libft/libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>

void	print_content(void *content)
{
	t_content *cont;

	cont = content;
	printf(" - %i\n", cont->i);
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

t_dlist		*create_rand_arr(int size)
{
	time_t t;
	srand((unsigned) time(&t));
	t_dlist *arr = NULL;
	int i = 0;

	while (i < size)
	{
		ft_dlstadd_back(&arr, ft_dlstnew(new_cont(rand())));
		i++;
	}
	return (arr);
}

/*----------------------------------------------------------------------------*/

int	main(int argc, char **argv)
{

	if (argc <= 1 || !argv)
	{
		ft_putstr_fd("Error: no args\n", STDERR_FILENO);
		return (1);
	}
		
	return (0);
}