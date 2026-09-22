#include<stdio.h>
#include<stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    i = 0;
    int taille;
    taille = max - min;

    if (min >= max)
        {
            *range = NULL;
            return(0);
        }

    *range = malloc (sizeof(int) * taille);
    if(*range == NULL)
        return(-1);
i = taille - 1;
        while(i >= 0)
        {
            (*range)[i] = max - 1;
            i--;
            max--;
        }
return(taille);
}
int main(void)
{

int min;
int max;
int *range;
min = 3;
max = 8;
int i;
i = 0;

        ft_ultimate_range(&range, min, max);
        while(i < max - min)
        {
            printf("%d\n", range[i]);
            i++;
        }
    return(0);
}