/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avgilles <avgilles@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:45:05 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/14 22:51:51 by avgilles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{

    (void)s;
    (void)c;

    // int i;
    int len;

    len = ft_strlen((char *)s);
    char *ptr = ft_memchr(s, c, len);
    printf("ptr: %s\n", ptr);
    // i = 0;
    // while(s[i])
    // {
    //     i++;
        
    // }

    return malloc(3 * sizeof(int));   

}