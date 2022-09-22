/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:53:56 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/22 18:05:34 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	position;
	size_t	len_dst;

	position = 0;
	len_dst = ft_strlen(dst);
	if (dstsize <= len_dst)
		return (dstsize + ft_strlen(src));
	while (src[position] != '\0' && len_dst + 1 < dstsize)
	{
		dst[len_dst] = src[position];
		len_dst++;
		position++;
	}
	dst[len_dst] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[position]));
}
