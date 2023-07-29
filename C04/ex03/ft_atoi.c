/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 20:21:11 by zaldhahe          #+#    #+#             */
/*   Updated: 2023/07/29 21:53:01 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*space_remove(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		str++;
	return (str);
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	sign;

	sign = 1;
	i = 0;
	result = 0;
	str = space_remove(str);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	return (result * sign);
}

#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int		i;
	char	str1[] = "\t-+---+30303";
	i = ft_atoi(str1);
	printf("%d\n", i);
	return (0);
}
