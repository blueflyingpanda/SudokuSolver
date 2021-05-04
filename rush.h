/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhelper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 23:18:24 by lhelper           #+#    #+#             */
/*   Updated: 2020/02/09 23:40:15 by lhelper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <stdlib.h>
# include <unistd.h>

int		linecheck(char **arr, int y, char n);
int		columncheck(char **arr, int x, char n);
int		square(char **arr, int x, int y, char n);
int		check_next_cell(char **arr, int y, int x);
int		check_cell(char **arr, int y, int x);
int		error_check(int argc, char **argv);
void	display(int argc, char **argv);
char	**memory(int argc, char **argv);

#endif
