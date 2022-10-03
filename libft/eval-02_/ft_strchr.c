/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:09:59 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/28 13:43:17 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    char	*strchr(const char *s, int c);
	
DESCRIPTION
    The strchr() function locates the first occurrence of c (converted to a 
	char) in the string pointed to by s.  The terminating null character is 
	considered to be part of the string; therefore if c is `\0', the functions 
	locate the terminating `\0'.

    The strrchr() function is identical to strchr(), except it locates the last 
	occurrence of c.

RETURN VALUES
    The functions strchr() and strrchr() return a pointer to the located 
	character, or NULL if the character does not appear in the string.
*/
char	*ft_strchr(const char *s, int c)
{
	char	*aux;

	aux = (char *)s;
	while (*aux != (unsigned char)c)
	{
		if (*aux == '\0')
			return (0);
		aux++;
	}
	return (aux);
}
