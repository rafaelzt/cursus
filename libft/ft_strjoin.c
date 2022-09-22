#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_length;
	size_t	s2_length;
	int		index_input;
	int		index;
	char	*new_s;

	if (!s1 || !s2)
		return (0);
	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	new_s = malloc(s1_length + s2_length + 1);
	if (new_s == 0)
		return (0);
	index = 0;
	index_input = 0;
	while (s1[index_input] != '\0')
	{
		new_s[index] = s1[index_input];
		index_input++;
		index++;
	}
	index_input = 0;
	while (s2[index_input] != '\0')
	{
		new_s[index] = s2[index_input];
		index_input++;
		index++;
	}
	new_s[index] = '\0';
	return (new_s);
}
