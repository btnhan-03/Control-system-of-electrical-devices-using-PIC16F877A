  
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

typedef unsigned char uint8;
typedef signed char   sint8;
typedef unsigned short uint16;
typedef signed short   sint16;
typedef unsigned int uint32;
typedef signed int   sint32;

typedef struct
{
    uint8 RA0         :1;
    uint8 RA1         :1;
    uint8 RA2         :1;
    uint8 RA3         :1;
    uint8 RA4         :1;
    uint8 RA5         :1;
    uint8 RA6         :1;
    uint8 RA7         :1;
    
}Type_bitA;

typedef struct
{
    uint8 RB0         :1;
    uint8 RB1         :1;
    uint8 RB2         :1;
    uint8 RB3         :1;
    uint8 RB4         :1;
    uint8 RB5         :1;
    uint8 RB6         :1;
    uint8 RB7         :1;
    
}Type_bitB;

typedef struct
{
    uint8 RC0         :1;
    uint8 RC1         :1;
    uint8 RC2         :1;
    uint8 RC3         :1;
    uint8 RC4         :1;
    uint8 RC5         :1;
    uint8 RC6         :1;
    uint8 RC7         :1;
    
}Type_bitC;

typedef struct
{
    uint8 RD0         :1;
    uint8 RD1         :1;
    uint8 RD2         :1;
    uint8 RD3         :1;
    uint8 RD4         :1;
    uint8 RD5         :1;
    uint8 RD6         :1;
    uint8 RD7         :1;
    
}Type_bitD;

typedef struct
{
    uint8 RE0         :1;
    uint8 RE1         :1;
    uint8 RE2         :1;
    uint8 RE3         :1;
    uint8 RE4         :1;
    uint8 RE5         :1;
    uint8 RE6         :1;
    uint8 RE7         :1;
    
}Type_bitE;

typedef struct
{
    uint8 RBIF         :1;
    uint8 INTF         :1;
    uint8 T0IF         :1;
    uint8 RBIE         :1;
    uint8 INTE         :1;
    uint8 T0IE         :1;
    uint8 PEIE         :1;
    uint8 GIE          :1;
    
}INTCON_TYPE;

typedef struct
{
    uint8 PS            :3;
    uint8 PSA           :1;
    uint8 T0SE          :1;
    uint8 T0CS          :1;
    uint8 INTEDG        :1;
    uint8 nRBPU         :1;
    
}OPTION_TYPE;

typedef struct
{
    uint8 UNUSE         :4;
    uint8 VCFG1         :1;
    uint8 VCFG0         :1;
    uint8 UNUSE1        :1;
    uint8 ADFM          :1;
    
    
}ADCON1_TYPE;

typedef struct
{
    uint8 ADON              :1;
    uint8 GO_DONE           :1;
    uint8 CHS               :4;
    uint8 ADCS0             :1;
    uint8 ADCS1             :1;
    
}ADCON0_TYPE;

typedef struct
{
    uint8 TMR1ON        :1;
    uint8 TMR1CS        :1;
    uint8 T1SYNC        :1;
    uint8 T1OSCEN       :1;
    uint8 T1CKPS0       :1;
    uint8 T1CKPS1       :1;
    uint8 TMR1GE        :1;
    uint8 T1GINV        :1;
}T1CON_B;

typedef struct
{
    uint8 TMR1IE        :1;
    uint8 TMR2IE        :1;
    uint8 CCP1IE        :1;
    uint8 SSPIE         :1;
    uint8 TXIE          :1;
    uint8 RCIE          :1;
    uint8 ADIE          :1;
    uint8 ADC           :1;
    
}PIE1_BIT;

typedef struct
{
    uint8 TMR1IF        :1;
    uint8 TMR2IF        :1;
    uint8 CCP1IF        :1;
    uint8 SSPIF         :1;
    uint8 TXIF          :1;
    uint8 RCIF          :1;
    uint8 ADIF          :1;
    uint8 ADS           :1;
}PIR1_BIT;

typedef struct
{
    uint8 T2CKPS       :2;
    uint8 TMR2ON       :1;
    uint8 TOUTPS       :4;
    uint8 und          :1;
}T2CON_BIT;

#define TRISA        (*(volatile uint8*)0x85)
#define TRISB        (*(volatile uint8*)0x86)
#define TRISC        (*(volatile uint8*)0x87)
#define TRISD        (*(volatile uint8*)0x88)
#define TRISE        (*(volatile uint8*)0x89)
#define PORTA        (*(volatile uint8*)0x05)
#define PORTB        (*(volatile uint8*)0x06)
#define PORTC        (*(volatile uint8*)0x07)
#define PORTD        (*(volatile uint8*)0x08)
#define PORTE        (*(volatile uint8*)0x09)
#define TMR0         (*(volatile uint8*)0x01)
#define TMR1L        (*(volatile uint16*)0x0E)
#define TMR1H        (*(volatile uint16*)0x0F)
#define TMR2         (*(volatile  uint8*)0x11)
#define PIE1         (*(volatile PIE1_BIT*)0x8C)
#define PIR1         (*(volatile PIR1_BIT*)0x0C)
#define PR2          (*(volatile uint8*)0x92)
#define T2CON_B      (*(volatile T2CON_BIT*)0x12)


#define PORTA_B      (*(volatile Type_bitA*)0x05)
#define PORTB_B      (*(volatile Type_bitB*)0x06)
#define PORTC_B      (*(volatile Type_bitC*)0x07)
#define PORTD_B      (*(volatile Type_bitD*)0x08)
#define PORTE_B      (*(volatile Type_bitE*)0x09)

#define INTCON_BIT      (*(volatile INTCON_TYPE*)0x0B)
#define OPTION_REG      (*(volatile OPTION_TYPE*)0x81)
#define ANSEL           (*(volatile uint8*)0x188)
#define ANSELH          (*(volatile uint8*)0x189)

#define ADCON0_BIT      (*(volatile ADCON0_TYPE*)0x1F)
#define ADCON1_BIT      (*(volatile ADCON1_TYPE*)0x9F)
#define ADRESL          (*(volatile uint8*)0x9E)
#define ADRESH          (*(volatile uint8*)0x1E)
#define T1CON_BIT       (*(volatile T1CON_B*)0x10)
#endif	/* XC_HEADER_TEMPLATE_H */

