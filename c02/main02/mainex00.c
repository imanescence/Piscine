#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int main()
{
	char dest[] = "hello";
	char src[] = "salut";
	printf("%s",ft_strcpy(dest, src));
	return 0;
}	
