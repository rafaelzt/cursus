/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:47:16 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/26 22:48:53 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_strrev(char *str)
{
	char	temp;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(str) - 1;
	if (str[start] == '-')
		start++;
	while (str[start] && start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	res = (char *)malloc(sizeof(char) * (ft_count_digits(n) + 1));
	if (!res)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		n = -n;
		res[i++] = '-';
	}
	while (n)
	{
		res[i++] = (n % 10) + '0';
		n = n / 10;
	}
	res[i] = '\0';
	ft_strrev(res);
	return (res);
}

// int	main(void)
// {
// 	int	n = 147483648;

// 	printf("ft_itoa valor em char: %s\n", ft_itoa(n));
// 	printf("valor em int : %d\n", (n));

// 	n = -53700;

// 	printf("ft_itoa valor em char: %s\n", ft_itoa(n));
// 	printf("valor em int : %d\n", (n));
// }
