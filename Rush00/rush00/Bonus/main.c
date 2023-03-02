/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-win <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 09:44:50 by gde-win           #+#    #+#             */
/*   Updated: 2023/02/12 19:41:26 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <limits.h>

int	rush0X(int x, int y, char *letters[7]);
int	ft_atoi(char *str);

int	main(int argc, char *argv[])
{
	int	w;
	int	l;
	int	length;

	if (argc != 4)
	{
		write(1, "Miskin il faut 4 arguments !", 28);
		return (1);
	}
	w = ft_atoi(argv[1]);
	l = ft_atoi(argv[2]);
	if (w > INT_MAX || l > INT_MAX)
	{
		write(1, "Max integer value exceeded\n", 28);
		return (2);
	}
	length = 0;
	while (argv[3][length] != '\0')
		length++;
	if (length != 6)
	{
		write(1, "bah faut 6 lettres quoi", 23);
	}
	rush0X(w, l, &argv[3]);
}

int	ft_atoi(char *str)
{
	int	sum;
	int	exp;
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	sum = 0;
	exp = 1;
	while (length > 0)
	{
		sum += (str[length - 1] - '0') * exp;
		exp *= 10;
		length--;
	}
	return (sum);
}
