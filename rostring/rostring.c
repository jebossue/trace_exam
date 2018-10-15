#include <unistd.h>
#include <stdio.h>

void	ft_rostring(char *str, int firstword)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (j == 0)
				i = i + firstword;
			else
			{
				while (str[i] && str[i] != ' ' && str[i] != '\t')
				{	
					write(1, &str[i], 1);
					i++;
				}
				write(1, " ", 1);
			}
		}
		if (str[i] == '\0')
			break;
		j++;
		i++;
	}
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (j == 0)
			{
				while (str[i] != ' ' && str[i] != '\t')
				{
					write(1, &str[i], 1);
					i++;
				}
			}
		}
		j++;
		i++;
	}
}

void	ft_word(char *str)
{
	int	i;
	int	j;
	int	firstword;
	int	nbrword;

	i = 0;
	j = 0;
	nbrword = 0;
	firstword = 0;
	while(str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			while (str[i] && str[i] != ' ' && str[i] != '\t')
			{
				if (j == 0)
					firstword++;
				i++;
			}
			j++;
			nbrword++;
		}
		if (str[i] == '\0')
			break;
		i++;
	}
	if (nbrword > 1)
		ft_rostring(str, firstword);
	else
	{
		i = 0;
		while (str[i])
		{
			if (str[i] != ' ' && str[i] != '\t')
			{
				while (str[i] && str[i] != ' ' && str[i] != '\t')
				{
					write(1, &str[i], 1);
					i++;
				}
			}
			if (str[i] == '\0')
				break;
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	if (ac >= 2)
		ft_word(av[1]);
	write(1, "\n", 1);
	return(0);
}
