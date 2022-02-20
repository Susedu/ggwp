#include <unistd.h>

unsigned int ft_strlcat(char *dest, char *arc, unsigned int size)
{
	unsigned int	ld;
	unsigned int	ls;
	unsigned int	i;

	ld = 0;
	ls = 0;
	i = 0;

	while (arc[ls] != '\0')
		ls++;
	while (dest[ls] != '\0')
		ld++;
	if (size == 0)
		return (ls);
	if (size <= ld)
		return (ls + size);
	while (arc[i] && ld + 1 < size & i + 1 < size)
	{
		dest[ls + i] = arc[i];
		i++;
	}
	dest[ls + i] = '\0';
	return (ld + ls);
}
