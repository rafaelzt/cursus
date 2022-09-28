/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:02:33 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/28 13:40:21 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	bzero(void *s, size_t n);

DESCRIPTION
    The bzero() function writes n zeroed bytes to the string s.  If n is zero, 
	bzero() does nothing.
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
