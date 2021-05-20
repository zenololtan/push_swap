/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/19 17:10:58 by ztan          #+#    #+#                 */
/*   Updated: 2021/05/20 20:42:52 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

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

t_dlist	*get_list(char **argv, int argc)
{
	int		i;
	t_dlist	*new;

	i = 1;
	new = NULL;
	while (i < argc)
	{
		ft_dlstadd_back(&new, ft_dlstnew(new_cont(ft_atoi(argv[i]))));
		i++;
	}
	return (new);
}

int	main(int argc, char **argv)
{
	t_dlist	*array_a;
	t_dlist	*array_b;

	array_a = NULL;
	array_b = NULL;
	if (argc <= 1 || !argv || !*argv || check_digit(argv, argc) ||
		 check_dupe(argv, argc) || check_max_or_min(argv, argc))
	{
		ft_putstr_fd("Error\n", STDERR_FILENO);
		return (1);
	}
	array_a = get_list(argv, argc);
	print_arrays(array_a, array_b);
	swap(&array_a);
	print_arrays(array_a, array_b);
	push(&array_b, &array_a);
	print_arrays(array_a, array_b);
	return (0);
}