#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 65 && str[x] <= 90))
		{
			return (0);
		}
		x++;
	}
	return (1);
}
