/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:25 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/23 10:55:54 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define TRIM(c) (c == ' ' || c == '\n' || c == '\t')
#define ADDTL_WHITESPACE(c) (c == '\v' || c == '\r' || c == '\f')
#define IS_WHITESPACE(c) (TRIM(c) || ADDTL_WHITESPACE(c))

int	ft_atoi(const char *s)
{
	int		j;
	long	ans;
	char	*input;

	j = 1;
	ans = 0;
	input = (char *)s;
	while (IS_WHITESPACE(*input))
		input++;
	if (*input == '-' && ft_isdigit(*(input + 1)))
	{
		j = -1;
		input++;
	}
	if (*input == '+' && ft_isdigit(*(input + 1)))
		input++;
	while (ft_isdigit(*input))
	{
		ans = ans * 10 + (*input - '0');
		input++;
	}
	return ((j * ans));
}

	// if (((j * ans)) > 2147483650)
	// 	return (1);
	// else if (((j * ans)) < -2147483650)
	// 	return (-1);
	// else