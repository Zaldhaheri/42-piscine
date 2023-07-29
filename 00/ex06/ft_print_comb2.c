/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:33:13 by zaldhahe          #+#    #+#             */
/*   Updated: 2023/07/12 20:23:16 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_chars(char w, char x, char y, char z)
{
	write(1, &w, 1);
	write(1, &x, 1);
	write(1, " ", 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (w == '9' && x == '8')
	{
		return (0);
	}
	write(1, ", ", 2);
	return (0);
}

void	ft_print_comb_inner(char p, char q)
{
	char	c;
	char	d;

	c = p;
	d = q + 1;
	while ((p <= c || q <= d) && c <= '9')
	{
		while (d <= '9')
		{
			ft_print_chars(p, q, c, d);
			d++;
		}
		if (d >= '9')
		{
			d = '0';
		}
		c++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	b = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			ft_print_comb_inner(a, b);
			b++;
		}
		if (b >= '9')
		{
			b = '0';
		}
		a++;
	}
}

// int main(){
// 	ft_print_comb2();
// 	return 0;
// }