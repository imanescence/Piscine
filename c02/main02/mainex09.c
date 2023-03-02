#include <stdio.h>

void	ft_supercase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
}

char	*ft_strcapitalize(char *str)
{
	ft_supercase(str);
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= ' ' && str[i] <= '/')
		|| (str[i] >= ':' && str[i] <= '@')
		|| (str[i] >= '[' && str[i] <= '`')
		|| (str[i] >= '{' && str[i] <= '~'))
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			i--;
		}
		i++;
	}
	return(str);
}

			
int main()
	{
	char str[] = "coucou tOut le monde 2main on+recommence !?ouiii\0";
	printf("%s", ft_strcapitalize(str));
	return (0);
	}
