/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:19:44 by zaldhahe          #+#    #+#             */
/*   Updated: 2023/07/17 11:08:19 by zaldhahe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	ft_char_is_lowercase(char str)
{
	if (str < 97 || str > 122)
	{
		return (0);
	}
	return (1);
}

int	ft_char_is_alpha(char str)
{
	if ((str < 65 || str > 122) || (str <= 96 && str >= 91))
	{
		return (0);
	}
	return (1);
}

int	ft_char_is_numeric(char str)
{
	if (str < 48 || str > 57)
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (ft_char_is_lowercase(str[i]) == 1)
	{
		str[i++] -= 32;
	}
	while (str[i] != '\0')
	{
		if (ft_char_is_alpha(str[i]) == 0 && ft_char_is_alpha(str[i + 1]) == 1)
		{
			if (ft_char_is_numeric(str[i]) == 0)
			{
				str[++i] -= 32; 
			}
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	str[73] = ",SalUt, 42MomMee-deux; cinquante+et+un";

// 	printf("%s", ft_strcapitalize(str));
// 	return 0;
// }
