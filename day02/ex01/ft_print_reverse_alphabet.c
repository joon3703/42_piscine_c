#include <unistd.h>

void    ft_putchar(char c);

void    ft_print_reverse_alphabet(void)
{
    char alpha;

    alpha = 'z';
    while (alpha >= 'a')
        ft_print_reverse_alphabet();
}