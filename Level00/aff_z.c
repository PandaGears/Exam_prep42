#include <unistd.h>
/*
  The exam question itself is fracked to print z + \n no matter what
  So a route for that would simply be "write(1, "z\n", 2)" without even specifying the main requiring arguments
*/
int		main(int argc, char *argv[])
{
	int i;
	i = 0;

	if (argc != 2)
	write(1, "z", 1);
	else
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'z')
			{
				write(1, "z", 1);
				break;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
