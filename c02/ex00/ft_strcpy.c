/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 22:22:53 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/19 12:03:20 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int main()
{
	char bonjour[100]= "bonjour";
	char str2[100]= "pour";
	printf("|%s|\n", ft_strcpy(bonjour, str2));


	char bonjour2[100]= "bonjour";
	char str22[100]= "pour";
	printf("|%s|\n", strcpy(bonjour2, str22));
}*/
