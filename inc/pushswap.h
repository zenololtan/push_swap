/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pushswap.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/19 17:11:01 by ztan          #+#    #+#                 */
/*   Updated: 2021/05/19 21:08:47 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "libft.h"

typedef struct	s_content
{
	int		i;
}				t_content;

void	swap(t_dlist **lst);

#endif