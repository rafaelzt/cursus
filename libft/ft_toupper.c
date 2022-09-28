/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:07:28 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/28 13:42:54 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    int	toupper(int c);

DESCRIPTION
    The toupper() function converts a lower-case letter to the corresponding 
	upper-case letter.  The argument must be representable as an unsigned char 
	or the value of EOF.

    Although the toupper() function uses the current locale, the toupper_l() 
	function may be passed a locale directly. See xlocale(3) for more information.

RETURN VALUES
    If the argument is a lower-case letter, the toupper() function returns the 
	corresponding upper-case letter if there is one; otherwise, the argument is 
	returned unchanged.
*/
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}
