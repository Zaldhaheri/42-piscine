/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:16:02 by zaldhahe          #+#    #+#             */
/*   Updated: 2023/07/13 18:31:09 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	neymar;

// 	neymar = ft_strlen("01234567890123456789");
// 	printf("%d", neymar);
// 	return (0);
// }
