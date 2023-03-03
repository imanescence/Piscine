int ft_atoi(const char *str)
{
	int nb;
	int i;

	i = 0;
	nb = 0;
			while (str[i] >= '0' || str[i] <= '9')
				{
					nb = nb * 10;
					nb = nb + (str[i] - '0');
					i++;
				}
return (nb);
}

#include <stdio.h>
int main()
{
	printf("%i", ft_atoi("sdji128666dfjndj"));
}
