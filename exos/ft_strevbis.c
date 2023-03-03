int ft_strlen(char *str)
{
	int i;

	i =0;
	while (str[i] != '\0')
		i++;
	return(i);
}


char	*ft_strrev(char *str)
{
	int i;
	int size;
	int sizetmp;
	int tmp;
	
	i = 0;
	size = ft_strlen(str);
	sizetmp = size;
	while (i < sizetmp / 2)
	{
		tmp = str[i];
		str[i] = str[size -1];
		str[size -1] = tmp;
		i++;
		size--;
	}
	return (str);
}
#include <stdio.h>
int main()
{
	char	str[] = "coucou";
	printf("%s", ft_strrev(str));
}
