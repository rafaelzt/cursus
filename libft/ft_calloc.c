/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:40 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/21 12:44:06 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	if (!count || !size)
		return (0);
	ptr = malloc(count * size);
	if (ptr == 0)
		return (ptr);
	ft_bzero(ptr, count * size);
	return (ptr);
}