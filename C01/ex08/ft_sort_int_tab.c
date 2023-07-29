/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 21:04:24 by zaldhahe          #+#    #+#             */
/*   Updated: 2023/07/14 16:41:04 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	iteration;

	counter = 0;
	iteration = 0;
	while (size > iteration)
	{
		counter = iteration + 1;
		while (counter < size)
		{
			if (tab[iteration] > tab[counter])
			{
				ft_swap(&tab[iteration], &tab[counter]);
			}
			counter++;
		}
		iteration++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	arr[12];
// 	int	s;
// 	int count;
// 	count = 0;
// 	s = 12;
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
// 	//arr[12] = 0;
// 	ft_sort_int_tab(arr, s);
// 	while (count < s)
// 	{
// 		printf("%d, ",arr[count]);
// 		count++;
// 	}
// 	return (0);
// }