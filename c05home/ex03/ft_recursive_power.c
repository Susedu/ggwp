#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
	int	x;

	x = nb;
	if ((nb == 0 && power != 0) || power < 0)
		return (0);
	if ((power == 0) || ((nb < 0) && (power == 0)))
		return (1);
	else
	{
		return (x * ft_recursive_power(x, power -1));
	}
}
