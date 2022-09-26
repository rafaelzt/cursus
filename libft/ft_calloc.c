/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:40 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/24 22:36:17 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	int		length;

	length = size * count;
	ptr = malloc(length);
	if (!ptr || (length / size != count))
		return (0);
	ft_bzero(ptr, length);
	return (ptr);
}
