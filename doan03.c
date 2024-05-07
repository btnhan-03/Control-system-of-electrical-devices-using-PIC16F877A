#include "doan.h"
#include <xc.h>
#include <pic16f877a.h> 

#define _XTAL_FREQ 20000000

#pragma config FOSC = HS 
#pragma config WDTE = OFF
#pragma config PWRTE = OFF
#pragma config BOREN = ON
#pragma config LVP = OFF
#pragma config CPD = OFF
#pragma config WRT = OFF
#pragma config CP = OFF

uint8 ArrayLed[10] ={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
int count=0;


void main()
{
    TRISB=0b10000000;
    TRISC=0b00000111;
    TRISA=0x00;
    PORTA=0x00;
    PORTB=0x00;
    PORTC=0x00;
    PORTD=0x00;
    TRISD=0x00;
    
  
    while(1)
    {
        if(PORTB_B.RB7==0|| PORTC_B.RC0==0)
        {
            count++;
            
            if(count<20)
            {              
                PORTA_B.RA0=0;
            }
            if(count>=20)
            {
                PORTA_B.RA0=1;
            }
            if(count==100)
            {
                count=0;
            }
        }
       else if(PORTC_B.RC1==0||PORTC_B.RC2==0)
        { 
            count--;
             if(count<=0)
        {          
            count=99;
        }
            if(count<20)
            { 
                PORTA_B.RA0=0;
            }
            if(count>=20)
            {
                PORTA_B.RA0=1;
            }
        }   
        PORTD=ArrayLed[count%10];
        PORTB=ArrayLed[count/10];       
        __delay_ms(1000);
    }
} 

    
