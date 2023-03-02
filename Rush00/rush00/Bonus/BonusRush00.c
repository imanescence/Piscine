/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BonusRush00.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:48:39 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/12 18:21:57 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_is_edge(int x, int y, int w, int l, char *letters[7])
{
	if (x == w || x == 1 || y == l || y == 1)
	{
		if (y == l && x == w)
			ft_putchar(*(*letters));
		else if (y == l && x == 1)
			ft_putchar(*(*letters + 1));
		else if (y == 1 && x == w)
			ft_putchar(*(*letters + 2));
		else if (y == 1 && x == 1)
			ft_putchar(*(*letters + 3));
		else if (y == l || y == 1)
			ft_putchar(*(*letters + 4));
		else
			ft_putchar(*(*letters + 5));
	}
	else
		ft_putchar(' ');
}

int	rush0X(int x, int y, char *letters[7])
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
			ft_is_edge(x, y, size[0], size[1], letters);
			x--;
		}
		ft_putchar('\n');
		y--;
	}
	return (0);
}
