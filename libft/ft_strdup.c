/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:51 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/21 13:08:46 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
