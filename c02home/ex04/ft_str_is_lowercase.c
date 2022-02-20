#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 97 && str[x] <= 122))
		{
			return (0);
		}
		x++;
	}
	return (1);
}
