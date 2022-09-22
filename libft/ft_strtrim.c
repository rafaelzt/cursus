#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*aux;
	char	*str;
	int		index_str;
	int		index_set;
	int		index_s1;

	index_str = 0;
	index_s1 = 0;
	aux = (char *)s1;
	str = malloc(ft_strlen(aux) + 1);
	if (str == 0)
		return (str);
	while (s1[index_s1] != '\0')
	{
		index_set = 0;
		while (set[index_set] != '\0')
		{
			if (s1[index_s1] == set[index_set])
				index_s1++;
				index_set++;
		}
		str[index_str] = s1[index_s1];
		index_s1++;
		index_str++;
	}
	str[index_str] = '\0';
	return (str);
}
