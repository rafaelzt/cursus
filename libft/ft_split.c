/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:35:35 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/27 18:45:56 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*str;

	str = (char *)s;
	while (*str != '\0')
	{
		
	}
	return (ptr);
}

int	main(void)
{
	char	big = "lorem,ipsum,dolor,sit";
	char	sep = ",";
	int		size = 4;

	printf("s1: %s\n", ft_split(big, sep)[0]);
	printf("s2: %s\n", ft_split(big, sep)[1]);
	printf("s3: %s\n", ft_split(big, sep)[2]);
	printf("s4: %s\n", ft_split(big, sep)[3]);
}

