/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:07:14 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/19 15:46:15 by rzamolo-         ###   ########.fr       */
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
