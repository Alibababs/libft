#include <unistd.h>

size_t strlen(const char *s)
{
	size_t	i;

	i = 0;

	while (s[1])
		i++;
	return (i);
}
