#include "ft_printf.h"
#include <limits.h>

//-----------------the first file-------------------

void     all_to_zero(t_var *var)
{
    var->o = 0;
    var->zero = 0;
    var->width = 0;
    var->minus = 0;
    var->plus = 0;
    var->space = 0;
    var->l = 0;
    var->ll = 0;
    var->h = 0;
}


int     count_dig(long long int width) // cчитаем смещение для флага WIDTH - на какое чиcло символов сдвинуть STR
{
    int i;

    i = 0;
    if (width == 0)
        return (1);
    while (width != 0)
    {
        i++;
        width = width / 10;
    }
    return (i);
}

void    find_length(t_var *var) // если мы нашли "WIDTH" выполняем эту функцию
{
    var->width = ft_atoi(var->str);
    var->str += count_dig(var->width);
}

void     check_flags(t_var *var) // проверяем наличие флагов (#, -, +, 0, space)
{
//    while (var->str)
//    {
        if ((*var->str) == '+')
        {
            var->plus = 1;
            var->str++;
        }
        else if ((*var->str) == '-')
        {
            var->minus = 1;
            var->str++;
        }
        else if ((*var->str) == '#')
        {
            var->hash = 1;
            var->str++;
        }
        else if ((*var->str) == ' ')
        {
            var->space = 1;
            var->str++;
        }
        else if ((*var->str) == '0')
        {
            var->zero = 1;
            var->str++;
        }
        if ((*var->str) <= '9' && (*var->str) >= '0')
            find_length(var);
}



void        check_length_mod(t_var *var) // ----------проверяем наличие модификаторов длины "l, ll, h, hh"----------
{
    if ((*var->str) == 'l') // %l-------%ll----
    {
        var->l = 1;
        var->str++;
        if ((*var->str) == 'l') // проверка на 'll'
        {
            var->l = 0;
            var->ll = 1;
            var->str++;
        }
    }
    else if ((*var->str) == 'h') // %h-----%hh----
    {
        var->h = 1;
        var->str++;
        if ((*var->str) == 'h') // проверка на 'hh'
        {
            var->h = 0;
            var->hh = 1;
            var->str++;
        }
    }
}

//---------the second file--------------

void    other_for_d(t_var *var, long long int num) // вывод %025d
{
    if (var->plus == 0 && var->width > 0 && var->zero == 1 && var->space == 0
            && var->minus == 0)
    {
        var->space_count = var->width - count_dig(num);
        while (var->space_count > 0)
        {
            write(1, "0",1);
            var->space_count--;
        }
        ft_putnbr_ll(num);
    }
    //--------------------------------ПРОДОЛЖЕНИЕ ЗДЕСЬ------------------------------\\
    else
        ft_putnbr_ll(num);
}

//---------выполняет вывод на экран конечного результата----------

void    calculation_for_d(t_var *var, long long int num) // 500 ----выводим конечный результат c %d----
{
    if (var->plus == 1 && var->width == 0 && var->zero == 0 && var->space == 0
    && var->minus == 0)
    {
        if (num >= 0)
        {
            write(1, "+", 1);
            ft_putnbr_ll(num);
        }
    }
    else if (var->plus == 0 && var->width > 0 && var->zero == 0 && var->space == 0
             && var->minus == 0)
    {
        var->space_count = var->width - count_dig(num);
        while (var->space_count > 0)
        {
            write(1, " ",1);
            var->space_count--;
        }
        ft_putnbr_ll(num);
    }
    else
        other_for_d(var, num);
}

void        check_for_d_i_o_u_x_X(t_var *var, va_list factor) //проверить наличие "diouxX"
{
    if ((*var->str) == 'd' || (*var->str) == 'i') // vse bukvy
    {
        if (var->l == 1)
            calculation_for_d(var, va_arg(factor, long int));
        else if (var->ll == 1)
            calculation_for_d(var, va_arg(factor, long long int));
        else if (var->h == 1)
            calculation_for_d(var, (short int)va_arg(factor, int));
        else if (var->hh == 1)
            calculation_for_d(var, (char)va_arg(factor, int));
        else
            calculation_for_d(var, va_arg(factor, int));
    }
//    else if ((*var->str) == 'o')
//    {
//        if (var->l == 1)
//            calculation_for_o(var, va_arg(factor, long int));
//        else if (var->ll == 1)
//            calculation_for_o(var, va_arg(factor, long long int));
//        else if (var->h == 1)
//            calculation_for_o(var, (short int)va_arg(factor, int));
//        else if (var->hh == 1)
//            calculation_for_o(var, (char)va_arg(factor, int));
//        else
//            calculation_for_o(var, va_arg(factor, int));
//    }
}

//---------исполняющая функция------------------

void    func_exe(t_var *var, va_list factor) //
{
    while ((*var->str))
    {
        if ((*var->str) != '%')
            write(1, (var->str), 1);
        else if ((*var->str) == '%')
        {
            while ((*var->str) != 'd') // внести все буквы ---!!!!------------
            {
                var->str++;
                check_flags(var); // если мы находим % то вызываем функцию и проверяем флаги  ---(N3)---
                check_length_mod(var); //проверяет наличие l, ll, h, hh  ---(N4)---
            }
            check_for_d_i_o_u_x_X(var, factor); //---(N5)---
        }
        var->str++;
    }
}

//---------запускающая функция--------

int     ft_new_printf(const char *format, ...)
{
    va_list     factor;
    t_var       *var;

    var = (t_var *)malloc(sizeof(t_var));
    all_to_zero(var); // обнулил все переменные указывающие на наличие флагов---(N1)---
    va_start(factor, format);
    var->str = format;
    if (var->str)
    {
        func_exe(var, factor); // вызываем исполняющую функцию---(N2)---
    }
    va_end(factor);
}

int main()
{
    printf("{%.5d}\n", 500);
    printf("{%05d}\n", 500);
    ft_new_printf("{%05d}\n", 500);
    return 0;
}
