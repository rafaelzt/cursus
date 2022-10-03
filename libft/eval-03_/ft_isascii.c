/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 14:54:00 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/28 13:39:26 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    int	isascii(int c);
	
DESCRIPTION
    The isascii() function tests for an ASCII character, which is any character 
	between 0 and octal 0177 inclusive.
*/
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
