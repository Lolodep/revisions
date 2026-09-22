#include<unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_taille (int min, int max)
{
    int taille;
    taille = max - min;
    return(taille);
}


int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    i = 0;
    int taille;

    if(min >= max)
    {
            return(0);
    }

    else if (min < max)
    {
        *range = malloc(sizeof(int) * ft_taille(min,max));
        if (*range == NULL)
            return(-1);


        else
        {
        while (max - min > 0)
        {  
            (*range)[i] = min;
            i++;    
            min =min +1;
        }
    
    return(i);

    }
    
}
}
int main(void)
{

    int *str;
    
    int i;
    i = 0;
    //printf("%d\n", ft_taille(20,15));
    printf("%d\n",ft_ultimate_range(&str, 20, 10));
   
    return(0);
}