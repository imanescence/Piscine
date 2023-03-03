int ft_strlen(char *str)
{
	int size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	return (size);
}

char *ft_rev_print (char *str)
{
	int size;
	int	i;
	int tmp;

	i = 0;
	size = ft_strlen(str);
	while (size > i)
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
	char str[6] = "hello";
	printf("%s", ft_rev_print(str));
	return 0;
}
