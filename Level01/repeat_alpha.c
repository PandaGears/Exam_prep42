#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char repeat_alpha(char *str)
{
	int i = 0;
	int j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			{
				j = str[i] - 65;
				while (j >= 0)
				{
					ft_putchar(str[i]);
					j--;
				}
			}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j = str[i] - 97;
			while (j >= 0)
			{
				ft_putchar(str[i]);
					j--;
			}
		}
		else
			ft_putchar(str[i]);
		i += 1;
	}
	return (0);
}
int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	ft_putchar('\n');
	return (0);
}
