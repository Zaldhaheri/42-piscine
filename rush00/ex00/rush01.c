/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:10:21 by amuftah           #+#    #+#             */
/*   Updated: 2023/07/16 21:05:35 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	error_checker(int x, int y)
{
	char	*invalid_number_str;
	char	*invalid_int_size;
	int		maxint;
	int		minint;

	maxint = 2147483647;
	minint = -2147483648;
	invalid_number_str = "Number is invalid";
	invalid_int_size = "Integer size is invalid";
	if (x > maxint || y > maxint || x < minint || y < minint)
	{
		write(1, invalid_number_str, 24);
	}
	else if (x <= 0 || y <= 0)
	{
		write(1, invalid_number_str, 18);
	}
}

void	check(int x, int y, int xc, int yc)
{
	if ((yc == 0 && xc == 0) || (yc == y - 1 && xc == x - 1))
	{
		if ((y != 1 && x != 1) || (yc == 0 && xc == 0))
			ft_putchar('/');
		else
			ft_putchar('\\');
	}
	else if ((yc == 0 && xc == x - 1) || (yc == y - 1 && xc == 0))
	{
		ft_putchar('\\'); 
	}
	else if ((xc != 0 && xc != x -1) && (yc != 0 && yc != y -1))
	{
		ft_putchar(' ');
	}
	else if ((xc != 0 && xc != x -1) || (yc != 0 && yc != y - 1))
	{
		ft_putchar('*'); 
	}
}

void	rush(int x, int y)
{
	int	countcol;
	int	countrow;

	countcol = 0;
	countrow = 0;
	error_checker(x, y);
	while (y > countrow && x != 0) 
	{
		while (x > countcol)
		{
			check(x, y, countcol, countrow);
			countcol++;
		}
		ft_putchar('\n');
		countcol = 0;
		countrow++;
	}
}
