#include <unistd.h>

int	ft_atoi(char *str)
{
	int	nbr;
	int	i;

	i = 0;
	nbr = 0;
	while (str[i])
	{
		nbr = nbr * 10 + str[i] - 48;
		i++;
	}
	return (nbr);
}

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		c = nbr % 10 + 48;
		write(1, &c, 1);
	}
	else
	{
		c = nbr + 48;
		write(1, &c, 1);
	}
}

int	ft_prime(int nbr)
{
	int	i;

	i = 2;
	while (i != nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_add(int nbr)
{
	int	i;
	int	sum;

	i = 2;
	sum = 0;
	while (i != nbr + 1)
	{
		if (ft_prime(i))
		{
			sum = sum + i;
		}
		i++;
	}
	ft_putnbr(sum);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (av[1][0] != '-')
			ft_add(ft_atoi(av[1]));
	}
	write(1, "\n", 1);
	return (0);
}
