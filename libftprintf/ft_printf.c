/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:59:23 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/10/05 18:27:28 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t static	count_flags(char *str)
{
	int	words;

	words = 0;
	while (*str != '\0')
	{
		if (*str == 37 && (*(str + 1) != 37 || *(str + 1) != '\0'))
			words++;
		else if (*str == 37 && *(str + 1) == 37)
			str++;
		str++;
	}
	return (words);
}

int	main(void)
{
	char	str[50] = "ho%la%%";

	printf("%zu", count_flags(str));
	return (0);
}

// https://www.geeksforgeeks.org/variadic-functions-in-c/
// 