/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 00:50:08 by zaldhahe          #+#    #+#             */
/*   Updated: 2023/07/29 17:31:52 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*result;

	i = 0;
	j = 0;
	k = 0;
	result = (char *) malloc(sizeof(strs));
	while (i < size)
	{
		while (strs[i][j] != '\0')
			result[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
			result[k++] = sep[j++];
		i++;
		j = 0;
	}
	result[k] = '\0';
	return (result);
}

int	main(void)
{
	char *test1[] = {"hello", "trere", "", "Wrew", "sabc"};
	printf("%lu\n", sizeof(test1));
    char *result1 = ft_strjoin(5, test1, ", ");
    printf("%s\n", result1);
	return (0);
}
