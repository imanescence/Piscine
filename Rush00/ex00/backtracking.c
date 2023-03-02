/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicordie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:24:40 by nicordie          #+#    #+#             */
/*   Updated: 2023/02/19 20:24:42 by nicordie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int **recursivity(int **line, int i, int j)
{
	if (line[i][j] < 4)
		line[i][j]++;
	else	
	{
		line[i][j] = 0;			
		if (j == 0)
		{
			i--;
			j = 3;		
		}
		else
		{
			j--;
		}
		recursivity(line, i, j);
	}
	return (line);
}

int	**backtracking(int *colUp, int *colDown, int *rowRight, int *rowLeft)
{
	int i;
	int j;
	int **line;

	line = ft_initialize();
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if ((checkColUp(colUp, line, j) == -1) | (checkColDown(colDown, line, j) == -1) | (checkRowLeft(rowLeft, line, i) == -1) | (checkRowRight(rowRight, line, i) == -1))
				recursivity(line, i, j);
			else if (((checkColUp(colUp, line, j) == 0) | (checkColDown(colDown, line, j) == 0) | (checkRowLeft(rowLeft, line, i) == 0) | (checkRowRight(rowRight, line, i) == 0)) && line[i][j] == 0)
				line[i][j]++;
			else
				j++;
		}
		i++;
	}
	return (line);
}
