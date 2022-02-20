#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 48 && str[x] <= 57))
		{
			return (0);
		}
		x++;
	}
	return (1);
}
