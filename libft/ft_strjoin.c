#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*j_str;
	char	*start_str;
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (!s1 || !s2)
		return (NULL);
	j_str = (char *)malloc(sizeof(char) * (ft_strlen(s1)
				+ ft_strlen(s2) + 1));
	if (!j_str)
		return (NULL);	
	start_str = j_str;
	while (*str1)
	{
		*j_str = *str1;
		str1++;
		j_str++;
	}
	while (*str2)
	{
		*j_str = *str2;
		str2++;
		j_str++;
	}
	*j_str = '\0';
	return (start_str);
}
