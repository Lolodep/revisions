#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen (char *str)
{
    int i;
    i = 0;
    while(str[i])
        {
            i++;
        }
return(i);
}

void ft_affiche (char *st)
{
    int i;
    i = 0;

    int j;
    j = 0;

    while (st[i])
        {
            while (j < i)
            {
                
            
            j++;  
                         
            }
        
        if (st[i] != st[j])  
        write (1, &st[i], 1);
        j = 0;
        i++;
        }
}

int main(void)
{
    ft_affiche ("bonjour");
    return(0);
}