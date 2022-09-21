/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:17 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/20 18:53:45 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_position;
	size_t	needle_length;
	char	*aux;

	aux = (char *)haystack;
	needle_position = 0;
	needle_length = ft_strlen(needle);
	if (needle_length == 0 || aux == needle)
		return (aux);
	while (*aux != '\0' && len > 0)
	{
		return (0);
		len--;
		aux++;
	}
	return (0);
}

int	main(void)
{
	return (0);
}