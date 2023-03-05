int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	if (str[n] == '\0')
	{
		return (1);
	}
	while (str[n] != '\0')
	{
		if (str[n] >= 48 && str [n] <= 57)
		{
			n++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
