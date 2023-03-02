#include <string.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int main()
{
	char dest[] = "hello";
	char src[] = "salut toi";
	unsigned int n = 5;
	printf("%s",ft_strncpy(dest, src, n));
	return 0;
}
