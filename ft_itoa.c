/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 18:34:47 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/21 18:57:28 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"


// void	ft_putnbr(int nb)
// {
// 	char	c;

// 	if (nb == INT_MIN)
// 	{
// 		write(1, "-2147483648", 11);
// 		return ;
// 	}
// 	if (nb < 0)
// 	{
// 		write(1, "-", 1);
// 		nb = -nb;
// 	}
// 	if (nb >= 10)
// 	{
// 		ft_putnbr(nb / 10);
// 	}
// 	c = nb % 10 + '0';
// 	write(1, &c, 1);
// }

char	*ft_itoa(int n)
{
	int		len_base;
	int		i;
	char	*str;
	int		size;
	int		sign;

	sign = 0;
	str = malloc(sizeof(char) * (n) + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	i = size -1;
	while (i >= 0)
	{
		str[i] = n % 10;
		if (sign && i == 0)
			str[0] = '-';
		n = n / 10;
		i--;
	}
	return (str);
}

