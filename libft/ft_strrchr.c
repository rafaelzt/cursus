/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:10:12 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/22 18:06:11 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;
	int		length;

	length = ft_strlen(s);
	aux = (char *)s + length;
	while (length >= 0)
	{
		if (*aux == (unsigned char)c)
		{
			return (aux);
		}	
		aux--;
		length--;
	}
	return (0);
}

// int	main(void)
// {
// 	char str[10] = "tripouille";

// 	printf("strrchr   : %s\n", strrchr(str, 't' + 256));
// 	printf("ft_strrchr: %s\n", ft_strrchr(str, 't' + 256));

// }