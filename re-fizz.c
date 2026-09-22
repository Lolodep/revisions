#include <unistd.h>

void ft_putnbr (int nb)
{
   if (nb >= 10)
   {
   ft_putnbr (nb / 10);
   }
    nb = nb % 10 + '0';
    write (1, &nb, 1);
}

void ft_fizzbuzz ()
{
    int nbr;
    nbr = 1;
while (nbr <= 100)
{
    if (nbr % 3 == 0 && nbr % 5 == 0)
    {
        write (1, "fizzbuzz\n", 9);  
    }
    else if (nbr % 3 == 0)
    {
        write (1, "fizz\n", 5); 
    }
    else if (nbr % 5 == 0)
    {
        write (1, "buzz\n", 5);   
    }
    else
    {
        ft_putnbr(nbr);
        write (1, "\n", 1);
    }
nbr++;
}
}
int main (void)
{
    //ft_putnbr (145);
    ft_fizzbuzz();
    return(0);
}