#include <stdlib.h>

int	ft_base(int value, int base)
{
	int	ln;

	ln = 0;
	if (value == 0)
		ln = 1;
	while (value != 0)
	{
		value = value / base;
		++ln;
	}
	return (ln);
}

char	*ft_itoa_base(int value, int base)
{
	char *abc = "0123456789ABCDEF";
	char	*result;
	int	i;
	int	min;

	min = 0;
	i = ft_base(value, base);
	if (base == 10 && value < 0)
	{
		i++;
		min = 1;
	}
	if ((result = malloc(sizeof(char) * i + 1)) == NULL)
		return (NULL);
	result[i] = '\0';
	i--;
	while (i >= min)
	{
		result[i] = abc[value % base];
		value = value / base;
		i--;
	}
	if (base == 10 && value < 0)
		result[0] = '-';
	return (result);
}
