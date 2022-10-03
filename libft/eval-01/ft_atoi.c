/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:25 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/10/01 13:41:44 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	num;
	int		neg;

	num = 0;
	neg = 1;
	i = 0;
	// ft_isalpha || ft_isprint || ft_isascii
	while ((str[i] <= '\n' && str[i] >= '\t') || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] <= '9' && str[i] >= '0'))
	{
		if (num > INT_MAX)
			return (-1);
		else if (num * neg < INT_MIN)
			return (0);
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return ((int)num * neg);
}

	// if (((j * ans)) > 2147483650)
	// 	return (1);
	// else if (((j * ans)) < -2147483650)
	// 	return (-1);
	// else