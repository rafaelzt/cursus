/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:40 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/26 13:03:53 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	int		length;

	length = size * count;
	ptr = malloc(length);
	if (!ptr || (length && (length / size != count)))
		return (0);
	ft_bzero(ptr, length);
	return (ptr);
}
