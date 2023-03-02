/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinbis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:23:39 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/03/02 18:26:25 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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

int	count_size(int size, char **strs, char *sep)
{
	int	i;
	int	n;
	int	sep_size;

	i = 0;
	n = 0;
	while (i < size)
	{
		n = n + ft_strlen(strs[i]);
		i++;
	}
	sep_size = ft_strlen(sep);
	n = n + (size - 1) * sep_size;
	return (n);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		n;
	int		tmp;
	char	*superstr;

	n = count_size(size, strs, sep);
	superstr = malloc(sizeof(char) * (n + 1));
	if (superstr == NULL)
		return (NULL);
	superstr[0] = 0;
	if (size == 0)
		return (superstr);
	i = 0;
	tmp = 0;
	while (i < (size - 1))
	{
		ft_strcpy(superstr + tmp, strs[i]);
		tmp = tmp + ft_strlen(strs[i]);
		ft_strcpy(superstr + tmp, sep);
		tmp = tmp + ft_strlen(sep);
		i++;
	}
	ft_strcpy(superstr + tmp, strs[i]);
	superstr[n] = '\0';
	return (superstr);
}
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{	
	(void)argc;
	char *sep = " ";
	printf("%s \n", ft_strjoin(0, argv, sep));
	return (0);
}
