/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:41:31 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/23 17:00:30 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	aux;

	aux = len;
	if (!s)
		return (0);
	str = ft_calloc(sizeof(*s), (len + 1));
	if (!str)
		return (0);
	else if ((start >= ft_strlen(s)))
	{
		return (str);
	}
	s += start;
	while (len > 0)
	{
		*str = *s;
		s++;
		str++;
		len--;
	}
	*str = '\0';
	str -= aux;
	return (str);
}
