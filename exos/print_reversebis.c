#include <unistd.h>
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char reverse_print(char *str)
{
	int size;

	size = ft_strlen(str);
	while (size >= 0)
	{
		write(1, &str[size - 1], 1);
			size--;
	}
	return (*str);
}

int main()
{
char	 str[] = "coca";
	reverse_print(str);
}

