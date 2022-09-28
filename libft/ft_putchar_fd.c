/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:46:02 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/28 15:24:48 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	void ft_putchar_fd(char c, int fd);

DESCRIPTION
    Send the character 'c' to the given file descriptor 'fd'.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
