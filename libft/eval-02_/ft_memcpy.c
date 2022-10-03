/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:04:05 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/28 13:40:36 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	*memcpy(void *restrict dst, const void *restrict src, size_t n);

DESCRIPTION
	The memcpy() function copies n bytes from memory area src to memory area dst.  
	If dst and src overlap, behavior is undefined.  Applications in which dst 
	and src might overlap should use memmove(3) instead.
	
RETURN VALUES
    The memcpy() function returns the original value of dst.
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	position;

	position = 0;
	if (!dst && !src)
		return (0);
	while (position < n)
	{
		((unsigned char *)dst)[position] = ((unsigned char *)src)[position];
		position++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char src[15] = "lorem";
// 	char dst[15] = "ipsum dolor";
// 	size_t length = 3;

// 	printf("src: %s\ndest: %s\nmemcpy   : %s\n\n", src, dst, 
// 		memcpy(dst, src, length));
//     printf("src: %s\ndest: %s\nft_memcpy: %s", src, dst, 
// 		ft_memcpy(dst, src, length));
// 	return (0);
// }
