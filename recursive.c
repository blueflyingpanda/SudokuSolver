/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 18:57:48 by lhelper           #+#    #+#             */
/*   Updated: 2020/02/09 23:30:08 by ihumbleb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		check_cell(char **arr, int y, int x)
{
	char n;

	n = '1';
	if (arr[y][x] != '.')
		return (check_next_cell(arr, y, x));
	while (n <= '9')
	{
		if (linecheck(arr, y, n) == 0
				&& columncheck(arr, x, n) == 0 && square(arr, x, y, n) == 0)
		{
			arr[y][x] = n;
			if (check_next_cell(arr, y, x) == 0)
				return (0);
			arr[y][x] = '.';
		}
		n++;
	}
	arr[y][x] = '.';
	return (1);
}
