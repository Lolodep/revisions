#include<stdio.h>
#include<unistd.h>

char	*ft_strlowcase(char *str)
{
int i;
i = 0;

while(str[i])
{
    if(str[i] >= 'A' && str[i] <= 'Z')
        str[i] =  str[i] + 32;
    
i++;
}
i = 0;
return(str);
}
int main(void)
{
    char string[] = "jE vais BBIen45";
    printf("%s\n", ft_strlowcase(string));
    return(0);
}
