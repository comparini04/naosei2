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



void main(void) 

{
{
    int cont = 0;
    int estado = 0;
    int t;
    
    
     while ( 1 )
    {
        switch ( estado )
        {
            case 0:
                    estado = 1;
                    break;
            case 1:
                    contatores_init();
                    display7seg_init();
                    estado = 2;
                    break;
            case 2:
                    if ( s1() == 1 && K1status() == 0 )
                        estado = 3;
                    break;
            case 3:
                    K1(1);
                    K2(1);
                    K3(0);
                    estado = 4;
                    break;
            case 4:
                    t = 3000;
                    estado = 6;
                    break;
            case 6:
                    delay(1);
                    --t;
                    if (t <= 0 )
                        estado = 7;
                    if( s0() == 1 )
                        estado = 9;
                    break;
            case 7:
                    ++cont;
                    estado = 8;
                    break;
            case 8:
                    K1(1);
                    K2(0);
                    K3(1);
                    if( s0() == 1 )
                        estado = 9;
                    break;
            case 9:
                    K1(0);
                    K2(0);
                    K3(0);
                    estado = 2;
                    break;
        }      
        display7seg( cont );
        
        if ( cont >= 10)
            cont = 0;
        }
                   
                
        }
   
}
