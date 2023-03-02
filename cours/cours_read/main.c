/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:42:26 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/25 20:01:21 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char *buffer;
	int fd;
	int nb_bytes;
	int	nb_lines = 0;
	nb_bytes = 0;
	buffer = malloc(sizeof(char) * 4096);
	fd = open("machin.txt", O_RDONLY);
	if (fd == -1)
		return (0);
	nb_bytes = read(fd, buffer, 4096);
	printf("%s\n", buffer);

	int i = 0;
	while (i < nb_bytes)
	{
		if (buffer[i] == '\n')
			nb_lines++;
		i++;
	}

	printf("nombre de lignes : %d\n", nb_lines);
	free(buffer);
	close(fd);
	return (0);
}
