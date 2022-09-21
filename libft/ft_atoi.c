/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:25 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/21 17:00:08 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	long	i;
	long	j;
	long	ans;
	char	*input;

	i = 0;
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
