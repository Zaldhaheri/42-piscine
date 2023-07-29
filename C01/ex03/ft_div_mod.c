/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:36:00 by zaldhahe          #+#    #+#             */
/*   Updated: 2023/07/13 13:06:09 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main()
// {
// 	int	c;
// 	int	d;
// 	int messi;
// 	int ronaldo;

// 	c = 10;
// 	d = 3;
// 	ft_div_mod(c, d, &messi, &ronaldo);
// 	printf("%d", messi);
// 	printf("%d", ronaldo);
// 	return 0;
// }
