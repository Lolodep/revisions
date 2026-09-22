#include <unistd.h>
#include <stdio.h>
void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

int main(void)
{
int x;
int y;
x = 5;
y = 12;

    printf("avant:%d,", x);
    printf("%d\n", y);
    ft_swap(&x, &y);
    printf("apres:%d\n", x);
    printf("apres:%d\n", y);
return(0);
}