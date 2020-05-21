//#include "../includes/ft_printf.h"

# include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include "../libft/libft.h"
#include "ft_printf.h"

//----------------------FT_PRINTF------------------

int     ft_printf(const char *format, ...)
{
    int             d;                      //int
    int             i;                      //int
    short int       h;                      //SHORT_INT
    long int        l;                      //LONG_INT
    long long int   ll;
    va_list         factor;
    const char      *str;
    char            *s;                     //char *
    char            c;                      // char
    unsigned int    o;                      //octal
    unsigned long int       lo;                   //long_octal
    unsigned long long int  llo;             //long_long_octal
    unsigned int            u;                      //unsigned int
    unsigned short int      ho;                  //SHORT_OCTAL_INT

    i = 0;
    va_start(factor, format);
    str = format;
    while (str[i])
    {
        if (str[i] != '%')
            write(1, &str[i], 1);
        else if ((str[i] == '%' && str[i + 1] == 'd') ||
                            (str[i] == '%' && str[i + 1] == 'i'))            // INTAGER---- %d-----%i
        {
            i++;
            d = va_arg(factor, int); // num
            ft_putnbr(d);
        }
        else if ((str[i] == '%' && str[i + 1] == 'h' && str[i + 2] == 'h'
        && str[i + 3] == 'd') ||
        (str[i] == '%' && str[i + 1] == 'h'
        && str[i + 2] == 'h' && str[i + 3] == 'i'))                         // INTAGER---- %hhd-----%hhi
        {
            i += 3;
            d = (char)va_arg(factor, int);
            ft_putnbr(d);
        }
            /*       else if (str[i] == '%' && str[i + 1] == 'f')           //FLOATS-----------------
                   {
                       i++;
                       d = va_arg(factor, double);
                       ft_putnbr(d);
                   }*/
        else if ((str[i] == '%' && str[i + 1] == 'l' && str[i + 2] == 'l'
                 && str[i + 3] == 'd')
                 ||(str[i] == '%' && str[i + 1] == 'l' && str[i + 2] == 'l'
                 && str[i + 3] == 'i'))                                     //LONG_LONG_INT---- %lld
        {
            i += 3;
            ll = va_arg(factor, long long int);
            ft_putnbr_ll(ll);
        }
        else if ((str[i] == '%' && str[i + 1] == 'l' && str[i + 2] == 'd')
                    || (str[i] == '%' && str[i + 1] == 'l'
                    && str[i + 2] == 'i'))                                  //LONG_INT---- %ld
        {
            i += 2;
            l = va_arg(factor, long int);
            ft_putnbr_l(l);
        }
        else if (str[i] == '%' && str[i + 1] == 's')                      //(Char *)---- %s
        {
            i++;
            s = va_arg(factor, char *);
            if (s)
                ft_putstr(s);
        }
        else if (str[i] == '%' && str[i + 1] == 'c')                    // Char---- %c
        {
            i++;
            c = (char)va_arg(factor, char *);
            write(1, &c, 1);
        }
        else if (str[i] == '%' && str[i + 1] == '%')
        {
            i++;
            write(1, "%", 1);
        }
        else if ((str[i] == '%' && str[i + 1] == 'h'
        && str[i + 2] == 'd') || (str[i] == '%' && str[i + 1] == 'h'
        && str[i + 2] == 'i'))                                          // SHORT INTAGER---- %hd
        {
            i += 2;
            h = va_arg(factor, int);
            ft_putnbr_h(h);
        }
        else if (str[i] == '%' && str[i + 1] == 'o')                    // OCTAL_INTAGER---- %o
        {
            i++;
            o = va_arg(factor, unsigned int);
            ft_atoi_base8(o);
        }
        else if (str[i] == '%' && str[i + 1] == 'h' && str[i + 2] == 'h'
        && str[i + 3] == 'o')                    // OCTAL_INTAGER---- %hho
        {
            i += 3;
            o = (char)va_arg(factor, unsigned int);
            ft_atoi_base8(o);
        }
        else if (str[i] == '%' && str[i + 1]== 'l' && str[i + 2] == 'o') //LONG_OCTAL_INTAGER----%lo
        {
            i += 2;
            lo = va_arg(factor, unsigned long int);
            ft_atoi_base8_long(lo);
        }
        else if (str[i] == '%' && str[i + 1]== 'l' && str[i + 2] == 'l'
                    && str[i + 2] == 'o')                                   //LONG_OCTAL_INTAGER----%llo
        {
            i += 3;
            llo = va_arg(factor, unsigned long long int);
            ft_atoi_base8_ll(llo);
        }
        else if (str[i] == '%' && str[i + 1]== 'h' && str[i + 2] == 'o')    //LONG_OCTAL_INTAGER----%lo
        {
            i += 2;
            ho = va_arg(factor, int);
            ft_atoi_base8_short(ho);
        }
        else if (str[i] == '%' && str[i + 1] == 'u')                            //UNSIGNED_INT---- %u
        {
            i++;
            u = va_arg(factor, unsigned int);
            ft_putnbr_u(u);
        }
        else if (str[i] == '%' && str[i + 1] == 'h' && str[i + 2] == 'h'
        && str[i + 3] == 'u')                                               //UNSIGNED_INT---- %hhu
        {
            i += 3;
            u = (char)va_arg(factor, unsigned int);
            ft_putnbr_u(u);
        }
        else if (str[i] == '%' && str[i + 1] == 'l' && str[i + 2] == 'u')       //UNSIGNED_LONG_INT---- %lu
        {
            i += 2;
            lo = va_arg(factor, unsigned long int);
            ft_putnbr_lu(lo);
        }
        else if (str[i] == '%' && str[i + 1] == 'l' && str[i + 2] == 'l'
                            && str[i + 3] == 'u')                             //UNSIGNED_LONG_LONG_INT---- %llu
        {
            i += 3;
            llo = va_arg(factor, unsigned long long int);
            ft_putnbr_llu(llo);
        }
        else if (str[i] == '%' && str[i + 1] == 'h' && str[i + 2] == 'u')   //UNSIGNED_INT---- %hu
        {
            i += 2;
            ho = va_arg(factor, int);
            ft_putnbr_hu(ho);
        }
        else if (str[i] == '%' && str[i + 1] == 'x')                        // HEXADECIMAL_INT---- %x
        {
            i++;
            o = va_arg(factor, unsigned int);
            ft_atoi_base16x(o);
        }
        else if (str[i] == '%' && str[i + 1] == 'h' && str[i + 2] == 'h'
        && str[i + 3] == 'x')                                               // HEXADECIMAL_INT---- %hhx
        {
            i += 3;
            o = (char)va_arg(factor, unsigned int);
            ft_atoi_base16x(o);
        }
        else if (str[i] == '%' && str[i + 1] == 'h' && str[i + 2] == 'h' && str[i + 3] == 'x')                        // HEXADECIMAL_INT---- %x
        {
            i++;
            o = (char)va_arg(factor, unsigned int);
            ft_atoi_base16x(o);
        }
        else if (str[i] == '%' && str[i + 1] == 'l' && str[i + 2] == 'x')   // HEXADECIMAL_INT---- %lx
        {
            i += 2;
            lo = va_arg(factor, unsigned long int);
            ft_atoi_base16lx(lo);
        }
        else if (str[i] == '%' && str[i + 1] == 'l' && str[i + 2] == 'l'
                            && str[i + 3] == 'x')                           // HEXADECIMAL_INT---- %llx
        {
            i += 3;
            llo = va_arg(factor, unsigned long long int);
            ft_atoi_base16llx(llo);
        }
        else if (str[i] == '%' && str[i + 1] == 'h' && str[i + 2] == 'x')   // HEXADECIMAL_INT---- %hx
        {
            i += 2;
            ho = va_arg(factor, unsigned int);
            ft_atoi_base16hx(ho);
        }
        else if (str[i] == '%' && str[i + 1] == 'X')                        // HEXADECIMAL_INT---- %X
        {
            i++;
            o = va_arg(factor, unsigned int);
            ft_atoi_base16X(o);
        }
        else if (str[i] == '%' && str[i + 1] == 'h' && str[i + 2] == 'h'
        && str[i + 3] == 'X')                                               // HEXADECIMAL_INT---- %X
        {
            i += 3;
            o = va_arg(factor, unsigned int);
            ft_atoi_base16X(o);
        }
        else if (str[i] == '%' && str[i + 1] == 'l' && str[i + 2] == 'X')   // HEXADECIMAL_INT---- %lX
        {
            i += 2;
            lo = va_arg(factor, unsigned long int);
            ft_atoi_base16lX(lo);
        }
        else if (str[i] == '%' && str[i + 1] == 'l' && str[i + 2] == 'l'
                && str[i + 3] == 'X')                                       // HEXADECIMAL_INT---- %llX
        {
            i += 3;
            llo = va_arg(factor, unsigned long long int);
            ft_atoi_base16llX(llo);
        }
        else if (str[i] == '%' && str[i + 1] == 'h' && str[i + 2] == 'X')   // HEXADECIMAL_INT---- %hX
        {
            i += 2;
            ho = va_arg(factor, unsigned int);
            ft_atoi_base16hX(ho);
        }
        else if ((str[i] == '%' && str[i + 1] == ' ' && str[i + 2] == 'd') ||
                 (str[i] == '%' && str[i + 1] == ' ' && str[i + 2] == 'i'))            // INTAGER---- %'space'd-----%i
        {
            i += 2;
            ft_putchar(' ');
            d = va_arg(factor, int);
            ft_putnbr(d);
        }
        i++;
    }
    va_end(factor);
    return (0);
}

//-----------------------------------------------

int				main(void)
{
//    printf("% lld\n", LLONG_MAX);
//    ft_printf("% i\n", 15);
    printf("%+d\n", 0);
    ft_printf("%hhd\n", INT_MAX);
    return (0);
}

//"%#0-+d", 33
//
//if (dima->minus == 1 && dima->zero == 1)
