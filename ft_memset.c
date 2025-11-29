/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:47:22 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/29 15:31:58 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int value, size_t n)
{
	unsigned char	*src;
	size_t	i;

	if (n <= 0 || !s)
		return (0);
	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		src[i] = (unsigned char)value;
		i++;
	}
	return (s);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	b1[100], b2[100];
	printf("%d", memset(b1, 42, 100) == ft_memset(b2, 42, 100) ? 0 : 1);
}
*/
