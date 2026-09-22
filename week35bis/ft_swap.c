#include <stdio.h>
void	ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main (void)
{
    int x;
    int y;
    x = 42;
    y = 21;
    
    printf("avant%d\n",x);
    printf("avant:%d\n",y);
    ft_swap (&x, &y);
    printf("%daprès:\n",x);
    printf("%daprès:\n",y);
    return(0);
}