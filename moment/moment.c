#include <stdio.h>
#include <stdlib.h>

char	*ft_moment(unsigned int duration, int time)
{
	char	*seconds = " seconds ago.";
	char	*minutes = " minutes ago.";
	char	*hours = " hours ago.";
	char	*days = " days ago.";
//	char	*months = " months ago.";
	int		i;
	int		j;
	char	*str = NULL;

	j = 0;
	if (time == 0)
	{
		if (duration == 1)
			str = "1 second ago.";
		else if (duration > 1 && duration < 10)
		{
			i = 1;
			str = malloc(sizeof(*str) * 15);
			str[14] = '\0';
			str[0] = duration + 48;
			while (seconds[j])
			{
				str[i] = seconds[j];
				i++;
				j++;
			}
		}
		else
		{
			i = 2;
			str = malloc(sizeof(*str) * 16);
			str[15] = '\0';
			str[0] = duration / 10 + 48;
			str[1] = duration % 10 + 48;
			while (seconds[j])
			{
				str[i] = seconds[j];
				i++;
				j++;
			}
		}
	}
	if (time == 1)
	{
		if (duration == 1)
			str = "1 minute ago.";
		else if (duration > 1 && duration < 10)
		{
			i = 1;
			str = malloc(sizeof(*str) * 15);
			str[14] = '\0';
			str[0] = duration + 48;
			while (minutes[j])
			{
				str[i] = minutes[j];
				i++;
				j++;
			}
		}
		else
		{
			i = 2;
			str = malloc(sizeof(*str) * 16);
			str[15] = '\0';
			str[0] = duration / 10 + 48;
			str[1] = duration % 10 + 48;
			while (minutes[j])
			{
				str[i] = minutes[j];
				i++;
				j++;
			}
		}
	}
	if (time == 2)
	{
		if (duration == 1)
			str = "1 hour ago.";
		else if (duration > 1 && duration < 10)
		{
			i = 1;
			str = malloc(sizeof(*str) * 13);
			str[12] = '\0';
			str[0] = duration + 48;
			while (hours[j])
			{
				str[i] = hours[j];
				i++;
				j++;
			}
		}
		else
		{
			i = 2;
			str = malloc(sizeof(*str) * 14);
			str[13] = '\0';
			str[0] = duration / 10 + 48;
			str[1] = duration % 10 + 48;
			while (hours[j])
			{
				str[i] = hours[j];
				i++;
				j++;
			}
		}
	}
	if (time == 3)
	{
		if (duration == 1)
			str = "1 day ago.";
		else if (duration > 1 && duration < 10)
		{
			i = 1;
			str = malloc(sizeof(*str) * 12);
			str[11] = '\0';
			str[0] = duration + 48;
			while (days[j])
			{
				str[i] = days[j];
				i++;
				j++;
			}
		}
		else
		{
			i = 2;
			str = malloc(sizeof(*str) * 13);
			str[12] = '\0';
			str[0] = duration / 10 + 48;
			str[1] = duration % 10 + 48;
			while (days[j])
			{
				str[i] = days[j];
				i++;
				j++;
			}
		}
	}
	return (str);
}

char	*moment(unsigned int duration)
{
	char	*str = NULL;
	int		i;

	i = 0;
	if (duration == 0)
		str = "0 seconds ago.";
	else
	{
		while (!(duration > 0 && duration < 60))
		{
			if (duration >= 60 && duration < 3600)
				duration = duration / 60;
			if (duration >= 3600 && duration < 86400)
				duration = duration / 60;
			if (duration >= 86400 && duration < 2592000)
				duration = duration / 24;
			if (duration >= 2592000)
				duration = duration / 30;
		printf("%d\n", duration);
			i++;
		}
		str = ft_moment(duration, i);
	}
	return (str);
}

int main(void)
{
	unsigned int nbr;

	nbr = 2000000;
	printf("%s\n", moment(nbr));
	return (0);
}
