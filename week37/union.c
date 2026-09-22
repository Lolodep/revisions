#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
        while (str[i])
        {
            i++;
        }
return(i);
}

int main (int argc, char **argv)
{
int i;
i = 0;

int j;
j = 0;

char *unistr;

if (argc != 3)
    {
        write (1, "\n", 1);
        return(1);
    }

else
{
    unistr = malloc(sizeof(char) * (ft_strlen(argv[1]) + ft_strlen(argv[2]) + 1 ));
    if (unistr == NULL)
        return(0);

    while (argv[1][i])
    { 
        unistr[i] = argv[1][i];
        i++;
    }
i = ft_strlen(argv[1]);
    while (argv[2][j])
    { 
        unistr[i] = argv[2][j];
        i++;
        j++;
    }
    i = 0;
    j = 0;
    while (unistr[i])
        {
            if (unistr[i] == unistr [i - j])
                return(1);
            else if (unistr[i] != unistr [i - j])
                write (1, &unistr[i], 1);
        j++;
        }

    write (1, "\n", 1);
}
return(0);
}