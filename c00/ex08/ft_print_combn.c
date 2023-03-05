#include <unistd.h>

void	ft_putchar(char a)
{
	if (a != '8')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int	a;
	int	b;

	if (n == 2)
	{
		a = '0';
		while (a <= '8')
		{
			b = a + 1;
			while (b <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				ft_putchar(a);
				b++;
			}
			a++;
		}
	}
}
