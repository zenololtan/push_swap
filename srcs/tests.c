/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   tests.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/23 16:35:35 by ztan          #+#    #+#                 */
/*   Updated: 2021/05/23 16:57:45 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	swap_tests(t_dlist **a, t_dlist **b)
{
	t_dlist *test;

	test = NULL;
	ft_dlstadd_back(&test, ft_dlstnew(new_cont(1)));
	printf("-------------------swap_normal-------------------\n");
	swap(a);
	print_arrays(*a, *b);
	printf("-------------------swap_1-------------------\n");
	swap(&test);
	print_arrays(test, NULL);
	printf("-------------------swap_2-------------------\n");
	ft_dlstadd_back(&test, ft_dlstnew(new_cont(2)));
	swap(&test);
	print_arrays(test, NULL);
	printf("-------------------swap_0-------------------\n");
	test = NULL;
	swap(&test);
	print_arrays(test, NULL);
}

void	push_tests(t_dlist **a, t_dlist **b)
{
	t_dlist *test;

	test = NULL;
	printf("-------------------push_normal-------------------\n");
	push(a, b);
	print_arrays(*a, *b);
	printf("-------------------push_1-------------------\n");
	push(b, a);
	print_arrays(*a, *b);
	printf("-------------------push_0-------------------\n");
	push(&test, b);
	print_arrays(test, *b);
}

void	rotate_tests(t_dlist **a, t_dlist **b)
{
	t_dlist *test;

	test = NULL;
	ft_dlstadd_back(&test, ft_dlstnew(new_cont(1)));
	printf("-------------------rotate_normal-------------------\n");
	print_arrays(*a, *b);
	rotate(a);
	print_arrays(*a, *b);
	printf("-------------------rotate_1-------------------\n");
	print_arrays(*a, *b);
	rotate(&test);
	print_arrays(test, *b);
	printf("-------------------rotate_2-------------------\n");
	ft_dlstadd_back(&test, ft_dlstnew(new_cont(2)));
	print_arrays(test, *b);
	rotate(&test);
	print_arrays(test, *b);
	printf("-------------------rotate_3-------------------\n");
	ft_dlstadd_back(&test, ft_dlstnew(new_cont(3)));
	print_arrays(test, *b);
	rotate(&test);
	print_arrays(test, *b);
	printf("-------------------rotate_0-------------------\n");
	test = NULL;
	rotate(&test);
	print_arrays(test, *b);
	
}

void	reverse_rotate_tests(t_dlist **a, t_dlist **b)
{
	t_dlist *test;

	test = NULL;
	ft_dlstadd_back(&test, ft_dlstnew(new_cont(1)));
	printf("-------------------reverse_rotate_normal-------------------\n");
	print_arrays(*a, *b);
	reverse_rotate(a);
	print_arrays(*a, *b);
	printf("-------------------reverse_rotate_normal_1-------------------\n");
	print_arrays(test, *b);
	reverse_rotate(&test);
	print_arrays(test, *b);
	printf("-------------------reverse_rotate_normal_2-------------------\n");
	ft_dlstadd_back(&test, ft_dlstnew(new_cont(2)));
	print_arrays(test, *b);
	reverse_rotate(&test);
	print_arrays(test, *b);
	printf("-------------------reverse_rotate_normal_3-------------------\n");
	ft_dlstadd_back(&test, ft_dlstnew(new_cont(3)));
	print_arrays(test, *b);
	reverse_rotate(&test);
	print_arrays(test, *b);
	printf("-------------------reverse_rotate_normal_0-------------------\n");
	test = NULL;
	reverse_rotate(&test);
	print_arrays(test, *b);

}
