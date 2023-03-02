/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iait-ouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:12:49 by iait-ouf          #+#    #+#             */
/*   Updated: 2023/02/25 17:22:18 by iait-ouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct voiture {
	int	roues;
	int	sieges;
	char	*nom;
} tutut;

struct point {
	int x;
	int y;
};

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{

	tutut *garage;
	garage = malloc(sizeof(struct voiture) * 10);
	int i = 0;
	while (i < 10)
	{
		garage[i].roues = i;
		garage[i].sieges = i * 2;
		garage[i].nom = "voiture trop cool";
		i++;
	}
	struct voiture ma_voiture;
	ma_voiture.roues = 4;
	ma_voiture.sieges = 2;
	ma_voiture.nom = "super bolide de la mort";
	int j = 0;
	while (j < 10)
	{
		printf("ma voiture a %d roues, %d sieges et elle s'appelle %s\n", garage[j].roues, garage[j].sieges, garage[j].nom);
		j++;
	}
	return (0);
}
