/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:58:42 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/14 17:02:04 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned int counter;

	counter = 0;
	while (counter < len)
	{
		((unsigned char *)b)[counter] = (unsigned char) c;
		counter++;
	}
	return (b);
}
