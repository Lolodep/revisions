#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_strlen(char*str)
{
int i;
i = 0;

while (str[i])
    i++;
return(i);
}

char	*ft_strdup(char *src)
{
int i;
i = 0;
char* desti

desti = malloc (sizeof(char) * (ft_strlen (src) + 1));
if(!desti)
    return(NULL);

While (src[i])
{
    desti[i] = src[i];
    i++;
}
desti[i] = '/0';
return (&desti);

}

int main (void)
{



    return (0);
}
