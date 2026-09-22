#include<unistd.h>
#include<stdio.h>

void ft_putnbr(long int nb)
{
       if (nb >= 10)
            ft_putnbr(nb / 10);
    nb = nb % 10 + '0';
    write (1, &nb, 1);

}
void put_nbr(int nb)
{
    long int i;
    i = nb;
    
        if (i < 0)
    {
        i = (i * -1);
        write (1, "-", 1);
        ft_putnbr(i);
    }

    else
        {
            ft_putnbr(i);
        }

}

int main(void)
{

put_nbr(0);
//printf("\n");
write (1, "\n", 1);
put_nbr(26);
write (1, "\n", 1);
put_nbr(-2147483648);
write (1, "\n", 1);
put_nbr(-3);
write (1, "\n", 1);
    return(0);
}

