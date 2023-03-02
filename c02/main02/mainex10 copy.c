#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (size < i && dest[size] != '\0')	
	{
		src[i] = dest[size];
		i++;
		size++;
	}
	return (size);
}

int main()
{
	char dest[] = "hello";
	char src[] = "salut toi";
	unsigned int size = 5;
	printf("%d",ft_strlcpy(dest, src, size));
	return 0;
}
