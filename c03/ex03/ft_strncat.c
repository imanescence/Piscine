/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:45:35 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/03/01 03:40:04 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (nb == 0)
	{
		return (dest);
	}
	while (nb > 0 && dest[i] != '\0')
	{
		i++;
	}
	while (nb > 0 && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
		nb--;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int main()
{
	unsigned int nb = 9;


	char dest[100] = "coucou";
	char src[100] = "cou";
	printf("%s\n", ft_strncat(dest, src, nb));



	char dest2[100] = "coucou";
	char src2[100] = "cou";
	printf("%s\n", strncat(dest2, src2, nb));
}*/
