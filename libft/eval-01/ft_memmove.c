/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:07:59 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/28 13:41:54 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    void	*memmove(void *dst, const void *src, size_t len);

DESCRIPTION
    The memmove() function copies len bytes from string src to string dst.  
	The two strings may overlap; the copy is always done in a non-destructive 
	manner.

RETURN VALUES
    The memmove() function returns the original value of dst.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	*lastd;
	unsigned char	*lasts;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		lasts = s + (len - 1);
		lastd = d + (len - 1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dst);
}

// int	main(void)
// {
// 	char src[15] = "lorem ipsum";
// 	char dst[20] = "dolor sit amet";
// 	size_t len = 3;

// 	printf("src: %s [ %p ]\n", src, &src);
// 	printf("dst: %s [ %p ]\n", dst, &dst);
// 	printf("-> dst: %s\n", ft_memmove(src, dst, len));
// }
