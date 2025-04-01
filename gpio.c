#include <stm32f10x.h>
#include "gpio.h"

void init_gpio(void){
	RCC->APB2ENR |= (1 << 4);/*ACTIVAR EL APBB2*/
	/*ACTIVAR EL TIMER 2*/
	GPIOA->CRL |=(1 << 3);/*ACTIVAR EL PUSSH PULL*/
	GPIOA->CRL &= ~(1 << 2);
	//AACTIVAR LOS 2MHZ DEL RELOJ
	GPIOA->CRL |=(1 << 1);
	GPIOA->CRL &= ~(1 << 0);
	/*ACTIVAR EL TIMER 3*/
	GPIOA->CRL |= (1 << 27); /*ACTIVAR EL PUSHPULL DEL TIMER 3*/
	GPIOA->CRL &= ~(1 << 26);
	GPIOA->CRL |= (1 << 25); /* ACTIVAR EL RELOJ*/
	GPIOA->CRL &= ~(1 << 24);
}

	


