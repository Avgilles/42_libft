/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 15:27:43 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/11 16:00:18 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;

	s = (char *)src;
	d = (char *)dest;
	if (s < d)
	{
		while (n--)
			d[n] = s[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/*
int	main(int argc, char **argv)
{
	// void		test;
	char	c;
	char 	dest[] = "q         a";

	(void)argc;
	(void)argv;
	c = 'a';
	if (argc > 1)
	{
		printf("%s", (char *)ft_memmove((void *)dest, (const void *)argv[1], argv[2]));
	}
}
*/