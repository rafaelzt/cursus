
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*aux;
	size_t	index;

	aux = (char *)s;
	index = 0;
	ptr = malloc(sizeof(*s) * (len + 1));
	if (ptr == 0)
		return (ptr);
	while (index != start)
		index++;

	while (len > 0)
	{
		*ptr = aux[index];
		index++;
		ptr++;
		len--;
	}
	*ptr = '\0';
	return (ptr);
}