/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   triplet.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csteylae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 21:27:35 by csteylae          #+#    #+#             */
/*   Updated: 2023/02/26 21:44:14 by csteylae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	i = 0;
	nb = 0;

	while(str[i])
	{
		nb = nb * 10;
		nb = nb + (str[i] - 48);
		i++;
	}
	return (nb);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int unsigned	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((i < n - 1) && s1[i] == s2[i] && ((s1[i] != '\0' && s2[i]) != '\0' ))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	size;
	int	ptr;

	i = 0;
	size = ft_strlen(to_find);
	if (size == 0)
		return (str);
	while (str[i] != '\0')
	{
		ptr = ft_strncmp(str + i, to_find, size);
		if (ptr == 0)
			return (str + i);
		i++;
	}
	return (0);
}

char *ft_strcpy(char *dest, char* src)
{
	int i = 0;
		while (src[i])
		{
			dest[i] = src[i];
				i++;
		}
		return (dest);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		if ((str[i] < '0' || str[i]> '9') && str[i] != ':')
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int main( int argc, char *argv [])
{
	int nb;
	int len;
	int	fd;
	int	nb_of_bytes;
	char buff [4000];

	if (argc == 2)
	{
		len = ft_strlen(&argv[1][0]);
		char key [len];	
		ft_strcpy(key, &argv[1][0]);
		nb = ft_atoi(&argv[1][0]);
		fd = open("dict.txt", O_RDONLY);
		if (fd == -1)
		{
			write(1, "error", 5);
			return (0);
		}
		nb_of_bytes = read(fd, buff, 4000);
		char *output;
		output = ft_strstr(buff, key);
		ft_putstr(output);
	}
	return (0);
}
