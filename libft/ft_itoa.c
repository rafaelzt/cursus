/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:47:16 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/27 17:17:20 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t getsize(int n)
{
	size_t size;

	size = 0;
	while (n > 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char *ft_itoa(int n)
{
	size_t		sign;
	size_t		size;
	long long	aux;
	char		*ptr;

	sign = 0;
	aux = n;
	if (n < 0)
	{
		n *= -1;
		size = getsize(n) + 2;
		sign = 1;
	}
	else
		size = getsize(n) + 1;
	ptr = ft_calloc(size, sizeof(char));
	if (!ptr)
		return (0);
	ptr += size;
	while (n > 0)
	{
		*--ptr = (n % 10) + '0';
		n /= 10;
	}
	if (aux < 0)
	{
		*--ptr = '-';
		return (ptr);
	}
	return (ptr);
}

// int main(void)
// {
// 	int n = 147483648;

// 	printf("ft_itoa valor em char: %s\n", ft_itoa(n));
// 	printf("valor em int : %d\n", (n));

// 	n = -53700;

// 	printf("ft_itoa valor em char: %s\n", ft_itoa(n));
// 	printf("valor em int : %d\n", (n));
// }
