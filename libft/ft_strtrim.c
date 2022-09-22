
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	s1_length;
	int				s1_position;
	unsigned int	set_length;
	int				set_position;
	char			*str;
	int				str_position;

	s1_length = ft_strlen(s1);
	s1_position = 0;
	set_length = ft_strlen(set);
	set_position = 0;
	str_position = 0;
	if ((str = (char *)malloc(ft_strlen(s1))) == 0)
		return (str);
	printf("s1_len: %d\nset_len: %d\n",s1_length, set_length);
	while (s1[s1_position] != '\0')
	{
		printf("while: %c\n", s1[s1_position]);
		set_position = 0;
		while (set[set_position] != '\0')
		{
			if (s1[s1_position] != set[set_position])
			{
				str[str_position] = s1[s1_position];
				str_position++;
			}
			set_position++;
			s1_position++;
		}
		s1_position++;
	}
	return (str);
}

int	main(void)
{
	char str[15] = "lorem ipsum";
	char subs[5] = "em";

	printf("%s", ft_strtrim(str, subs));
	return (0);
}
