void menu(){

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
void nome(){
    char nome[15];
    printf("\nDigite seu nome:\n");
	scanf(" %[^\n]", nome);
	printf("Nome digitado: %s\n\n", nome);

}
void voto_senador(){

    int Caiado = 0, Marcelod2 = 0, Stefani = 0, Mangao = 0;
    int voto_senador;
    int votos_dados =0;


    printf("Você tem direito a 2 votos para senador.");

    while (votos_dados < 2) {
        printf("Digite o número do senador escolhido: ");
        scanf("%d", &voto_senador);

        switch(voto_senador) {
            case 151:
                printf("Voto dado a Caiado\n");
                Caiado++;
                break;
            case 172:
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
    }

}
void voto_presidente(){
    int Bolsonaro= 0,Lula =0,Putin =0;
    int voto_presidente;
    int votos_dados = 0;

    printf("Você tem direito a 1 votos para Presidente");

    while(votos_dados <= 1){
        printf("Digite o numero do presidente");
        scanf("%d",&voto_presidente);

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
                printf("VOto dado a Putin");
                break;
            }
            votos_dados++;
        }
    }
