/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:13:53 by zaldhahe          #+#    #+#             */
/*   Updated: 2023/07/25 16:05:41 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*temp;

	i = 0;
	len = ft_strlen(src);
	temp = (char *) malloc(sizeof(char) * len + 1);
	while (src[i] != '\0')
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

// #include <stdio.h>
// int main()
// {
// 	char *ball = strdup("Hello people");
// 	printf("%s\n", strdup("hello world"));
// 	printf("%s\n", ft_strdup("hello world"));
// 	return 0;
// }