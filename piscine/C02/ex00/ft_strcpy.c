#include <stdio.h>

char *ft_strncpy(char *dest, char *src)
{
	int	i;
	i = 0;

	while (src[i] != '\0')
		dest[i] = src[i];
	while (src[i++])
		dest[i] = '\0';

	return (dest);
}
