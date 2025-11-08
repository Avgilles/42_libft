/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:10:40 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/08 17:51:33 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char		*src;
	unsigned int		i;

	if (n <= 0 || !s)
		return (0);
	src = (unsigned char *)s;
	while (i < n)
	{
		if (src[i] == (unsigned char *)c)
			return (src[i]);
		i++;
	}
	return (0);
}
