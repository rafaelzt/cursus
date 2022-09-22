/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:07:14 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/22 18:04:31 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	aux;

	aux = 0;
	while (aux < n)
	{
		if (((unsigned char *)s)[aux] == (unsigned char)c)
		{
			return ((unsigned char *)(s + aux));
		}
		aux++;
	}
	return (0);
}
