#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{

	if (str[x] >= 'a' && str[x] <= 'z')
	{
		str[x] = str[x] - 32;
		x++;
	
	}
	}
	return (str);
}

int main ()
{
	char str[] = "hello";
	printf("%s", ft_strupcase(str));
	return (0);
}
