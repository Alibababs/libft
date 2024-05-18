#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *temp;
	size_t	i;

	i = 0;
	temp = (unsigned char *)s;
	while (i < n)
	{
		temp[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
