int	ft_str_is_alpha(char *str)
{
	int	n;

	n = 0;
	if (str[n] == '\0')
	{
		return (1);
	}
	while (str[n] != '\0')
	{
		if ((str[n] >= 'A' && str [n] <= 'Z')
			|| (str [n] >= 'a' && str [n] <= 'z'))
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
