#include <unistd.h>

int space_find(int i) /* this function locates any form of spaces in a parameter*/
{
	if (i == ' ' || i == '\n' || i == '\v' || i == '\f' || i == '\t') /*the forms of spaces to look out for*/
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = 0;
		while (space_find(argv[1][i])) /*any spaces found in the first argument will be found...*/
		i++;		/*... And will be ignored*/
		while (!(space_find(argv[1][i])) && argv[1][i] != '\0') /*any item in the first agument that is not a space, and is not yet NULL...*/
		{
			write(1, &argv[1][i], 1); /*will be printed*/
			i++;					/*and will be incremented*/
		}
	}
	write(1, "\n", 1);			/*add a newline*/
	return (0);					/*and finish!*/
}
