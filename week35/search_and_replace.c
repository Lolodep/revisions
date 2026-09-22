#include <unistd.h>
#include <stdio.h>

int ft_strlen (char *str)
{
int x;
x = 0;
while (str[x])
{
    x++;
}
return (x);

}

int main (int argc, char **argv)
{
int i;
i = 0;

if (argc != 4) 
    write (1, "\n", 1);
else if (ft_strlen(argv[2]) != 1)
    write (1, "\n", 1);
else if (ft_strlen(argv[3]) != 1)
    write (1, "\n", 1);
else
{
    while (argv[1][i])
    {
        if (argv[1][i] != argv[2][0])
            write (1, &argv[1][i], 1);
    
        else
        {
            argv[1][i] = argv[3][0];
            write (1, &argv[1][i],1);
        }
    
    i++;
    }
write (1, "\n", 1);
}

return(0);
}