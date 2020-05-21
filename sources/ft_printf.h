//
// Created by agloin on 17.04.2020.
//

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "../libft/libft.h"


typedef struct  t_struct
{
    int             zero; //=0 =1
    int             width; // длина области заполняемая пробелами, с учетом длины выводимых данных
    int             minus;
    int             plus;
    int             space;
    int             hash;
    long int        l;     //---li---
    long long int   ll;    //---lli---
    short int       h;     //---h---h---
    unsigned int    hh;    //---hh---hh--
    unsigned int    o;
    int             len_arg; // когда есть width, то учитывается ширина аргумента
    const char      *str;
    long long int   space_count;
}                 t_var;



#endif //FT_PRINTF_H
