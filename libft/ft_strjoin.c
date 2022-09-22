
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*join;

	size = ft_strlen(s1) + ft_strlen(s2);
	join = (char *)malloc(sizeof(*join) * (size + 1));
	if (join == 0)
		return (join);
	return (0);
}

// ft_strcat(ft_strcpy(join, s1), s2)