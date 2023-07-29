/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:49:38 by zaldhahe          #+#    #+#             */
/*   Updated: 2023/07/12 20:21:47 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_chars(char x, char y, char z)
{
	write(1, &x, 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (x != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (a < b && b <= '8')
		{
			while (c <= '9')
			{
				if (a != b && b != c && c != a)
				{
					ft_print_chars(a, b, c);
				}
				c++;
			}
			c = ++b + 1;
		}
		b = ++a + 1;
		c = b + 1;
	}
}

// int main(){
// 	ft_print_comb();
// 	return 0;
// }