#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_combn(int n)
{
    int i;

    i = 0;
    while (i < 100)
    {
        ft_putchar(i / 10 + '0');
        ft_putchar(i % 10 + '0');
        i++;
    }
}

int     main()
{
    ft_print_combn(2);
}