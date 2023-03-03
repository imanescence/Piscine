#include <unistd.h>
int ft_atoi(const char *str)
{
	int nb;
	int i;

	i = 0;
	nb = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			nb = nb * 10;
			nb = nb + (str[i] - '0');
			i++;
		}
	i++;
	}
return (nb);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_atoi("2563556"));
}
