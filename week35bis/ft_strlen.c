#include <stdio.h>

int	ft_strlen(char *str)
{
    int i;
    i= 0;
    while (str[i])
    {
        i++;
    }
    return(i);
}

int main (void)
{
    printf ("%d\n", ft_strlen ("bonjour"));
    printf ("%d\n", ft_strlen("42"));
    printf ("%d\n", ft_strlen("je vais super bien !"));
    return(0);
}