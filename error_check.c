/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:46:55 by lhelper           #+#    #+#             */
/*   Updated: 2020/02/09 23:30:55 by ihumbleb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	error_check(int argc, char **argv)
{
	int i;
	int j;

	j = 0;
	i = 1;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			if ((argv[i][j] >= '1' && argv[i][j] <= '9') || argv[i][j] == '.')
				j++;
			else
				return (1);
		}
		i++;
		if (j == 9)
			j = 0;
		else
			return (1);
	}
	return (0);
}
