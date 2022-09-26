/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:41:31 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/24 23:15:55 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;
	size_t	lenofstr;

	if (start > ft_strlen(s))
		lenofstr = 0;
	else if ((ft_strlen(s) - start) >= len)
		lenofstr = len;
	else
		lenofstr = ft_strlen(s) - start;
	substr = (char *)malloc(sizeof(char) * (lenofstr + 1));
	if (!substr)
		return (0);
	i = start;
	j = 0;
	while (j < lenofstr)
		substr[j++] = s[i++];
	substr[j] = '\0';
	return (substr);
}
