/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:17 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/27 16:24:04 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	aux;
	char	*haystack_;
	char	*needle_;

	aux = 0;
	haystack_ = (char *)haystack;
	needle_ = (char *)needle;
	if (!haystack)
		return (0);
	if (!needle || ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (ft_strlen(needle) > len)
		return (0);
	while (aux < len)
	{
		if (ft_strncmp((char *)&haystack[aux], needle_, ft_strlen(needle)) == 0)
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
// 	printf("strnstr   : %s\n", strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", strlen("MZIRIBMZE")));
// 	printf("ft_strnstr: %s\n", ft_strnstr("MZIRIBMZIRIBMZE123", "MZIRIBMZE", strlen("MZIRIBMZE")));
// 	return (0);
// }