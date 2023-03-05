#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 1)
	{
		result = result * nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
	else if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else
		return (0);
}
