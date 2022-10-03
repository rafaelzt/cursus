/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:36:05 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/10/03 14:45:24 by rzamolo-         ###   ########.fr       */
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
	char str = 'h';

	printf("c: %c\n", str);
//	printf("s: %s\n", str);
	printf("p: %p\n", &str);
	printf("d: %d\n", str);
	printf("i: %i\n", str);
	printf("u: %u\n", str);
	printf("x: %x\n", str);
	printf("X: %X\n", str);
//	printf("%: %%\n", str);
	printf("Sum: %d\n", variadic_functions(3, 1, 5, 2)); // number of elements, elements...
	return (0);
}
