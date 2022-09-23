/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:53:23 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/23 18:50:53 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*join;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	join = (char *)ft_calloc(size, sizeof(*s1));
	if (join == 0)
		return (join);
	while (*s1 != '\0')
	{
		*join = *s1;
		join++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*join = *s2;
		join++;
		s2++;
	}
	join -= size;
	return (join);
}

// int	main(void)
// {
// 	char *s = ft_strjoin("tripouille", "42");

// 	printf("%s", s);
// 	return (0);
// }
