#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			x++;
		}
		else if (str[x] >= 'A' && str[x] <= 'Z')
		{
			x++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
