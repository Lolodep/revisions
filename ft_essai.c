#include <unistd.h>
#include <stdio.h>

int ft_countmot(char *string)
{
    int i;
    i = 0;
    int j;
    j = 0;
    while(string[i])
    {
       if ((string[i] == ' ' || string[i] == '\n' || string[i] == '\t')
       && (string[i+1] !=' '|| string[i+1] != '\n' || string[i+1] != '\t'))
      {  
       j++;
      }
    i++;
    }
    printf("%d\n", j);
return(j+1);

    }


int main(void)
{
    ft_countmot("je veux\n\n bien");
    // printf("%s\n", "je veux\t y arriver\naussi, na oui!");
    
  return(0);
}