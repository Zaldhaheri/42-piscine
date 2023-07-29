/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:55:02 by zaldhahe          #+#    #+#             */
/*   Updated: 2023/07/14 15:55:20 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	num1;

	num1 = *a;
	*a = *a / *b;
	*b = num1 % *b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 10;
// 	b = 3;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d", a);
// 	printf("%d", b);
// }
