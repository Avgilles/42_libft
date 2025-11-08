/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 18:26:23 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/08 18:58:18 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned int n)
{
	unsigned int	i;
	unsigned char	*src;

	if (!s)
		return ;
	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		src[i] = '\0';
		i++;
	}
}
