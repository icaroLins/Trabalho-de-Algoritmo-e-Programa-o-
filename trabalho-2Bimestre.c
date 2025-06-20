#include <stdio.h>
#include <locale.h>
#include "MYfuncion.h"

int main(void){
	int caido=0, marcelo=0, steafami=0, mangao=0;  
	int op;
	
	setlocale(LC_ALL, "Portuguese");
	
	nome();
	menu();
	voto_senador();
	voto_presidente();
	
return 0;
}
