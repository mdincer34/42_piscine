#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char			*hex;
	unsigned char	str_value;

	hex = "0123456789abcdef";
	while (*str != '\0')
	{
		str_value = (unsigned char)*str;
		if (str_value < 32 || str_value > 126)
		{
			ft_putchar('\\');
			ft_putchar(hex[str_value / 16]);
			ft_putchar(hex[str_value % 16]);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
