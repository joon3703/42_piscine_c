#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb2(void)
{
    char a;
    char b;

    a = 0;
    b = 0;
    while (a < 100)
    {
        b = a + 1;
        while (b < 100)
        {
            ft_putchar(a / 10 + '0');
            ft_putchar(a % 10 + '0');
            ft_putchar(' ');
            ft_putchar(b / 10 + '0');
            ft_putchar(b % 10 + '0');
            if ((a / 10 != 9) || (a % 10 != 8))
            {    
                ft_putchar(',');
                ft_putchar(' ');
            }
            b++;
        }
        a++;
    }
    ft_putchar('\n');
}

 int        main(void)
 {
     ft_print_comb2();
 }