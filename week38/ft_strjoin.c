#include <stdio.h>
#include <stdlib.h>

int ft_strlengh(char *string)
{
    int i;

    i = 0;
    while (string[i])
    {
        i++;
    }
    return (i);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    int j;
    //size1 c'est la taille de chaque mot (donc la taille de *strs)
    int size1;
     //size1 c'est la taille de chaque separateur (donc la taille de *sep)
    int size2;
    char *result;
    int taillem;
    int tailles;
    int taille;

    i = 0;
    j = 0;
    size1 = size;
    size2 = size - 1;
    taillem = 0;
    tailles = 0;

    while (size1 > 0)
    {
        taillem = taillem + ft_strlengh(strs[size1 - 1]);
        size1--;
    }

    while (size2 > 0)
    {
        tailles = tailles + ft_strlengh(sep);
        size2--;
    }

    taille = taillem + tailles;

    result = malloc(sizeof(char) * (taille + 1));
    if (result == NULL)
        return (NULL);

    i = 0;
    j = 0;

    while (i < size)
    {
        size1 = 0;
        while (strs[i][size1])
        {
            result[j] = strs[i][size1];
            j++;
            size1++;
        }

        if (i < size - 1)
        {
            size1 = 0;
            while (sep[size1])
            {
                result[j] = sep[size1];
                j++;
                size1++;
            }
        }
        i++;
    }

    result[j] = '\0';
    return (result);
}

int main(void)
{
    char *strs[] = {"bonjour", "toi"};
    char *result;

    result = ft_strjoin(2, strs, " ");

    printf("%s\n", result);

    free(result);

    return (0);
}