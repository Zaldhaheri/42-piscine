/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:36:42 by zaldhahe          #+#    #+#             */
/*   Updated: 2023/07/22 21:57:23 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	d;

	d = 1;
	i = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		d *= i;
		i++;
	}
	return (d);
}

// #include <stdio.h> 
// int main(){
// 	printf("%d\n", ft_iterative_factorial(16));
// }