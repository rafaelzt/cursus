/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:17 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/26 22:58:55 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*s1, const char *s2, size_t len)
{
	size_t	size;

	size = ft_strlen(s2);
	if (!size)
		return ((char *)s1);
	while ((char *)s1 && size <= len--)
	{
		if (!ft_strncmp((char *)s1, (char *)s2, size))
			return ((char *)s1);
		s1++;
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
