#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	x;

	count = 0;
	x = 0;
	while (src[count] != '\0')
		++count;
	while (src[x] != '\0' && x < (size - 1))
	{
		dest[x] = src[x];
		++x;
	}
	dest[x] = '\0';
	return (count);
}
