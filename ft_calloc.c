/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 19:00:04 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/08 19:36:32 by gavraam          ###   ########.fr       */
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

/*
int	main(void)
{
	int *arr1 = (int *)ft_calloc(5, sizeof(int));
	if (arr1) {
		int all_zero = 1;
		for (int i = 0; i < 5; i++) {
			if (arr1[i] != 0) {
				all_zero = 0;
				break;
			}
		}
		printf("%s \n", all_zero ? "Good" : "Not Good");
		free(arr1);
	}
}
*/