
#include <stdlib.h>

int		ft_iswhitespace(char const c)
{
    if (c == ' ' || c == '\n' || c == '\t' || c == '\v'
        || c == '\r' || c == '\f')
        return (1);
    return (0);
}

int     base(char c, int base)
{
    char    *str1;
    char    *str2;
    int     i;

    str1 = "0123456789abcdef";
    str2 = "0123456789ABCDEF";
    i = 0;
    while (i < base)
    {
        if (c == str1[i] || c == str2[i])
            return(i);
        i++;
    }
    return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
    int nb;
    int i;

    i = 0;
    nb = 0;
    while (ft_iswhitespace(str[i]))
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            negatif = 1;
        i++;
    }
    while (base(str[i], str_base))
    {
        nb = nb * str_base;
        nb = nb + base(str[i], str_base);
        i++;
    }
    if (negtif)
        return(-nb);
    return (nb);
}
