#include<stdio.h>
#include<unistd.h>

int ft_alphanum (char c)
{
if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')))
return(1);
else
return(0);
}

int main (int argc, char **argv)
{
int i;
i = 0;
char c;

if (argc != 2)
    {write (1, "\n", 1);
return(1);
    }

while (argv[1][i])
{
    if (argv[1][i] >= ('A') && argv[1][i] <= 'Z') 
        argv[1][i] =  argv[1][i] + 32;
    else
        argv[1][i] =  argv[1][i];
i++;
}

i = 0;
if (argv[1][0] >= ('a') && argv[1][0] <= 'z')
    {
        argv[1][0] = argv[1][0] -32;
        write (1, &argv[1][0], 1);
    }
i = 1;
while (argv[1][i])
{
        if ((argv[1][i] >= ('a') && argv[1][i] <= 'z') && (ft_alphanum (argv[1][i-1]) == 1))
        {
            c =  argv[1][i] - 32;
        write (1, &c, 1);
        } 

        else if (ft_alphanum (argv[1][i]) == 1)

        write (1, &argv[1][i], 1);
i++;
}

write (1, "\n", 1);
return(0);
}
