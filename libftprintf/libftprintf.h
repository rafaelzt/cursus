/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:07:47 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/10/05 16:35:13 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_word
{
	void			*content;
	char			*flags;
	char			*format;
	struct s_word	*next;
}	t_word;

int	ft_printf(char const *content, ...);

#endif