/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:25:01 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/19 12:21:34 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i + 1 < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	int n = 100;
	char *bonjour = NULL;
	char str2[100]= "bonjour22";
	printf("|%u|\n", ft_strlcpy(bonjour, str2, n));


	char *bonjour2 = NULL;
	char str22[100]= "bonjour22";
	printf("|%lu|\n`", strlcpy(bonjour2, str22, n));
}*/
