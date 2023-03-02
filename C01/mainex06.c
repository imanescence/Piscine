#include <stdio.h>

int    ft_strlen(char *str)
{
    int index = 0;
    while (str[index] != '\0')
    {
        index++;
    }
    return(index);
}

int main()
{
  char str[] = "hello";
  ft_strlen(str);
  printf("%d", ft_strlen(str));
  return (0);
}
