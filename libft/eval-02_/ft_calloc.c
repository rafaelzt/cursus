/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzamolo- <rzamolo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:11:40 by rzamolo-          #+#    #+#             */
/*   Updated: 2022/09/28 13:36:13 by rzamolo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    void	*calloc(size_t count, size_t size);
DESCRIPTION
    The malloc(), calloc(), valloc(), realloc(), and reallocf() functions 
	allocate memory.  The allocated memory is aligned such that it can be used 
	for any data type, including AltiVec- and SSE-related types.  The 
	aligned_alloc() function allocates memory with the requested alignment.  
	The free() function frees allocations that were created via the preceding 
	allocation functions.

    The calloc() function contiguously allocates enough space for count objects 
	that are size bytes of memory each and returns a pointer to the allocated 
	memory. The allocated memory is filled with bytes of value zero.
RETURN VALUES
    If successful, calloc(), malloc(), realloc(), reallocf(), valloc(), and 
	aligned_alloc() functions return a pointer to allocated memory.  If there 
	is an error, they return a NULL pointer and set errno to ENOMEM.
*/
void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	int		length;

	length = size * count;
	ptr = malloc(length);
	if (!ptr || (length && (length / size != count)))
		return (0);
	ft_bzero(ptr, length);
	return (ptr);
}
