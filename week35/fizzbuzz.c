#include <unistd.h>

void ft_putchar (char c)
{
    write (1, &c, 1);
}

void ft_putnbr (int nbre)
{
    if (nbre >=10)
     {
        ft_putnbr (nbre / 10);
    }
ft_putchar (nbre % 10 + '0');
}

void fizzbuzz()
{
int nb;
nb = 1;

while (nb<=110)
{
    if (nb%3 == 0 && nb%5 == 0)
    write (1, "fizzbuzz\n", 9);

    else if (nb%3 == 0)
    write (1, "fizz\n", 5);

    else if (nb%5 == 0)
    write (1, "buzz\n", 5);

    else
    {
    ft_putnbr(nb);
    write (1, "\n", 1);
    }
nb++;
}
}
int main(void)
{
    fizzbuzz();
    return(0);
}