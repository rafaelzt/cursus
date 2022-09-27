/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:17 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/27 17:48:43 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	aux;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	if (!haystack && !len)
		return (0);
	aux = 0;
	while (aux < len && haystack[aux] != 0)
	{
		if (ft_strncmp((char *)&haystack[aux], (char *)needle, \
		ft_strlen(needle)) == 0)
		{
			if (aux + ft_strlen(needle) > len)
				return (0);
			return ((char *)&haystack[aux]);
		}
		aux++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("   strnstr: %s\n", strnstr("fake", NULL, 3));
// 	printf("ft_strnstr: %s\n", ft_strnstr("fake", NULL, 3));
// 	return (0);
// }
