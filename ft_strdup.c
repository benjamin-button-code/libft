#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	size;
	size_t	i;
	char	*dublicat_str;

	i = 0;
	size = ft_strlen(s1);
	dublicat_str = (char *)malloc((size + 1) * sizeof(char));
	if (!dublicat_str)
		return (NULL);
	while (s1[i])
	{
		dublicat_str[i] = s1[i];
		i++;
	}
	dublicat_str[i] = '\0';
	return (dublicat_str);
}
