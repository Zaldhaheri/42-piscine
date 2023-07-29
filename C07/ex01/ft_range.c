/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 01:45:24 by zaldhahe          #+#    #+#             */
/*   Updated: 2023/07/26 15:49:06 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	else
		arr = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

#include <stdio.h>
int main()
{
	int *arr;
	int min = 0;
	int max = 10;
	int i = 0;

	arr = (int *) malloc((max - min) * sizeof(int));
	arr = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}