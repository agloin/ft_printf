#include "libft.h"

void	ft_putnbr_h(short int n)
{
    if (n == -32768)
        ft_putstr("-32768");
    else
    {
        if (n < 0)
        {
            ft_putchar('-');
            n = -n;
        }
        if (n > 9)
            ft_putnbr_h(n / 10);
        ft_putchar(n % 10 + '0');
    }
}
