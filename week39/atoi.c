#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;
    result = 0;
    i = 0;
    sign = 1;

        
        while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
            i++;
        while (str[i] == '+' || str[i] == '-')
            {
                if (str[i] == '-')
                      sign = -1;
            i++;
            }
        while (str[i] >= '0' && str[i] <= '9')
        {
                result = result * 10 + (str[i] - '0');
        i++;
         }
result = result * sign;
return(result);
}
int main (void)
{
    printf("%d\n",ft_atoi ("  +++-9"));
    return(0);
}