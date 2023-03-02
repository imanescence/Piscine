#include <unistd.h>

void    ft_putstr(char *str)
{   
    int index = 0;
    while (str[index] != '\0')
    {
        write(1, &str[index], 1);
        index++;
    }
}

int main()
{
  char str[5] = {'H', 'e', 'l', 'l', 'o'};
  ft_putstr(str);
}
