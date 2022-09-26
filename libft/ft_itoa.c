/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:47:16 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/26 13:06:03 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		sign;
	int		size;
	char	*ptr;

	sign = 0;
	size = 0;
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	while (n > 0)
	{
		size++;
		n /= 10;
	}
	ptr = ft_calloc(size, sizeof(char));
	if (!ptr)
		return (0);
	return (0);
	
}

int	main(void)
{
	int	n = 123;

	printf("valor em char: %s\n", ft_itoa(n));
	printf("valor em int : %d\n", (n));
}
