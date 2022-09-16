/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:04:05 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/16 12:55:20 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	position;

	position = 0;
	while (position < n)
	{
		((unsigned char *)dst)[position] = ((unsigned char *)src)[position];
		position++;
	}
	return (dst);
}
