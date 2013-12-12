#include <stdio.h>
#include <stdlib.h>
#include <time.h>





int main()
{

	// Para começar o jogo todos tem 3 palitos em suas mãos.
    int palitoJogadorReal = 3;
    int palitoJogador1 = 3;
    int palitoJogador2 = 3;
    int palitoJogador3 = 3;
    int palitoJogador4 = 3;
    int rodada = 0;


    int palitosMaoJogadorReal;

	// Palitos que o jogador leva a mesa.

    int palitosMao1;
    int palitosMao2;
    int palitosMao3;
    int palitosMao4;

    int somaMao;


    int escolhaJogadorReal;

	// O numero escolhido pelo jogador.

    int escolhaJogador1;
    int escolhaJogador2;
    int escolhaJogador3;
    int escolhaJogador4;

    


    srand( (unsigned)time(NULL) ); // semente para rand() : pega o horario para poder gerar numeros aleatorios.

    int singlePlayer;

    

    printf("\n\n\n");

    printf("Gostaria de Participar do Jogo contra 3 boots Digite: 2\n");
    printf("Se prefere ver os boots batalhando na arena dos palitos Digite: 4 \n\n");

    printf("Escolha: ");
    scanf("%i",&singlePlayer);

    switch (singlePlayer) {
        case ( 2 ): 
            // Loop para o jogo rodar.
            while( (palitoJogador1 != 0) || (palitoJogador2 != 0) || (palitoJogador3 != 0) || (palitoJogador4 != 0) ) {

                printf("************************************************************ \n\n");

                printf("Rodada : %d \n\n", rodada);
                printf("Qunatidade de Palitos\n");
                printf("Você:  %d \n ",palitoJogadorReal);
                printf("Jogador2: %d \n ",palitoJogador2);
                printf("Jogador3: %d \n ",palitoJogador3);
                printf("Jogador4: %d \n \n",palitoJogador4);

                if(rodada == 0) {
                    printf("De 0 a 3 \n");
                    printf("Palitos que vão em sua mão para mesa: ");
                    scanf("%i",&palitosMaoJogadorReal);

                    while ( palitosMaoJogadorReal > palitoJogadorReal) {
                        printf("Você não tem tudo isto de palitos \n");
                        printf("Palitos que vão em sua mão para mesa: ");
                        scanf("%i",&palitosMaoJogadorReal);

                    }

                    while( palitosMaoJogadorReal < 0) {
                            printf("Você não pode usar palitos negativos");
                            printf("Palitos que vão em sua mão para mesa: \n");
                            scanf("%i",&palitosMaoJogadorReal);
                        }

                    palitosMao2 = rand() % palitoJogador2 + 1;
                    sleep(1);

                    int palitosMao3 = rand() % palitoJogador3 + 1;
                    sleep(1);

                    palitosMao4 = rand() % palitoJogador4 + 1;
                    sleep(1);

                }else {

                    //Escolha dos palitos que vão para mesa.
                    printf("Palitos que vão em sua mão para mesa: ");
                    scanf("%i",&palitosMaoJogadorReal);

                    while ( palitosMaoJogadorReal > palitoJogadorReal) {
                        printf("Você não tem tudo isto de palitos \n");
                        printf("Palitos que vão em sua mão para mesa: ");
                        scanf("%i",&palitosMaoJogadorReal);

                    }

                    while( palitosMaoJogadorReal < 1) {
                            printf("Você não pode usar palitos negativos");
                            printf("Palitos que vão em sua mão para mesa: \n");
                            scanf("%i",&palitosMaoJogadorReal);
                        }

                    palitosMao2 = 1 + rand() % palitoJogador2;
                    sleep(1);

                    palitosMao3 = 1 + rand() % palitoJogador3;
                    sleep(1);

                    palitosMao4 = 1 + rand() % palitoJogador4;
                    sleep(1);
                }

                    
                    
                printf("Qual a somatoria dos palitos na mesa ? \n");

                int totalPalitos = (palitoJogadorReal + palitoJogador2 + palitoJogador3 + palitoJogador4);

                printf("De 1 a %d palitos \n", totalPalitos);
                scanf("%i",&escolhaJogadorReal);
                printf("Você: %i\n", escolhaJogadorReal);


                //Escolha do Jogador2
                escolhaJogador2 = 1 + rand() % totalPalitos;

                // os whiles foram usados para nunca terem escolhar iguais.
                while ( escolhaJogador2 == escolhaJogadorReal) {
                    escolhaJogador2 = 1 + rand() % totalPalitos;
                }
                sleep(1);

                //Escolha do Jogador3
                printf("Jogador2 : %d\n", escolhaJogador2);


                // Escolha dos Numeros pelo Jogador3
                escolhaJogador3 = 1 + rand() % totalPalitos;

                while ( (escolhaJogador3 == escolhaJogador2) || (escolhaJogador3 == escolhaJogadorReal ) ) {

                    escolhaJogador3 = 1 + rand() % totalPalitos;

                }

                sleep(1);

	// semente para rand() onde pega os segundos o tempo do relógio do computador.
    srand( (unsigned)time(NULL) );
 
    // Loop para o jogo rodar.
 	while( (palitoJogador1 != 0) || (palitoJogador2 != 0) || (palitoJogador3 != 0) || (palitoJogador4 != 0) ) {


                printf("Jogador3 : %d\n", escolhaJogador3);



                // Escolha dos Numeros pelo Jogador4
                escolhaJogador4 = 1 + rand() % totalPalitos;

 	    printf("Rodada : %d \n\n", rodada);
            printf("Qunatidade de Palitos\n");
            printf("Jogador1: %d \n ",palitoJogador1);
            printf("Jogador2: %d \n ",palitoJogador2);
            printf("Jogador3: %d \n ",palitoJogador3);
            printf("Jogador4: %d \n \n",palitoJogador4);

 			if(rodada == 0) {
	 		    palitosMao1 = rand() % palitoJogador1 + 1; // faz rand() ficar entre 0 e 3.
	 		    sleep(1);


                while (( escolhaJogador4 == escolhaJogador3) || (escolhaJogador4 == escolhaJogador2) || (escolhaJogador4 == escolhaJogadorReal)) {

                    escolhaJogador4 = 1 + rand() % totalPalitos;

                }
                printf("Jogador4 : %d \n \n", escolhaJogador4);



                // Escolha da somatoria de palitos na mesa.
                printf("Palitos na Mão:  \n");
                printf("Você : %i \n",palitosMaoJogadorReal);
                printf("Jogador2 : %d \n",palitosMao2);
                printf("Jogador3 : %d \n",palitosMao3);
                printf("Jogador4 : %d \n \n",palitosMao4);

                somaMao = (palitosMaoJogadorReal + palitosMao2 + palitosMao3 + palitosMao4);
                printf("Soma dos Palitos: %d \n\n", somaMao);

                if (escolhaJogadorReal == somaMao) {

                    palitoJogadorReal = palitoJogadorReal - 1;
                    printf("Você Acertou \n \n");
                    printf("Numero de Palitos %d \n \n", palitoJogadorReal);

                }else if(escolhaJogador2 == somaMao){

                    palitoJogador2 = palitoJogador2 - 1;
                    printf("Jogador2  Acertou \n \n");
                    printf("Numero de Palitos %d \n \n", palitoJogador2);

                }else if(escolhaJogador3 == somaMao){

                    palitoJogador3 = palitoJogador3 - 1;
                    printf("Jogador3  Acertou \n \n");
                    printf("Numero de Palitos %d \n \n", palitoJogador3);

                }else if(escolhaJogador4 == somaMao){

                    palitoJogador4 = palitoJogador4 - 1;
                    printf("Jogador4  Acertou \n \n");
                    printf("Numero de Palitos %d \n \n", palitoJogador4);

                }else {

                    printf("Ninguem Acertou \n \n");
                }

                    
                rodada = rodada + 1;
            }

     			//Escolha dos palitos que vão para mesa.
	     		    palitosMao1 = 1 + rand() % palitoJogador1; // faz rand() ficar entre 1 e 3.
	     		    sleep(1);
	
	     		    palitosMao2 = 1 + rand() % palitoJogador2;
	     		    sleep(1);
	
	     		    palitosMao3 = 1 + rand() % palitoJogador3;
	     		    sleep(1);
	
	     		    palitosMao4 = 1 + rand() % palitoJogador4;
	     		    sleep(1);
        		}
 		    
 		    printf("Escolha dos numeros pelos Jogadores \n");


        break;

        case ( 4 ): 
            // Loop para o jogo rodar.
            while( (palitoJogador1 != 0) || (palitoJogador2 != 0) || (palitoJogador3 != 0) || (palitoJogador4 != 0) ) {

                printf("************************************************************ \n\n");

                printf("Rodada : %d \n\n", rodada);
                printf("Qunatidade de Palitos\n");
                printf("Jogador1: %d \n ",palitoJogador1);
                printf("Jogador2: %d \n ",palitoJogador2);
                printf("Jogador3: %d \n ",palitoJogador3);
                printf("Jogador4: %d \n \n",palitoJogador4);

                if(rodada == 0) {
                    palitosMao1 = rand() % palitoJogador1 + 1;
                    sleep(1);

                    palitosMao2 = rand() % palitoJogador2 + 1;
                    sleep(1);

                    int palitosMao3 = rand() % palitoJogador3 + 1;
                    sleep(1);

                    palitosMao4 = rand() % palitoJogador4 + 1;
                    sleep(1);

                }else {

                    //Escolha dos palitos que vão para mesa.
                    palitosMao1 = 1 + rand() % palitoJogador1;
                    sleep(1);

                    palitosMao2 = 1 + rand() % palitoJogador2;
                    sleep(1);

                    palitosMao3 = 1 + rand() % palitoJogador3;
                    sleep(1);

                    palitosMao4 = 1 + rand() % palitoJogador4;
                    
                }

                    
                  
                printf("Escolha dos numeros pelos Jogadores \n");

                int totalPalitos = (palitoJogador1 + palitoJogador2 + palitoJogador3 + palitoJogador4);

                // Escolha do Jogador1
                escolhaJogador1 = 1 + rand() % totalPalitos;
                
                printf("Jogador1 : %d\n", escolhaJogador1);

                //Escolha do Jogador2
                escolhaJogador2 = 1 + rand() % totalPalitos;

                // os whiles foram usados para nunca terem escolhar iguais.
                while ( escolhaJogador2 == escolhaJogador1) {
                    escolhaJogador2 = 1 + rand() % totalPalitos;
                }
                sleep(1);

                //Escolha do Jogador3
                printf("Jogador2 : %d\n", escolhaJogador2);


 		    	palitoJogador1 = palitoJogador1 - 1;
 		    	printf("Jogador1  Acertou \n \n");
                	printf("Numero de Palitos %d \n \n", palitoJogador1);


                // Escolha dos Numeros pelo Jogador3
                escolhaJogador3 = 1 + rand() % totalPalitos;


                while ( (escolhaJogador3 == escolhaJogador2) || (escolhaJogador3 == escolhaJogador1 ) ) {

 		    	palitoJogador2 = palitoJogador2 - 1;
 		    	printf("Jogador2  Acertou \n \n");
                	printf("Numero de Palitos %d \n \n", palitoJogador2);


                    escolhaJogador3 = 1 + rand() % totalPalitos;


                }

 		    	palitoJogador3 = palitoJogador3 - 1;
 		    	printf("Jogador3  Acertou \n \n");
        		 printf("Numero de Palitos %d \n \n", palitoJogador3);


                sleep(1);


                printf("Jogador3 : %d\n", escolhaJogador3);

 		    	palitoJogador4 = palitoJogador4 - 1;
 		    	printf("Jogador4  Acertou \n \n");
                	printf("Numero de Palitos %d \n \n", palitoJogador4);



                // Escolha dos Numeros pelo Jogador4
                escolhaJogador4 = 1 + rand() % totalPalitos;

                while (( escolhaJogador4 == escolhaJogador3) || (escolhaJogador4 == escolhaJogador2) || (escolhaJogador4 == escolhaJogador1)) {

                    escolhaJogador4 = 1 + rand() % totalPalitos;

                }

                printf("Jogador4 : %d \n \n", escolhaJogador4);

                printf("Quantos Palitos na Mão \n");
                printf("Jogador1 : %d \n",palitosMao1);
                printf("Jogador2 : %d \n",palitosMao2);
                printf("Jogador3 : %d \n",palitosMao3);
                printf("Jogador4 : %d \n \n",palitosMao4);

                somaMao = (palitosMao1 + palitosMao2 + palitosMao3 + palitosMao4);
                printf("Soma dos Palitos: %d \n\n", somaMao);

                if (escolhaJogador1 == somaMao) {

                    palitoJogador1 = palitoJogador1 - 1;
                    printf("Jogador1  Acertou \n \n");
                    printf("Numero de Palitos %d \n \n", palitoJogador1);

                }else if(escolhaJogador2 == somaMao){

                    palitoJogador2 = palitoJogador2 - 1;
                    printf("Jogador2  Acertou \n \n");
                    printf("Numero de Palitos %d \n \n", palitoJogador2);

                }else if(escolhaJogador3 == somaMao){

                    palitoJogador3 = palitoJogador3 - 1;
                    printf("Jogador3  Acertou \n \n");
                    printf("Numero de Palitos %d \n \n", palitoJogador3);

                }else if(escolhaJogador4 == somaMao){

                    palitoJogador4 = palitoJogador4 - 1;
                    printf("Jogador4  Acertou \n \n");
                    printf("Numero de Palitos %d \n \n", palitoJogador4);

                }else {

                    printf("Ninguem Acertou \n \n");
                }

                    
                rodada = rodada + 1;

            }
        break;

        default:

            printf("Escolha invalida.");
            break;
        }
 

    printf("Parabéns \n \n");
    	
}
