/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:59:23 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/10/05 16:06:07 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char const *, ...)
{
	printf("%s", &);
}

int	main(void)
{
	char	*str;

	str = (char *)malloc(5);
	str = "hola\0";
	ft_printf(str);

	return (0);
}

// https://www.geeksforgeeks.org/variadic-functions-in-c/
// 