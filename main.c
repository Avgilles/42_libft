/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:43:36 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/08 16:42:01 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

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
