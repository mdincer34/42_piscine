int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	else
	{
		while (i < power)
		{
			result = nb * ft_recursive_power(nb, power - 1);
			i++;
		}
	}
	return (result);
}
