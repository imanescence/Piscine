/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 00:03:15 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/19 12:04:49 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	int n = 5;
	char *bonjour= NULL;
	char str2[100]= "";
	printf("|%s|\n", ft_strncpy(bonjour, str2, n));


	char *bonjour2= 0x0;
	char str22[100]= "";
	printf("|%s|\n", strncpy(bonjour2, str22, n));
}*/
