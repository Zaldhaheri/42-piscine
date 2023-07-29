/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 19:10:01 by zaldhahe          #+#    #+#             */
/*   Updated: 2023/07/15 19:36:15 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	str1[10] = "jfgfbdv\0 4";
// 	char	str2[6];
// 	char	test1[10] = "gusdivk\0 4";
// 	char	test2[6];
// 	ft_strcpy (str2, str1);
// 	strcpy(test2,test1);
// 	printf ("%s\n", str2);
// 	printf("%s",test2);
// }