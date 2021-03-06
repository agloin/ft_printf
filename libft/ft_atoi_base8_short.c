#include "libft.h"

void    ft_atoi_base8_short(unsigned short int num)
{
    unsigned short int res;
    int i;
    int j;
    char tmp[100];
    char str[100];

    i = 0;
    while (num != 0)
    {
        res = num % 8;
        tmp[i] = res + '0';
        num = num / 8;
        i++;
    }
    tmp[i] = '\0';
    j = 0;
    i--;
    while (i >= 0)
    {
        str[j] = tmp[i];
        i--;
        j++;
    }
    str[j] = '\0';
    ft_putstr(str);
}
