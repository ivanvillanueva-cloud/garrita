/*GPIO functional description (p.158)
Memory and bus architecture (p.46)

*/

//user defined libs
#include "gpio.h"
#include "timers.h"
#include "garrita.h"

int main(void){
		init_gpio();

	while(1){
		primerciclo();
		segundociclo();
	}
}