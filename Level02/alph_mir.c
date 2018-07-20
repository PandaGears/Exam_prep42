#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	char mir;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			mir = argv[1][i];
			if ((argv[1][i] >= 'A') && (argv[1][i] <= 'Z'))
				mir = 'Z' - argv[1][i] + 'A';
			if ((argv[1][i] >= 'a') && (argv[1][i] <= 'z'))
				mir = 'z' - argv[1][i] + 'a';
			write(1, &mir, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
