#include <stdlib.h>
#include <stdio.h>

int ft_strlen (char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        i++;
    }
    return(i);
}

char *ft_strdup(char *src)
{
int i;
i = 0;
char *newstr;

newstr = malloc (sizeof(char) * (ft_strlen(src) + 1));
if (newstr == NULL)
    return(0);

while (src[i])
{
    newstr[i] = src[i];
        i++;
}
// on me dit d'ajouter ça avant le return mais je ne vois pas pourquoi  newstr[i] = '\0';
return(newstr);

}

int main (void)
{
    printf("%s\n", ft_strdup ("bonjour"));
    return(0);
}