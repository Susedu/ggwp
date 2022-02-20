#include <unistd.h>

void	ft_init_hex_table(char base[])
{
	base[0] = '0';
	base[1] = '1';
	base[2] = '2';
	base[3] = '3';
	base[4] = '4';
	base[5] = '5';
	base[6] = '6';
	base[7] = '7';
	base[8] = '8';
	base[9] = '9';
	base[10] = 'a';
	base[11] = 'b';
	base[12] = 'c';
	base[13] = 'd';
	base[14] = 'e';
	base[15] = 'f';
}

void	ft_putstr_non_printable(char *str)
{
	int		x;
	char	a;
	char	b;
	char	base[16];

	ft_init_hex_table(base);
	x = -1;
	while (str[++x] != '\0')
	{
		if ((str[x] > 32 && str[x] < 126))
			write(1, &str[x], 1);
		else
		{
			a = base[str[x] / 16];
			b = base[str[x] % 16];
			write(1, "\\", 1);
			write(1, &a, 1);
			write(1, &b, 1);
		}
	}
}
