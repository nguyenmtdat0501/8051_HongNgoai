#include "module_12.h"

void module12_Delay10ms(void){
   unsigned char a,b,c;
   for(c=1;c>0;c--)
      for(b=30;b>0;b--)
         for(a=130;a>0;a--);
}

void module_12(void){
	GPIO_LED = 0xfe;	// 1111 1110 
	if(module12_K1==0)//kiem tra nut co nhan khong
	{
		GPIO_LED = _cror_(GPIO_LED,1);//dich phai 1 lan
		while((i<50)&&(module12_K1==0))	//neu an giu lau hon 500ms thi den se dich
		{
			module12_Delay10ms();
			i++;//i tang moi 10ms
		}
		i=0;//khi tha tay sau khi an thi i = 0
	}
}