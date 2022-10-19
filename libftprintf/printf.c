/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:36:05 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/10/07 11:57:13 by rzamolo-         ###   ########.fr       */
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
	printf("%: %%\n", str);
	printf("Sum: %d\n", variadic_functions(2, 1, 5, 2)); // number of elements, elements...
	return (0);
}

/*
1. Contar a quantidade de % sozinhos (usado no loop while)
1.1 %% deve ser desconsiderado
2. Criar os nós contendo o dado bruto (content), os flags, os formatos, e um ponteiro para a proxima cadeia
3. Imprimir a cadeia e contar o comprimento (return do comprimento)
4. Formatar a saida de acordo com o formato solicitado
5. Limpar os nós depois de imprimi-los
*/