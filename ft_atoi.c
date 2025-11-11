/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 19:03:16 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/11 14:21:25 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	int		result;

	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		sign *= -1;
		i++;
	}
	result = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
// int	ft_atoi(char *str)
// {
// 	int		i;
// 	int		sign;
// 	int		result;

// 	sign = 1;
// 	i = 0;
// 	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
// 	i++;
// 	while (str[i] == '-' || str[i] == '+')
// 	{
// 		if (str[i] == '-')
// 		sign *= -1;
// 		i++;
// 	}
// 	result = 0;
// 	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
// 	{
// 		result = result * 10 + (str[i] - '0');
// 		i++;
// 	}
// 	return (result * sign);
// }
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	// char	c[] = "1234";
	char	c[] = " -----+---+1234ab567";

	// ft_strcat(*c1, c);
	// printf("%s", c2);
	printf("%d", ft_atoi(c));
	return (0);
}
*/