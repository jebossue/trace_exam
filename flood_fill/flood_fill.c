#include "t_point.h"

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	c;
	int	x;
	int	y;

	x = begin.x;
	y = begin.y;
	c = tab[x][y];
	while (tab[x][y] == c)
	{
		while (tab[x][y] == c)
		{
			tab[x][y] = 'F';
			x++;
		}
		y++;
		x = begin.x;
	}
}
