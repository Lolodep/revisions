#include <stdio.h>

int	ft_atoi(char *str)
{
    int i;
    int result;
    int sign;

    sign = 1;
    i = 0;
    result = 0;
    while (str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
            i++;

    if ((str[i] == '-') || (str[i] == '+'))
            {
                if (str[i] == '-')
                    sign = -1;
            i++;
            }

    while (str[i] >= '0' && str[i] <= '9')
           {
            result = result * 10 + (str[i] - 48);
            i++;  
           }      

    return((result *sign));
}
int main (void)
{
    printf("%d\n", ft_atoi("   -+234 df"));
    return(0);
}