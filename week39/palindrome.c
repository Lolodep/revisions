#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int ft_strlen(char* str)
{
int i;
i = 0;
while (str[i])
    i++;
return(i);
}
int	palindrome(char *s)
{

    int i;
    int size;
    i = 0;
    size = ft_strlen(s) - 1;

    while (i < size)
        {
            if(s[i] != s[size])
                {
                    write (1, "0\n", 2);
                    return(0);
                }
            i++;
            size--;
        }

    write (1, "1\n", 2);
    return(1);
}

int main (void)
{
    char string[] = {"aaabccbaaa"};
    printf("%d",palindrome(string));
    return(0);
}