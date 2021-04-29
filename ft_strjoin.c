#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*j_str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	j_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!j_str)
		return (NULL);
	while (s1[i])
		j_str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		j_str[j++] = s2[i++];
	j_str[j] = '\0';
	return (j_str);
}
