/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:53:41 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/21 18:12:41 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int main ()
{
	char dest[1000] = "b";
	char *src = NULL;
	 printf("%s\n", ft_strcat(dest, src));




	char dest2[1000] = "b";
	char *src2 = 0x0;
	 printf("%s\n", strcat(dest2, src2));
}*/
