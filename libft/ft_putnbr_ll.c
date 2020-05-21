#include "libft.h"

void	ft_putnbr_ll(long long int n)
{
    if (n == (-9223372036854775807 - 1))
        ft_putstr("-9223372036854775808");
    else
    {
        if (n < 0)
        {
            ft_putchar('-');
            n = -n;
        }
        if (n > 9)
            ft_putnbr_ll(n / 10);
        ft_putchar(n % 10 + '0');
    }
}
