/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:04:05 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/22 18:04:59 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	position;

	position = 0;
	if (dst == 0 && src == 0)
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
// 	char *src = 0;
// 	char *dst = 0;
// 	size_t length = 3;

// 	printf("src: %s\ndest: %s\nmemcpy   : %s\n\n", src, dst, 
// 		memcpy(dst, src, length));
//     printf("src: %s\ndest: %s\nft_memcpy: %s", src, dst, 
// 		ft_memcpy(dst, src, length));
// 	return (0);
// }