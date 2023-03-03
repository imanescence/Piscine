int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *reversestr(char *str)
{
	int i;
	int size;
	char tmp;

	i = 0;
	size = ft_strlen(str);
	while (i < size)
	{
		tmp = str[i];
		str[i] = str[size - 1];
		str[size - 1] = tmp;
		i++;
		size--;
	}
	return (str);
}
#include <stdio.h>
int main()
{
	char str[] = "hello";
	printf("%s", reversestr(str));
}
		
