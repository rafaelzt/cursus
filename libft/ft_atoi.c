/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:25 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/22 11:24:59 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	i;
	int	j;
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
	if (((j * ans)) > 2147483648)
		return (1);
	else if (((j * ans)) < -2147483649)
		return (-1);
	else
		return ((j * ans));
}

int	main(void)
{
	printf("atoi   : %d\n",atoi("2147483648"));
	printf("ft_atoi: %d\n",ft_atoi("2147483648"));

	printf("atoi   : %d\n",atoi("-2147483649"));
	printf("ft_atoi: %d\n",ft_atoi("-2147483649"));
	return (0);
}