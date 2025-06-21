#include <stdio.h>
#include <locale.h>
#include "MYfuncion.h"

int main(void){
	int cond;
	cond=0;
	
	setlocale(LC_ALL, "Portuguese");
	
	nome();
	menu();
	voto_senador(&cond);
	
	if(cond == 0){
	voto_presidente();
    }
	
return 0;
}
