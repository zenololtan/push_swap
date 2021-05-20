/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   checks.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ztan <ztan@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/05/20 19:38:04 by ztan          #+#    #+#                 */
/*   Updated: 2021/05/20 19:38:26 by ztan          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int		check_max_or_min(char **args, int argc)
{
	int		i;
	int		num;

	i = 1;
	num = 0;
	while (i < argc)
	{
		if (ft_strlen(args[i]) > 11)
			return (1);
		num = ft_atoi(args[i]);
		if ((args[i][0] != '-' && num < 0) || (args[i][0] == '-' && num > 0))
			return (1);
		i++;
	}
	return (0);
}

int		check_dupe(char **args, int argc)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = 2;
	while (i < argc)
	{
		temp = args[i];
		while (j < argc)
		{
			if (!ft_strcmp(temp, args[j]))
			{
				printf("Duplicate\n");
				return (1);
			}
				
			j++;
		}
		i++;
	}
	return (0);
}

int		check_digit(char **args, int argc)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (args[i][0] == '-')
			j++;
		while (args[i][j])
		{
			if (!ft_isdigit(args[i][j]))
			{
				printf("Not digit\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}
