/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:51 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/28 13:46:57 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    char	*strdup(const char *s1)
DESCRIPTION
    The strdup() function allocates sufficient memory for a copy of the string 
	s1, does the copy, and returns a pointer to it.  The pointer may subsequently 
	be used as an argument to the function free(3).

    If insufficient memory is available, NULL is returned and errno is set to 
	ENOMEM.

    The strndup() function copies at most n characters from the string s1 always 
	NUL terminating the copied string.
*/
char	*ft_strdup(const char *s1)
{
	unsigned int	length;
	unsigned int	position;
	char			*ptr;

	length = ft_strlen((char *)s1);
	position = 0;
	ptr = malloc(sizeof(*s1) * (length + 1));
	if (ptr == 0)
		return (ptr);
	while (s1[position] != '\0')
	{
		ptr[position] = s1[position];
		position++;
	}
	ptr[position] = '\0';
	return (ptr);
}
