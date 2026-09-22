#include <unistd.h>

void ft_putnbr (int nb)
{
    char c;
    if (nb >= 10)
        ft_putnbr (nb / 10);
    c = nb % 10 + '0';
    write (1, &c, 1);
}

void ft_buzzfizz ()
{
    int nb;
    nb = 1;

    while (nb <=100)
    {
    if (nb % 3 == 0 && nb % 5 == 0)
        write (1, "buzzfizz\n", 9);
    else if (nb % 3 == 0)
        write (1, "buzz\n", 5);
    else if (nb % 5 == 0)
        write (1, "fizz\n", 5);
    else
    {
        ft_putnbr (nb);
        write (1, "\n", 1);
    }
    nb++;
}
}

int main (void)
{
    ft_buzzfizz ();
    return(0);
}