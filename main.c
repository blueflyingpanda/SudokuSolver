/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 13:47:34 by lhelper           #+#    #+#             */
/*   Updated: 2020/02/09 23:29:25 by ihumbleb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "rush.h"

int		main(int argc, char **argv)
{
	char **arr;

	arr = memory(argc, argv);
	if (argc != 10 || error_check(argc, argv) != 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (check_cell(arr, 0, 0) != 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	display(argc, arr);
	free(arr);
	return (0);
}
