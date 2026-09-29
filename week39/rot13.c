#include <stdlib.h>
#include <stdio.h>

char * rot_13 (char *str)
{
int i;
i = 0;

while (str[i])
{
    if (str[i] >= 'a' && str[i] <= 'm')
        str[i] = str[i] + 13;
    else if (str[i] > 'm' && str[i] <= 'z')
        str[i] = str[i] -  13;
    else if (str[i] >= 'A' && str[i] <= 'M')
        str[i] = str[i] + 13;
    else if (str[i] > 'M' && str[i] <= 'Z')
        str[i] = str[i] - 13;
i++;
}
    
    return (str);
}
int main (void)
{
    char string[] = {"abcxyz"};
    printf("%s\n",rot_13(string));
    return(0);
}