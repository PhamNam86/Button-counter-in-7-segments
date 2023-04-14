#include<16F887.h>
#DEVICE *=16 ADC=10 
#FUSES HS,NOWDT,NOPUT,NOLVP 
#USE DELAY(CLOCK=20M) 
#include<luutinh.h>
unsigned char x = 0;
const char led7[] = {0x3f,0x06, 0x5b, 0x4f,0x66,0x6d, 0x7d, 0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71};
                  //  0    1     2     3    4    5     6     7    8    9    A    B    C    D    E    F  
void Button_1(){
if(input(pin_c7)==0)
{
x=x+1;
delay_ms(300);
}
if(x==1)
{

output_d(~led7[0]);
}
if(x==2)
{

output_d(~led7[1]);
}

if(x==3)
{

output_d(~led7[2]);

}
if(x==4)
{

output_d(~led7[3]);

}
if(x==5)
{

output_d(~led7[4]);

}
if(x==6)
{

output_d(~led7[5]);

}

if(x==7)
{

output_d(~led7[6]);

}

if(x==8)
{

output_d(~led7[7]);

}


if(x==9)
{

output_d(~led7[8]);

}
if(x==10)
{

output_d(~led7[9]);

}

if(x==11)
{

output_d(~led7[10]);

}
if(x==12)
{

output_d(~led7[11]);

}

if(x==13)
{

output_d(~led7[12]);

}

if(x==14)
{

output_d(~led7[13]);

}

if(x==15)
{

output_d(~led7[14]);

}

if(x==16)
{

output_d(~led7[15]);
x=0;
}
}
void main()
{

set_tris_c(0xff); 
set_tris_d(0x00); 

output_d(0x00);


while(TRUE)
{

Button_1();

}

}