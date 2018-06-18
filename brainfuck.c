#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_brain(char *str)
{
	char	*tab;
	int	i;
	int	j;

	if ((tab = (char *)malloc(sizeof(*tab) * 2048)) == NULL)
		return (0);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '>')
			j++;
		if (str[i] == '<')
			j--;
		if (str[i] == '+')
			tab[j] = tab[j] + 1;
		if (str[i] == '-')
			tab[j] = tab[j] - 1;
		if (str[i] == '[' && tab[j] == '0')
		{
			while (str[i] != ']')
				i++;
		}
		if (str[i] == ']' && tab[j] != '0')
		{
			while (str[i] != '[')
				i--;
		}
		printf("  ");
		if (str[i] == '.')
			write(1, &tab[j], 1);
		printf("tab[j] : %d  j : %d\n", tab[j], j);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_brain(av[1]);
	write(1, "\n", 1);
	return (0);
}
