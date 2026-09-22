#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
int i;
int x;
int result;
int signe;
i = 0;
signe = 1;

while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            {
                x = (str[i] - 48);
                result = result * 10 + x;
            }

        if (str[i] == '-')
            signe = -1;      
    i++;
    }
return(signe * result);
}
int main (void)
{
    printf ("%d\n", ft_atoi ("-142"));
    return(0);
}