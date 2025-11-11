/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 11:50:24 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/11 12:16:17 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fill_array(char *joined, char const *s, size_t start, size_t end)
{
	size_t	i;

	i = 0;
	while (i < end)
	{
		joined[start + i] = s[i];
		i++;
	}
	return (joined);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	joined = (char *)malloc(len1 + len2 + 1);
	if (!joined)
		return (NULL);
	fill_array(joined, s1, 0, len1);
	fill_array(joined, s2, len1, len2);
	joined[len1 + len2] = '\0';
	return (joined);
}
