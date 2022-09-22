/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:04 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/22 18:04:48 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
