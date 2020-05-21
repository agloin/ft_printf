#include "libft.h"

void	ft_putnbr_u(unsigned int u)
{
    if (u > 9)
        ft_putnbr_u(u / 10);
    ft_putchar(u % 10 + '0');
}
