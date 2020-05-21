#include "libft.h"

void	ft_putnbr_lu(unsigned long int lu)
{
    if (lu > 9)
        ft_putnbr_lu(lu / 10);
    ft_putchar(lu % 10 + '0');
}
