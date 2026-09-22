#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int *ft_range(int min, int max)
{
int i;
i = 0;
int j;
j = 0;
int taille;
taille = max - min;
int *array;

    if(min >= max)
        return(NULL);

array = malloc (sizeof(int) * taille);
if(array == NULL)
    return(NULL);

    j = min;
while(i < taille)
{
    array[i] = j;
    i++;
    j++;
}
i = 0;
return(&array[i]);

}

int main(void)
{
    int *nb;
    int i;
    i = 0;
  nb = ft_range(3,10);
  while(i < (10-3))
    {
        printf("%d\n",nb[i]);
i++;
        }
        free (nb);
            return(0);
}