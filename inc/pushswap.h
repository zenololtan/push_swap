/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pushswap.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/19 17:11:01 by ztan          #+#    #+#                 */
/*   Updated: 2021/05/20 20:41:57 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "libft.h"

# include <stdio.h>

typedef struct	s_content
{
	int		i;
}				t_content;

//content functions
t_content	*new_cont(int num);
t_content	*dup_cont(t_content *cont);
void		del_content(void *cont);
void		print_content(void *content);
void		print_arrays(t_dlist *array_a, t_dlist *array_b);

//check
int			check_digit(char **args, int argc);
int			check_dupe(char **args, int argc);
int			check_max_or_min(char **args, int argc);

//move funcs
void		swap(t_dlist **lst);
void		push(t_dlist **array_a, t_dlist **array_b);
void		push(t_dlist **dest, t_dlist **from);

#endif