/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 17:27:40 by lhelper           #+#    #+#             */
/*   Updated: 2020/02/09 23:30:33 by ihumbleb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rush.h"

void	display(int argc, char **arr)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < argc - 1)
	{
		while (j < argc - 1)
		{
			c = arr[i][j];
			write(1, &c, 1);
			if (j < argc - 2)
			{
				write(1, " ", 1);
			}
			else
			{
				write(1, "\n", 1);
			}
			j++;
		}
		i++;
		j = 0;
	}
}
