/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:34:40 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/22 18:13:52 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*int	ft_len(int	argc)
{
	int	k;

	k = 0;
	while (argc > 0)
	{
		k = k + argc;
		argc--;
	}
	return (k);
}*/

int	main(int argc, char **argv)
{
	char	c;
	int		i;

	i = 0;
	while (argc > 1)
	{
		while (argv[argc - 1][i] != '\0')
		{
			c = argv[argc - 1][i];
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
		argc--;
		i = 0;
	}
}
