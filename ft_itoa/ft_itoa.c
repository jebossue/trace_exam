#include <stdlib.h>
#include <stdio.h>

void	ft_doit(char **tab, int isneg, int size, int nbr)
{
	if (isneg)
	{
		(*tab)[0] = '-';
		nbr = -nbr;
		size--;
	}
	while (nbr > 0)
	{
		(*tab)[size] = nbr % 10 + 48;
		nbr = nbr / 10;
		size--;
	}
}

char	*ft_itoa(int nbr)
{
	char	*tab;
	int		tmp;
	int		i;
	int		isneg;

	tmp = nbr;
	i = 1;
	while (!(tmp >= 0 && tmp < 10))
	{
		tmp = tmp / 10;
		i++;
	}
	if (nbr < 0)
	{
		isneg = 1;
		i++;
	}
	else
		isneg = 0;
	if (nbr == 0)
		i++;
	if ((tab = malloc(sizeof(*tab) * i)) == NULL)
		return (NULL);
	if (nbr == 0)
	{
		tab[0] = '0';
		tab[1] = '\0';
	}
	else
	{
		tab[i] = '\0';
		i--;
		ft_doit(&tab, isneg, i, nbr);
	}
	return (tab);
}

int	main(void)
{
	printf("%s\n", ft_itoa(-12));
	return (0);
}
