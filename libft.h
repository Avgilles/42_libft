/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 13:45:32 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/11 11:07:20 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h> 
# include <limits.h>

int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isalnum(char c);
int		ft_strlen(char *str);
int		ft_isdigit(char c);
int		ft_isprint(char c);
int		ft_memcmp(const void *s1, const void *s2, unsigned int n);
int		ft_atoi(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		t_isascii(int c);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	ft_tolower(char c);
char	ft_toupper(char c);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strchr(const char *s, int c);
char	*ft_strnstr(const char *src, const char *find, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strcpy(char *dest, char *src);
void	ft_bzero(void *s, unsigned int n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, unsigned int n);
void	*ft_memmove(void *dest, const void *src, unsigned int n);
void	*ft_memset(void *s, int value, unsigned int n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif