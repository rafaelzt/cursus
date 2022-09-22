/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:17:52 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/22 13:41:31 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBC_H
# define LIBC_H
# define TRIM(c) (c == ' ' || c == '\n' || c == '\t')
# define ADDTL_WHITESPACE(c) (c == '\v' || c == '\r' || c == '\f')
# define IS_WHITESPACE(c) (TRIM(c) || ADDTL_WHITESPACE(c))

#include <stdlib.h>

#include <stdio.h>
#include <strings.h>



int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, unsigned int n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char    *ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int 	ft_strncmp(char *s1, char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int 	ft_memcmp(const void *s1_void, const void *s2_void, size_t n);
int		ft_atoi(const char *num);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
//
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);

#endif
