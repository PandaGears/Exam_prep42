#include <unistd.h>

int	spacefind(int i)
{
	if(i == ' ' || i == '\t' || i == '\v' || i == '\f' || i == '\n')
		return (1);
	return (0);
}

int	first_word(int argc, char ** argv)
{
	int i;
	if (argc == 2)
	{
		i = 0;
		if (spacefind((argv[1][i])))
			i++;
		while (!(spacefind(argv[1][i])) && argv[1][i])
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
