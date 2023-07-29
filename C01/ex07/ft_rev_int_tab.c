/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:32:14 by zaldhahe          #+#    #+#             */
/*   Updated: 2023/07/14 16:23:09 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	iteration;

	iteration = size--;
	counter = 0;
	while (iteration > counter)
	{
		ft_swap(&tab[counter], &tab[size--]);
		counter++;
		iteration--;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	arr[13];
// 	int	s;
// 	int count;

// 	count = 0;
// 	s = 13;
// 	arr[0] = -8;
// 	arr[1] = 0;
// 	arr[2] = 46;
// 	arr[3] = -426;
// 	arr[4] = 46;
// 	arr[5] = 1;
// 	arr[6] = 46;
// 	arr[7] = -426;
// 	arr[8] = 46;
// 	arr[9] = 1;
// 	arr[10] = 46;
// 	arr[11] = -426;
// 	arr[12] = 0;
// 	ft_rev_int_tab(arr, s);
// 	while (count < s)
// 	{
// 		printf("%d, ",arr[count]);
// 		count++;
// 	}
// 	return (0);
// }