#include <unistd.h>
/*void    ft_putchar(char c)
{
    write (1, &c, 1);
}
*/
void ft_putchar(char c);
void ft_rush (int x, int y)
{
int vert;
int hor;
vert = 0;
hor = 0;
while(vert < y)
{
    while (vert == 0 && hor < x)
    {
        if ((hor == 0) || (hor == x - 1))
            ft_putchar('o');
        else 
            ft_putchar('-');
    hor++;
    }
    ft_putchar('\n');
    vert++;
    hor = 0;

    while ((vert != 0) && (vert < y - 1))
    {
        while (hor < x)
        {
            if ((hor == 0) || (hor == x - 1))
                ft_putchar('|');
            else 
                ft_putchar(' ');
        hor++;
        }
    vert++;
    hor = 0;
    ft_putchar('\n');
    }
    //vert++;
    hor = 0;
    while ((vert == y - 1) && (hor < x))
    {
        if ((hor == 0) || (hor == x - 1))
            ft_putchar('o');
        else 
            ft_putchar('-');
    hor++;
    }

}
}
/*int main ()
{
    ft_rush(4, 6);
    return(0);
}
    */