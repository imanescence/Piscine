#include <stdio.h>

void    ft_ultimate_div_mod(int *a, int *b)
{
    int mod = 0;
    mod = *a;
    *a = *a / *b;
    *b = mod % *b;
}

int main() {
    int *a = 10;
    int *b = 21;
    
    ft_ultimate_div_mod(&a, &b);
    printf("La valeur du pointeur est de : %d", a);
    printf("La valeur du pointeur est de : %d", b);

  return 0;
}


