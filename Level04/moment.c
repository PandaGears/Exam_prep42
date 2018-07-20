#include <stdio.h>
#include <stdlib.h>

void	ft_strcat(char *str1, char *str, char *str2)
{
	int i = 0;
	int j = 0;
	while(str[i])
	{
		str1[i] = str[i];
		i++;
	}
	while(str2[j])
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = 0;
}

int		intlen(int i)
{
	int c;
	c = 0;
	while (i)
	{
		c++;
		i /= 10;
	}
	return (c);
}

char	*itoa(int i)
{
	long	nbr;
	int		cont;
	char	*str;

	nbr = i;
	cont = intlen(i);
	str = (char*)malloc(sizeof(char) * cont + 1);
	if (i == 0)
	{
		free(str);
		str = (char*)malloc(sizeof(char) * 2);
		str[0] = '0';
		str[1] = 0;
		return (str);
	}
	str[cont - 1] = 0;
	cont--;
	while (nbr)
	{
		str[cont] = (nbr%10+'0');
		cont--;
		nbr = nbr / 10;
	}
	return (str);
}

char    *moment(unsigned int duration)
{
	char *number;
	int i;
	int j;
	char *str;

	j = intlen(duration);
	i = 0;
	if (duration >= 2592000)
	{
		if (duration/2592000 == 1)
		{
			str = (char*)malloc(sizeof(char) * 13);
			str = "1 month ago.\0";
			return(str);
		}
		else
		{
			number = itoa(duration/2592000);
			str = (char*)malloc(sizeof(char) * 13 + intlen(duration));
			ft_strcat(str, number, " months ago.\0");
			i += intlen(duration) - 1;
		}
	}
	else if (duration >= 86400)
	{
		if (duration/86400 == 1)
		{	
			str = (char*)malloc(sizeof(char) * 11);
			str = "1 day ago.\0";
			return(str);
		}
		else
		{
			number = itoa(duration/86400);
			str = (char*)malloc(sizeof(char) * 11 + intlen(duration));
			ft_strcat(str, number, " days ago.\0");
			i += intlen(duration) - 1;

		}
	}
	else if (duration >= 3600)
	{
		if (duration/3600 == 1)
		{
			str = (char*)malloc(sizeof(char) * 12);
			str = "1 hour ago.\0";
			return(str);
		}
		else
		{
			number = itoa(duration/3600);
			str = (char*)malloc(sizeof(char) * 12 + intlen(duration));
			ft_strcat(str, number, " hours ago.\0");
			i += intlen(duration) - 1;

		}
	}
	else if (duration >= 60)
	{
		if (duration/60 == 1)
		{	
			str = (char*)malloc(sizeof(char) * 14);
			str = "1 minute ago.\0";
			return(str);
		}
		else
		{
			number = itoa(duration/60);
			str = (char*)malloc(sizeof(char) * 14 + intlen(duration));
			ft_strcat(str, number, " minutes ago.\0");
			i += intlen(duration) - 1;

		}
	}
	else
	{
		if (duration == 1)
		{	
			str = (char*)malloc(sizeof(char) * 14);
			str = "1 second ago.\0";
			return(str);
		}
		else
		{
			number = itoa(duration);
			str = (char*)malloc(sizeof(char) * 14 + intlen(duration));
			ft_strcat(str, number, " seconds ago.\0");
			i += intlen(duration) - 1;
		}
	}
	return (str);
}

int		main(int ac, char **av)
{
	if(ac > 0 )
	printf("%s", moment(atoi(av[1])));
}
