/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:15:51 by zaldhahe          #+#    #+#             */
/*   Updated: 2023/07/19 01:13:52 by zaldhahe         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i1;
	int	i2;

	i1 = 0;
	i2 = str_len(dest);
	while (src[i1] != '\0')
	{
		dest[i2] = src[i1];
		i1++;
		i2++;
	}
	dest[i2] = '\0';
	return (dest);
}

// #include <string.h>
// #include <stdio.h>
// int	main(void)
// {
// 	char	str1[15] = " there";
// 	char	str2[15] = "hello";
// 	char	str3[15] = " there";
// 	char	str4[15] = "hello";
// 	printf("%s\n", strcat(str4, str3));
// 	printf("%s\n", ft_strcat(str2, str1));
// 	return (0);
// }
