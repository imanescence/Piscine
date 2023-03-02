/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicordie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:51:55 by nicordie          #+#    #+#             */
/*   Updated: 2023/02/19 20:14:16 by nicordie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKLINES
#define CHECKLINES
int	checkColUp (int *colUp, int **line, int nb);
int	checkRowRight (int *rowRight, int **line, int nb);
int	checkColDown (int *colDown, int **line, int nb);
int	checkRowLeft (int *rowLeft, int **line, int nb);
#endif
#ifndef FT_PRINT
#define FT_PRINT
int	**ft_initialize();
void ft_print(int **line);
void ft_putchar(char c);
#endif
#ifndef BACKTRACKING
#define BACKTRACKING
int **recursivity(int **line, int i, int j);
int	**backtracking(int *colUp, int *colDown, int *rowRight, int *rowLeft);
#endif

/*int	checkColUp (int *colUp, int **line, int nb);
int	checkRowRight (int *rowRight, int **line, int nb);
int	checkColDown (int *colDown, int **line, int nb);
int	checkRowLeft (int *rowLeft, int **line, int nb);
int **recursivity(int **line, int i, int j);
int	**backtracking(int *colUp, int *colDown, int *rowRight, int *rowLeft);
int	**ft_initialize();
void ft_print(int **line);
void ft_putchar(char c);

#endif*/
