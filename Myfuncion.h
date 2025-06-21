void menu(void){

	printf("\t---------------------------------------------------------\n");

	printf("\t|");

	printf("\t\tCandidatos a senador do Goías \t\t|");
	printf("\n	|\tCaiado (MDB)   - 151 	 		\t|");
	printf("\n	|\tMArceloD2 (PL) - 171  	 		\t|");
	printf("\n	|\tStefani (PR)   - 112 	 		\t|");
	printf("\n	|\tMangão (PL)    - 133 			\t|");


	printf("\n\t--------------------------------------------------------\n");


	printf("\n\t--------------------------------------------------------");
	printf("\n  \t|\tCandidatos a presidência            \t\t|");
	printf("\n  \t|\tBolsonaro (PL)     - 22             \t\t|");
	printf("\n  \t|\tLula (PT)          - 13             \t\t|");
	printf("\n  \t|\tPutin (Psol)       - 29             \t\t|");
	printf("\n\t----------------------------------------------------------\n");
}
void nome(void){
    char nome[15];
    printf("\nDigite seu nome:\n");
	scanf(" %[^\n]", nome);
	printf("Nome digitado: %s\n\n", nome);

}
void voto_senador(int *a){

    int Caiado = 0, Marcelod2 = 0, Stefani = 0, Mangao = 0;
    int voto_senador;
    int votos_dados =0;
    int aux = 0, cont=0;
    int cond = 0;


    printf("Você tem direito a 2 votos para senador diferentes!");

    while (votos_dados < 2) {
        printf("\nDigite o número do senador escolhido: ");
        scanf("%i", &voto_senador);
        
        if(aux == 0){
        	aux = voto_senador;
        	cont++;
		}
		
		if(voto_senador != aux || cont ==1){
			cont++;

        switch(voto_senador) {
            case 151:
                printf("Voto dado a Caiado\n");
                Caiado++;
                break;
            case 171:
                printf("Voto dado a Marcelo D2\n");
                Marcelod2++;
                break;
            case 112:
                printf("Voto dado a Stefani\n");
                Stefani++;
                break;
            case 133:
                printf("Voto dado a Mangão\n");
                Mangao++;
                break;
        }
        votos_dados++;
        cond=0;
        *a=cond;
    }   
	else if(cont == 2 && voto_senador == aux){
    	printf("\nNão é possivel votar no mesmo senador tente outro!!");
    	cond=1;
    	*a=cond;
	}
	}

}
void voto_presidente(void){
    int Bolsonaro= 0,Lula =0,Putin =0;
    int voto_presidente;
    int votos_dados = 0;

    printf("Você tem direito a 1 votos para Presidente");

    while(votos_dados < 1){
        printf("\nDigite o numero do presidente: ");
        scanf("%i",&voto_presidente);

        switch(voto_presidente){
            case 22:
                printf("Voto dado a Bolsonaro\n");
                Bolsonaro++;
                break;
            case 13:
                printf("Voto dado a Lula\n");
                Lula++;
                break;
            case 29:
                printf("Voto dado a Putin");
                break;
            }
            votos_dados++;
        }
    }
