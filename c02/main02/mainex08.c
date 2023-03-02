#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{

	if (str[x] >= 'A' && str[x] <= 'Z')
	{
		str[x] = str[x] + 32;
		x++;

	}
	}
	return (str);
}

int main ()
{
	char str[] = "COUCOU";
	printf("%s", ft_strlowcase(str));
	return (0);
}
