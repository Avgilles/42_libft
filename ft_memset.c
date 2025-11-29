/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:47:22 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/29 15:52:25 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int value, size_t n)
{
	unsigned char	*src;
	size_t	i;

	if (n <= 0 || !s)
		return (s);
	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		src[i] = (unsigned char)value;
		i++;
	}
	return (s);
}
