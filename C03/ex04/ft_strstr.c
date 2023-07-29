/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 19:14:00 by zaldhahe          #+#    #+#             */
/*   Updated: 2023/07/19 01:13:41 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0' || str[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		j = 0;
		i++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char str1[] = "szdty89hgvjohfcyguhijoklmBrbdvjkbvfdjk";
// 	char str2[] = "Br";
// 	char str3[] = "szdty89hgvjohfcyguhijoklmBrbdvjkbvfdjk";
// 	char str4[] = "Br";
// 	printf("%s\n", strstr(str1, str2));
// 	printf("%s\n", ft_strstr(str3, str4));
// }