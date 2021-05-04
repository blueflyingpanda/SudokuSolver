/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillsudoku.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aching <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 11:21:27 by aching            #+#    #+#             */
/*   Updated: 2020/02/09 23:37:18 by lhelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		linecheck(char **arr, int y, char n)
{
	int j;

	j = 0;
	while (arr[y][j] != '\0')
	{
		if (arr[y][j] != n)
			j++;
		else
			return (1);
	}
	return (0);
}

int		columncheck(char **arr, int x, char n)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (arr[i][x] != n)
			i++;
		else
			return (1);
	}
	return (0);
}

int		square(char **arr, int x, int y, char n)
{
	int i;
	int j;
	int imax;
	int jmax;

	j = x - (x % 3);
	i = y - (y % 3);
	imax = i + 2;
	jmax = j + 2;
	while (i <= imax)
	{
		while (j <= jmax)
		{
			if (arr[i][j] != n)
				j++;
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int		check_next_cell(char **arr, int y, int x)
{
	x++;
	if (x >= 9)
	{
		x = 0;
		y++;
	}
	if (y >= 9)
		return (0);
	return (check_cell(arr, y, x));
}
