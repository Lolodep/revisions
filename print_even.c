#include<unistd.h>
#include<stdio.h>

int ft_strlen (char *str)
{
int x;
x = 0;
    while (str[x])
    {
        x++;
    }
return(x);
}

void ft_union(char *s1, char *s2)
{
int i;
i = 0;
int j;
j = 0;
char *s3;
int k;
k = ft_strlen (s1);

while (s1[i])
{
    s3[i] = s1[i];
    //k++;
    write (1, &s1[i], 1);
    i++;
    
}

}

int main (void)
{
//ft_strlen ("abcd");
ft_union("abcd","efga");
//printf("%c\n", '\n');
//printf("%d\n", k);

return(0);
}
