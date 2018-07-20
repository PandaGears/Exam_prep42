#include <unistd.h>

char	putstr(*str)
{
	while (*str)
	write(1, str, 1);
}
