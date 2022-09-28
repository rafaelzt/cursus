/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:20:23 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/28 15:31:04 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

DESCRIPTION
    To each character of the string 's', apply the function 'f' giving as 
	parameters the index of each character inside 's' and the character itself. 
	Generate a new string with the result of successive use of 'f'
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		len;
	unsigned int		i;
	char				*out_str;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	out_str = ft_calloc((len + 1), sizeof(*s));
	if (!(out_str))
		return (0);
	i = 0;
	while (s[i])
	{
		out_str[i] = f(i, s[i]);
		i++;
	}
	out_str[i] = '\0';
	return (out_str);
}

// function call: f(0, s[0]);