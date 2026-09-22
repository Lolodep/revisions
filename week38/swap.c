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

char *ft_case_swap(char *str)
{
int i;
i = 0;
char c;
char * modif;

modif = malloc(sizeof(char) * (ft_lengh(str) + 1));
if (modif == NULL)
return(NULL);

while(str[i])
{
    if (str[i] >= 'a' && str[i] <= 'z')
        {
            modif[i] = str[i] - 32;
        }

    else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            modif[i] = str[i] + 32;
        }
    else
        {
           modif[i] = str[i];
        }
i++;
}
modif[i] = '\0';
return (modif);

}
int main(void)
{
    printf("%s\n", ft_case_swap("jE feRAI ça demain MATIn 76fT!:"));
    return(0);
}