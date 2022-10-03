/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:07:24 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/28 13:43:01 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    int	tolower(int c);
	
DESCRIPTION
    The tolower() function converts an upper-case letter to the corresponding 
	lower-case letter.  The argument must be representable as an unsigned char 
	or the value of EOF.

    Although the tolower() function uses the current locale, the tolower_l() 
	function may be passed a locale directly. See xlocale(3) for more 
	information.

RETURN VALUES
    If the argument is an upper-case letter, the tolower() function returns the 
	corresponding lower-case letter if there is one; otherwise, the argument is 
	returned unchanged.
*/
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}
