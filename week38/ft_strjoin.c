#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *string)
{
    int i;

    i = 0;
    while (string[i])
    {
        i++;
    }
    return (i);
}

int ft_totalsize (int size, char **string)
{
    int totalsize;
    // i = mot
    int i;

    totalsize = 0;
    i = 0;
    while (i < size)
    {
        totalsize = totalsize + ft_strlen(string[i]);
        i++;
    }
return (totalsize);
}
    
char *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    char *result;
    int taille;
    // j = pour avancer dans le mot
    int j;
    int k;
    i = 0;
    j= 0;
    k = 0;

    if (size == 0)
    {
        result = malloc (sizeof(char));
        if (result == NULL)
            {
                return (NULL);
            result[0] = '\0';
            return (result); 
            }           
    }
    else
    taille = ft_totalsize(size, strs) + ((size - 1) * ft_strlen (sep));
  
    result = malloc(sizeof(char) * (taille + 1));
    if (result == NULL)
        return (NULL);

    while (i < size)
    {
        while (strs[i][j])
        {
            result[k] = strs[i][j];
        j++;
        k++;
        }
        if (i < size - 1)
        {
            j = 0;
            while (sep[j])
            {
                result[k] = sep[j];
            j++;
            k++;
            }
        }
    j = 0;
    i++;
    }

    result[k] = '\0';
    return (result);
}

int main(void)
{
    char *strs[] = {"je", "vais", "bien"};
    char *result;

    result = ft_strjoin(3, strs, "-*-");

    printf("%s\n", result);

    free(result);

    return (0);
}