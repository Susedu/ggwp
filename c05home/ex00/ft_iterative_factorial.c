#include <unistd.h>

int ft_iterative_factorial(int nb)
{
	int	a;
	
	a = 1;
	if (nb > 1)
	{
		while (nb != 0)
		{
			a = a * nb--;
		}
		return (a);
	}
	else if (nb <= 1)
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
}
