/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:15:14 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/28 13:38:55 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    int isdigit(int c);
	
DESCRIPTION
    The isdigit() function tests for a decimal digit character.  Regardless of 
	locale, this includes the following characters only:
    ``0''         ``1''         ``2''         ``3''         ``4''
    ``5''         ``6''         ``7''         ``8''         ``9''
    The isnumber() function behaves similarly to isdigit(), but may recognize 
	additional characters, depending on the current locale setting.
    The value of the argument must be representable as an unsigned char or the 
	value of EOF.
	
RETURN VALUES
    The isdigit() and isnumber() functions return zero if the character tests 
	false and return non-zero if the character tests true.
*/
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
