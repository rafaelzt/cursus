/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 23:42:32 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/28 15:16:45 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	char *ft_strtrim(char const *s1, char const *set);

DESCRIPTION
    Remove all characters from the string 'set' from the end of 's1', until find 
	a character not belonging to 'set'. The resulting string is returned with a 
	fallback of malloc(3)
	
RETURN VALUES
    New cutted string. NULL if allocation fails.
*/
static	size_t	trimornot(char const *set, char c)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	len;

	i = 0;
	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (trimornot(set, s1[start]) == 1)
		start++;
	while (end > start && trimornot(set, s1[end - 1]) == 1)
		end--;
	len = end - start;
	str = ft_calloc(sizeof(*s1), (len + 1));
	if (!str)
		return (0);
	while (i < len)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
