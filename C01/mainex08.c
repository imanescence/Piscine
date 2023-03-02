/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainex08.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:05:06 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/15 16:17:25 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int	is_sorted(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i+1])
			return (0);
	}
	return (1);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int tri;
	int	i;

	i = 0;
	tri = is_sorted(tab, size);
	
	if (tri == 1)
		return ;
	
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			ft_swap(tab[i], tab[i+1]);
	}
	
	ft_sort_int_tab(tab, size);
}
