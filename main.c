/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:43:36 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/11 11:42:52 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

void	test_ft_strncmp()
{
	char	c1[] = "ABC";
	char	c2[] = "AB ";

	int v = ft_strncmp(c1, c2, 4);
	int t = strncmp(c1, c2, 4);
	if (v == t)
	{
		printf("ft_strncmp test: Passed  (got %d, expected %d)\n", v, t);
	}
	else
		printf("ft_strncmp test: Failed (got %d, expected %d)\n", v, t);
}

void	test_ft_calloc()
{
	unsigned int	count = 5;
	unsigned int	size = sizeof(int);
	int				*arr = (int *)ft_calloc(count, size);

	if (arr)
	{
		int all_zero = 1;
		for (unsigned int i = 0; i < count; i++)
		{
			if (arr[i] != 0)
			{
				all_zero = 0;
				break;
			}
		}
		printf("ft_calloc test: %s (%d)\n", all_zero ? "Passed" : "Failed", all_zero);
		free(arr);
	} 
	else 
	{
		printf("ft_calloc test: Failed to allocate memory\n");
	}
}

void	test_ft_substr()
{
	char *s = "Hello, World!";
	unsigned int start = 7;
	size_t len = 5;

	char *result = ft_substr(s, start, len);
	char *expected = strndup(s + start, len);

	if (strcmp(result, expected) == 0)
		printf("ft_substr : Passed (got %s, expected %s)\n", result, expected);
	else
		printf("ft_substr failed: got '%s', expected '%s'\n", result, expected);

	free(result);
	free(expected);
}

int	main(void)
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("---------Running tests for libft functions:----------\n");
	test_ft_strncmp();
	test_ft_calloc();
	test_ft_substr();
	return (0);
}
