/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:41:31 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/27 21:02:39 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;
	size_t	lenstr;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		lenstr = 0;
	else if ((ft_strlen(s) - start) >= len)
		lenstr = len;
	else
		lenstr = ft_strlen(s) - start;
	substr = ft_calloc((lenstr + 1), sizeof(*s));
	if (!substr)
		return (0);
	i = start;
	j = 0;
	while (j < lenstr)
		substr[j++] = s[i++];
	substr[j] = '\0';
	return (substr);
}
