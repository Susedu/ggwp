#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
	int	x;

	x = 1;
	if((nb == 0 && power != 0) || power < 0)
		return (0);
	if ((power == 0) || ((nb < 0) && (power == 0)))
		return (1);
	else
	{
		while (power > 0)
		{
			x = nb * x;
			power--;
		}
		return (x);
	}
}
