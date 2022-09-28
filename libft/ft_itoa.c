/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:47:16 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/28 15:31:59 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	char *ft_itoa(int n);

DESCRIPTION
    Using malloc(3), generate a string that represent the integer value received 
	as an argument. Negative numbers have to be managed.
	
RETURN VALUES
    The string that represents the number. NULL if memory allocation fails.
*/
static char	spe_putnbr(int nb)
{
	unsigned int	number;

	number = nb;
	if (number == 0)
		return (0 + '0');
	if (number > 0)
	{
		spe_putnbr(number / 10);
		number %= 10;
	}
	return (number + '0');
}

static int	is_neg(int nb)
{
	if (nb < 0)
		return (1);
	return (0);
}

static size_t	get_len(int n)
{
	size_t			len;
	unsigned int	number;

	len = 0;
	if (is_neg(n))
	{
		number = (unsigned int)-n;
		len++;
	}
	else
		number = (unsigned int)n;
	while (number > 9)
	{
		number /= 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char			*result;
	size_t			len;
	unsigned int	num;
	int				i;

	len = get_len(n);
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	if (is_neg(n))
		num = (unsigned int)-n;
	else
		num = (unsigned int)n;
	while (i++ <= (int)len - 1)
	{
		result[(int)len - i] = spe_putnbr(num);
		num /= 10;
	}
	if (is_neg(n))
		result[0] = '-';
	result[len] = '\0';
	return (result);
}
