/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:17 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/28 13:45:37 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    char	*strnstr(const char *haystack, const char *needle, size_t len);
	
DESCRIPTION
    The strnstr() function locates the first occurrence of the null-terminated 
	string needle in the string haystack, where not more than len characters are 
	searched.  Characters that appear after a `\0' character are not searched. 
	Since the strnstr() function is a FreeBSD specific API, it should only be 
	used when portability is not a concern.

RETURN VALUES
    If needle is an empty string, haystack is returned; if needle occurs nowhere 
	in haystack, NULL is returned; otherwise a pointer to the first character of 
	the first occurrence of needle is returned.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	aux;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	if (!haystack && !len)
		return (0);
	aux = 0;
	while (aux < len && haystack[aux] != 0)
	{
		if (ft_strncmp((char *)&haystack[aux], (char *)needle, \
		ft_strlen(needle)) == 0)
		{
			if (aux + ft_strlen(needle) > len)
				return (0);
			return ((char *)&haystack[aux]);
		}
		aux++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("   strnstr: %s\n", strnstr("fake", NULL, 3));
// 	printf("ft_strnstr: %s\n", ft_strnstr("fake", NULL, 3));
// 	return (0);
// }
