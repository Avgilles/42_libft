/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:00:04 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/08 19:25:54 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(unsigned int count, unsigned int size)
{
	void	*array;

	if (count <= 0 || size <= 0)
		return (malloc(0));
	if (count > UINT_MAX / size)
		return (NULL);
	array = (char *)malloc(size * count);
	if (!array)
		return (NULL);
	return (ft_memset(array, 0, size * count));
}
