/*
 * File:   main.c
 * Author: 20185307
 *
 * Created on 3 de Março de 2021, 16:18
 */


#include <xc.h>
#include "config.h"
#include "contatores1.h"
#include "delay.h"
#include "display.h"

char vetor [16] = { 0x3F, 0x06, 0X5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07,
                    0x7F, 0x6F, 0x77, 0x7C, 0x39, 0x5E, 0x79, 0x71 };

void main(void) {
    
    int cont = 0;
    char estado = 0;
    display7seg_init();
    botoes_init();
    contatores_init();
    
     while ( 1 )
    {
        switch ( estado )
        {
            case 0:
                if ( s1() == 1 )
                   ( s1() == 1 && K1status() == 0)
                           estado = 1;
                break;
                        
            case 1:
                
        }
   
}
