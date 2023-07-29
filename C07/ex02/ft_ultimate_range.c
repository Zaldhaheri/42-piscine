/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:32:33 by zaldhahe          #+#    #+#             */
/*   Updated: 2023/07/24 12:45:58 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		*range = (int *) malloc(sizeof(int) * (max - min));
		if (*range == NULL)
			return (-1);
		while (min < max)
			(*range)[i++] = min++;
	}
	return (i);
}

// #include <stdio.h>
// int	main()
// {
// 	int min = 1;
// 	int max = 0;
// 	int i = 0;
// 	int *arr;
// 	arr = (int *) malloc(sizeof(int) * (max - min));
// 	printf("%d\n", ft_ultimate_range(&arr, min, max));
// 	while (min < max)
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 		min++;
// 	}
// }
