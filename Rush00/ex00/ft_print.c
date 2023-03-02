/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicordie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:25:08 by nicordie          #+#    #+#             */
/*   Updated: 2023/02/19 20:25:10 by nicordie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "header.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print(int **line)
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putchar (line[i][j] + 48);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	**ft_initialize()
{
	int i;
	int j;
	int **line = malloc(4 * sizeof(*line));

	i = 0;
	while (i < 4)
	{
		line[i] = malloc (4 * sizeof(**line));
		i++;
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			line[i][j] = 0;
			j++;
		}
		i++;
	}
	return (line);
}
