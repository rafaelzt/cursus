/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:36:05 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/10/05 15:10:29 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	variadic_functions(int numbers, ...)
{
	int		sum;
	int		counter;
	va_list	ptr;

	sum = 0;
	counter = 0;
	va_start(ptr, numbers);
	while (counter < numbers)
	{
		sum += va_arg(ptr, int);
		counter++;
	}
	va_end(ptr);
	return (sum);
}

int	main(void)
{
	char 	str[50] = "ho\0la\0que\n\tal";
	int		value = 20;

//	printf("c: %c\n", str);
	printf("s: %s\n", str);
	printf("p: %p\n", &str);
	printf("d: %d\n", value);
	printf("i: %i\n", value);
	printf("u: %u\n", value);
	printf("x: %x\n", value);
	printf("X: %X\n", value);
//	printf("%: %%\n", str);
	printf("Sum: %d\n", variadic_functions(2, 1, 5, 2)); // number of elements, elements...
	return (0);
}
