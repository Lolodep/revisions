#include <unistd.h>

void swap_case (char *str)
{
int i;
i = 0;
char c;

while (str[i])
{
    if (str[i] >= 'a' && str[i] <= 'z')
        {
            c = str[i] - 32;
            write (1, &c, 1);
        }
    else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            c = str[i] + 32;
            write (1, &c, 1);
        }
    else 
        write (1, &str[i], 1);
i++;
}
}
int main (void)
{
    swap_case("jE VAis BiEn");
return(0);
}