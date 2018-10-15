void	flood_fill(char **tab, t_point size, t_point begin)
{
	int	f_x;
	int	f_y;
	char	c;

	f_x = begin.x;
	f_y = begin.y;
	c = tab[f_x][f_y];
	while (tab[f_x][f_y] == c && f_y <= size.y)
	{
		while (tab[f_x][f_y] == c && f_x <= size.x)
		{
			tab[f_x][f_y] = 'F';
			f_x++;
		}
		f_y++;
		f_x = begin.x;
	}
}
