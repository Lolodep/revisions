#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main (void)
{
    int nb1;
    int nb2;

    nb1 = 42;
    nb2 = 21;
    printf("avant %d\n", nb1);
    printf("avant %d\n", nb2);
    ft_swap (&nb1, &nb2);
    printf("apres %d\n", nb1);
    printf("apres %d\n", nb2);
return(0);
}