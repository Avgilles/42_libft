/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:18:24 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/09 10:37:18 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && (s1[i] == s2[i]) && i < (n -1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	c1[] = "ABC";
	char	c2[] = "AB ";

	int v = ft_strncmp(c1, c2, 4);
	int t = strncmp(c1, c2, 4);
	printf("%d \n", v);
	printf("%d \n", t);

	return (0);
}
*/