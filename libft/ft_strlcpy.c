/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:44:16 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/21 11:54:30 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src_const, size_t size)
{
	size_t	pos;
	char	*src;

	pos = 0;
	src = (char *)src_const;
	if (size > 0)
	{
		while (src[pos] && pos < (size - 1))
		{
			dst[pos] = src[pos];
			pos++;
		}
		dst[pos] = 0;
	}
	while (src_const[pos])
		pos++;
	return (pos);
}
