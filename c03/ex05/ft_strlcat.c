/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:01:03 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/21 18:11:49 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_destlen(char *dest, unsigned int i)
{
	i = 0;
	while (dest[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_srclen(char *src, unsigned int j)
{
	j = 0;
	while (src[j] != '\0')
		j++;
	return (j);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	i = ft_destlen(dest, i);
	j = ft_srclen(src, j);
	if (!dest)
		return (0);
	while (dest[i] > src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}	
	dest[i] = '\0';
	size = i;
	return (size);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	unsigned int	size = 0;
	char dest[] = "hello";
	char src[] = "coucou";
	printf("%d", ft_strlcat(dest, src, size));
	//printf("%d", strlcat(dest, src, size));
}*/
