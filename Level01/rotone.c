#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	char letter;

	i = 0;
	if (argc == 2)
	{
		letter = argv[1][i];
		while(argv[1][i])
		{
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'Y')
					|| (argv[1][i] >= 'a' && argv[1][i] <= 'y'))
				letter = argv[1][i] + 1;
			else if (argv[1][i] == 'Z' || argv[1][i] == 'z')
				letter = argv[1][i] - 25;
			write (1, &letter, 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
