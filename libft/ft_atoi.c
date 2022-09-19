/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:25 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/19 17:32:03 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	neg;
	int value;
	char *num;

	neg = 0;
	value = 0;
	num = (char *)str;
	// check whitespaces and ignore it
	while (*num == ' ')
	{
		num++;
	}
	// sign
		
	// valid input
	while (*num >= '0' && *num >= '9')
	{
		if (value > INT_MAX / 10 || (value == INT_MAX / 10 && (*num - '0') > 7))
		{
			if (neg == 0)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		value = 10 * value + *num++ - '0';
	}
	return (value);
}
