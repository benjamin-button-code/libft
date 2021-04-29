#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	unsigned char	*temp_ptr;

	temp_ptr = (unsigned char *)b;
	while (n--)
		*(temp_ptr++) = (unsigned char)0;
}
