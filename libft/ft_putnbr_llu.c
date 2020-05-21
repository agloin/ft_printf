#include "libft.h"

void	ft_putnbr_llu(unsigned long long  int llu)
{
    if (llu > 9)
        ft_putnbr_llu(llu / 10);
    ft_putchar(llu % 10 + '0');
}
