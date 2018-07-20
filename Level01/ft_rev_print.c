#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}
int		main(int argc, char  **argv)
{
	int i;
	i = 0;
	
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			i++;
		}
			i -= 1;
			while (i >= 1)
		{
			ft_putchar(argv[1][i]);
			i--;
		}
	}
	ft_putchar('\n');
	return(0);
}
