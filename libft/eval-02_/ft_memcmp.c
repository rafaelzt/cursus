/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:04 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/28 13:44:03 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    int	memcmp(const void *s1, const void *s2, size_t n);
	
DESCRIPTION
    The memcmp() function compares byte string s1 against byte string s2.  
	Both strings are assumed to be n bytes long.
	
RETURN VALUES
    The memcmp() function returns zero if the two strings are identical, 
	otherwise returns the difference between the first two differing bytes 
	(treated as unsigned char values, so that `\200' is greater than `\0', 
	for example).
    Zero-length strings are always identical.  This behavior is not required by 
	C and portable code should only depend on the sign of the returned value.
*/
int	ft_memcmp(const void *s1_void, const void *s2_void, size_t n)
{
	size_t			aux;
	unsigned char	*s1;
	unsigned char	*s2;

	aux = 0;
	s1 = (unsigned char *)s1_void;
	s2 = (unsigned char *)s2_void;
	while (aux < n)
	{
		if (s1[aux] != s2[aux])
		{
			return (s1[aux] - s2[aux]);
		}
		aux++;
	}
	return (0);
}
