/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:43:36 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/09 12:00:43 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"


int main() {

	char * source = "The C Language";
	char * destination;
	char * pointer;
	int length = ft_strlen(source);
	
	destination = (char *) malloc( sizeof( char) * (length+1) );
	ft_strcpy( destination, source );
	while ((pointer = ft_strchr( destination, 'a' ))  != NULL ) {
		*pointer = 'A';
		pointer++;
	}
	printf( "Result : %s\n", destination );
	
	free( destination );
	
	return 0;
}