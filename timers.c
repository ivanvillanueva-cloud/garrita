#include <stm32f10x.h>
#include "timers.h"

void time2_pulso(){
	RCC->APB1ENR |=(1 << 0);

	TIM2->CCMR1 |=(1 << 5);/*ACTIVAMOS EL PULSO*/
	TIM2->CCMR1 |=( 1<< 4);
	TIM2->CCMR1 &= ~(1 << 6);
  TIM2->CCER |=(1 << 0);/* ACTIVAMOS EL PIN DE SALIDA*/
	TIM2->CR1 |=(1 << 0);	/*ACTIVAMOS EL CONTADOR*/
	TIM2->PSC =27;
	TIM2->ARR =64284;
	


}
void time3_pulso(){
	RCC->APB1ENR |=(1 << 1);

	TIM3->CCMR1 |=(1 << 5);/* ACTIVAMOS EL PULSO */
	TIM3->CCMR1 |=( 1<< 4);
	TIM3->CCMR1 &= ~(1 << 6);
  TIM3->CCER |=(1 << 0);/* ACTIVAMOS EL PIN DE SALIDA*/
	TIM3->CR1 |=(1 << 0);	/*ACTIVAMOS EL CONTADOR*/
	TIM3->PSC =27;
	TIM3->ARR =64284;
}