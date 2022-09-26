/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:17 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/24 23:41:25 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[j] != '\0' && j < len)
	{
		i = 0;
		while (needle[i] && haystack[j] && needle[i] == haystack[j])
		{
			i++;
			j++;
			if (j > len)
				return (0);
		}
		if (needle[i] == '\0')
			return ((char *)&haystack[j - i]);
		j = j - i + 1;
	}
	return (0);
}

// int	main(void)
// {
// 	char * empty = (char*)"";

// 	printf("strnstr   : %s\n",strnstr(empty, "coucou", -1));
// 	printf("ft_strnstr: %s\n",ft_strnstr(empty, "coucou", -1));
// 	return (0);
// }
