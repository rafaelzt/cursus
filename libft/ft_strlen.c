/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:09:32 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/14 16:46:57 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlen(const char *s)
{
	unsigned long long	length;

	length = 0;
	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
