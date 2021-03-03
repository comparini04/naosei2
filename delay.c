/*
 * File:   delay.c
 * Author: 20185307
 *
 * Created on 3 de Março de 2021, 16:19
 */


#include <xc.h>
#include "config.h"



void delay (int t)
{
 while(t)
    {
        --t;
        __delay_ms(1);
    }
}
