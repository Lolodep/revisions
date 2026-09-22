#include<unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_lengh (char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        i++;
    }
    return(i);
}

char *ft_strcpy(char *s1, char *s2)
{
    int i;
    i = 0;

    while (s2[i])
    {
        s1[i] = s2[i];
    i++;
    }
    s1[i] = '\0';
    return(s1);
}


int main(void)
{
    char s1[30];
    printf("%s\n", ft_strcpy(s1,"bonjour"));
    return(0);
}