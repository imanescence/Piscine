/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-win <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 09:50:08 by gde-win           #+#    #+#             */
/*   Updated: 2023/02/12 16:48:08 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c);

int	error(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "Width and Length must be strictly superior to '0'\n", 49);
		return (1);
	}
	return (0);
}

void	ft_is_edge(int x, int y, int w, int l)
{
	if (x == w || x == 1 || y == l || y == 1)
	{
		if (y == l && (x == w || x == 1))
			ft_putchar('A');
		else if (y == 1 && (x == w || x == 1))
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
		ft_putchar(' ');
}

int	rush02(int x, int y)
{
	int	size[3];

	size[2] = error(x, y);
	size[0] = x;
	size[1] = y;
	if (size[2] > 0)
		return (size[2]);
	while (y > 0)
	{
		x = size[0];
		while (x > 0)
		{
			ft_is_edge(x, y, size[0], size[1]);
			x--;
		}
		ft_putchar('\n');
		y--;
	}
	return (0);
}
