#include "libft.h"

void    ft_atoi_base16llx(unsigned long long int num)
{
    unsigned long long int tmp;
    char temp[100];
    char *base16;
    char res[100];
    int i;
    int j;

    base16 = "0123456789abcdef";
    i = 0;
    while (num != 0)
    {
        tmp = num % 16;
        temp[i] = base16[tmp];
        i++;
        num = num / 16;
    }
    temp[i] = '\0';
    i--;
    j = 0;
    while (i >= 0)
    {
        res[j] = temp[i];
        i--;
        j++;
    }
    res[j] = '\0';
    ft_putstr(res);
}
