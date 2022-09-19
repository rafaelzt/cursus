/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:10:12 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/19 14:22:01 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;
	int		length;

	length = ft_strlen(s);
	aux = (char *)s + length;
	while (aux > 0)
	{
		if (*aux == c)
		{
			return (aux);
		}	
		aux--;
	}
	return (0);
}
