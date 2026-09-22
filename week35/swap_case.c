#include <unistd.h>

int main (int argc, char **argv)
{
    int i;
    i = 0;
    char c;
    c = argv[1][i];

    if (argc != 2)
        {
            write (1, "\n", 1);

        }

    else
        {
            while (argv[1][i])
            {
                if ((argv[1][i] >= 65) && (argv[1][i] <= 90))
                {
                    c = (argv[1][i] + 32);
                    write (1, &c, 1);
                }

                else if ((argv[1][i] >= 97) && (argv[1][i] <= 122))
                {
                    c = (argv[1][i] - 32);
                    write (1, &c, 1);
                }
                else
                {
                    write (1, &argv[1][i], 1);
                }
            i++;
            }
        write (1, "\n", 1);
        }
}