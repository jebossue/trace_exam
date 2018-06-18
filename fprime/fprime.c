#include <stdio.h>
#include <stdlib.h>

void	ft_fprime(int nbr)
{
	int	i;

	i = 2;
	if (nbr == 1)
	{
		printf("1");
		return;
	}
	while (nbr > 1)
	{
		if (nbr % i == 0)
		{
			printf("%d", i);
			nbr = nbr / i;
			if (nbr > 1)
				printf("*");
			i--;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (av[1][0] == '0')
			printf("0");
		ft_fprime(atoi(av[1]));
	}
	printf("\n");
	return (0);
}
