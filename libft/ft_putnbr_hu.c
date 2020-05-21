#include "libft.h"

void	ft_putnbr_hu(unsigned short int n)
{
    if (n > 9)
        ft_putnbr_hu(n / 10);
    ft_putchar(n % 10 + '0');
}
