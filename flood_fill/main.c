#include "flood_fill.c"
#include "t_point.h"


int	main(void)
{
	char **area;
	t_point size = { 8, 5 };
	t_point begin = { 2, 2 };
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001"
	};

	flood_fill(area, size, begin);
	return (0);
}
