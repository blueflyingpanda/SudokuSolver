/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 15:55:52 by lhelper           #+#    #+#             */
/*   Updated: 2020/02/09 23:31:41 by ihumbleb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush.h"

char	**memory(int argc, char **argv)
{
	int		i;
	int		j;
	char	**arr;

	i = 0;
	j = 0;
	arr = (char **)malloc((9) * sizeof(char *));
	while (i < argc - 1)
	{
		arr[i] = (char *)malloc((9 + 1) * sizeof(char));
		while (argv[i + 1][j] != '\0')
		{
			arr[i][j] = argv[i + 1][j];
			j++;
		}
		arr[i][j] = '\0';
		j = 0;
		i++;
	}
	return (arr);
}
