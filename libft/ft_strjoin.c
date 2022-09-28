/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:53:23 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/28 15:13:18 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	char	*ft_strjoin(char const *s1, char const *s2);

DESCRIPTION
    Reserve (with malloc(3)) and return a new string, formed by the 
	concatenation of 's1' and 's2'.
	
RETURN VALUES
    The new string. NULL if memory allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	s1s2;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (0);
	s1s2 = ft_strlen(s1) + ft_strlen(s2);
	newstr = malloc(sizeof(char) * (s1s2 + 1));
	if (!newstr)
		return (0);
	i = -1;
	j = 0;
	if (s1 != 0)
		while (s1[++i] != '\0')
			newstr[i] = s1[i];
	while (s2[j] != '\0')
		newstr[i++] = s2[j++];
	newstr[s1s2] = '\0';
	return (newstr);
}

// int	main(void)
// {
// 	char *s = ft_strjoin("tripouille", "42");

// 	printf("%s", s);
// 	return (0);
// }
