#include <stm32f10x.h>
#include "garrita.h"
#include "timers.h"

void primerciclo(){
	time2_pulso();
	time3_pulso();
	
	
	/*para el primer ciclo de giro*/
	/*para la posicion 1=0°*/
	
	TIM2 -> CCR1 = 1800;
	for ( int i =64285 ; i > 1; i--);
	
	/*posicion 2=90°*/
	
	TIM2 -> CCR1 = 3857; 
	for ( int i = 0; i < 64285; i++);
  
	/*posicion 3=180°*/
	
	TIM2 -> CCR1 = 5914;
	for ( int i = 64285; i > 1; i--);

	
	/*REPITOENDO EL MISMO CICLO AL REVES*/
	TIM3 -> CCR1 = 1800;
	for ( int i = 0; i < 64285; i++);
	TIM3 -> CCR1 = 3857;
	for ( int i = 64285; i > 1; i--);
	TIM3 -> CCR1 = 5914;   
        }


void segundociclo () {
       
        time2_pulso();
        time3_pulso();

	TIM2 -> CCR1 = 5914;
	for ( int i =64285 ; i > 1; i--);

	TIM2 -> CCR1 = 3857;
	for ( int i = 0; i < 64285; i++);

	TIM2 -> CCR1 = 1800;

	for ( int i = 64285; i > 1; i--);

	TIM3 -> CCR1 = 5914;
	for ( int i = 0; i < 64285; i++);

	TIM3 -> CCR1 = 3857;
	for ( int i = 64285; i > 1; i--);

TIM3 -> CCR1 = 1800;   
        }


