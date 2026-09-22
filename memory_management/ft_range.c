#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{

int *array;
int size;
int i;
size = max - min;

if (size <= 0)
    return(NULL);

array = malloc (sizeof (int) * size);
if (array == NULL)
    return(0);
i = 0;
while (i < size)
{
       array[i] = min + i;
       i++;
}

return (array);

}
int main(void)
{
    int nb1;
    int nb2;
    int *result;
    int i;

    nb1 = 20;
    nb2 = 26;

    result = ft_range(nb1, nb2);

    i = 0;
    while (i < nb2 - nb1)
    {
        printf("%d\n", result[i]);
        i++;
    }
    return(0);
}