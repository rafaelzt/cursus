/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:59:23 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/10/19 11:51:35 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	int		counter;
	va_list	ap;

	counter = 0;
	va_start(ap, format);
	while ((*format))
	{
		// Print everything
		if (*format != '%')
			write(1, format, 1);
		if (*format == '%')
		{
			format++;
			if ((*format) == 'c')
				ft_printf_char(va_arg(ap, int));
			if ((*format) == '%')
				ft_printf_char('%');
			if ((*format) == 'c')
				ft_printf_char(va_arg(ap, int));
			if ((*format) == 'c')
				ft_printf_char(va_arg(ap, int));
		}
		format++;
		counter++;
	}
	return (counter);
}

int	main(void)
{
	int				x;
	float			y;
	unsigned int	z;
	char			c;
	//char			str[50] = "hola";

	c = 'A';
	x = -21;
	y = 3.6;
	z = 42;
	
	ft_printf("Teste: %c\n");
	ft_printf("Teste: %c\n", c);
	ft_printf("Teste: %%\n");
	
	
	// ft_printf("%s\n", str);
	// ft_printf("ft_printf: %p\n", &str);
	// // 0x00007ffeefbffd70
	// printf("printf: %p\n", &str);
	// printf("printf: %u\n", -10);
	// 
	// ft_printf("%d", y);
	
	// ft_printf("%i", x);
	
	// ft_printf("%u", z);

	// ft_printf("%x", str);
	
	// ft_printf("%X", str);

	return (0);
}
