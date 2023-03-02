/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:31:08 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/27 16:05:45 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	result = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (result);
}
/*#include <stdio.h>
int main()
{
	int index = 8;
	printf("%d", ft_fibonacci(index));
}*/
