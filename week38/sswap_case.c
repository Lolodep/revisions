#include<stdio.h>
#include<unistd.h>

char *ft_swap_case(char *str)
{
int i;
i = 0;

while(str[i])
{
    if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    else
            str[i] = str[i];

i++;
}

i = 0;
return(&str[i]);


}
int main(void)
{
    char string[] = "23";
printf("%s\n",ft_swap_case(string));

    return(0);
}
