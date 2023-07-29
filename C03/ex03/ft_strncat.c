/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:47:48 by zaldhahe          #+#    #+#             */
/*   Updated: 2023/07/19 01:13:48 by zaldhahe         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i1;
	int				i2;

	i1 = 0;
	i2 = str_len(dest);
	while (i1 < nb && src[i1] != '\0')
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
// int main(void)
// {
// 	char    str2[20] = "hello world";
// 	char    str1[20] = "emad";
// 	//printf("%s\n", strncat(str2, str1, ));
// 	printf("%s\n", ft_strncat(str2, str1, 1));
// 	return (0);
// }