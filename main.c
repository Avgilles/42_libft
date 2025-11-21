/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:43:36 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/21 17:34:03 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <bsd/string.h>

// void	test_ft_strncmp()
// {
// 	char	c1[] = "ABC";
// 	char	c2[] = "AB ";

// 	int v = ft_strncmp(c1, c2, 4);
// 	int t = strncmp(c1, c2, 4);
// 	if (v == t)
// 	{
// 		printf("ft_strncmp test: Passed  (got %d, expected %d)\n", v, t);
// 	}
// 	else
// 		printf("ft_strncmp test: Failed (got %d, expected %d)\n", v, t);
// }

// void	test_ft_calloc()
// {
// 	unsigned int	count = 5;
// 	unsigned int	size = sizeof(int);
// 	int				*arr = (int *)ft_calloc(count, size);

// 	if (arr)
// 	{
// 		int all_zero = 1;
// 		for (unsigned int i = 0; i < count; i++)
// 		{
// 			if (arr[i] != 0)
// 			{
// 				all_zero = 0;
// 				break;
// 			}
// 		}
// 		printf("ft_calloc test: %s (%d)\n", all_zero ? "Passed" : "Failed", all_zero);
// 		free(arr);
// 	} 
// 	else 
// 	{
// 		printf("ft_calloc test: Failed to allocate memory\n");
// 	}
// }

// void	test_ft_substr()
// {
// 	char *s = "Hello, World!";
// 	unsigned int start = 7;
// 	size_t len = 5;

// 	char *result = ft_substr(s, start, len);
// 	char *expected = strndup(s + start, len);

// 	if (strcmp(result, expected) == 0)
// 		printf("ft_substr : Passed (got %s, expected %s)\n", result, expected);
// 	else
// 		printf("ft_substr failed: got '%s', expected '%s'\n", result, expected);

// 	free(result);
// 	free(expected);
// }

// void	test_ft_strchr()
// {
// 	const char *s = "Hello, World!";
// 	int c = 'W';

// 	char *result = ft_strchr(s, c);
// 	char *expected = strchr(s, c);

// 	if (result == expected)
// 		printf("ft_strchr test: Passed (got %s, expected %s)\n", result, expected);
// 	else
// 		printf("ft_strchr test: Failed (got %s, expected %s)\n", result, expected);
// }

// void	test_ft_join()
// {
// 	char const *s1 = "Hello, ";
// 	char const *s2 = "World!";
// 	char *result = ft_strjoin(s1, s2);
// 	char *expected = "Hello, World!";

// 	if (strcmp(result, expected) == 0)
// 		printf("ft_strjoin test: Passed (got %s, expected %s)\n", result, expected);
// 	else
// 		printf("ft_strjoin test: Failed (got %s, expected %s)\n", result, expected);

// 	free(result);
// }

// void	test_ft_strtrim()
// {
// 	char const *s1 = "  Hello, World!  ";
// 	char const *set = " ";
// 	char *result = ft_strtrim(s1, set);
// 	char *expected = "Hello, World!";

// 	if (strcmp(result, expected) == 0)
// 		printf("ft_strtrim test: Passed (got '%s', expected '%s')\n", result, expected);
// 	else
// 		printf("ft_strtrim test: Failed (got '%s', expected '%s')\n", result, expected);

// 	free(result);
// }

void	test_ft_split()
{
	char *s1 = "hello world !";


	char **t = ft_split(s1, ' ');
	printf("ft_split test:\n");
	printf("Input string: '%s'\n", s1);
	printf("Split result:\n");
	for (int i = 0; t[i] != NULL; i++)
	{
		printf("  - '%s'\n", t[i]);
	}
}

int	main(void)
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("---------Running tests for libft functions:----------\n");
	// test_ft_strncmp();
	// test_ft_calloc();
	// test_ft_substr();
	// test_ft_strchr();
	// test_ft_join();
	// test_ft_strtrim();
	test_ft_split();
	return (0);
}
