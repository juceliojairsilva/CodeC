#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	// Para começar o jogo todos tem 3 palitos em suas mãos.
    int palitoJogador1 = 3;
    int palitoJogador2 = 3;
    int palitoJogador3 = 3;
    int palitoJogador4 = 3;
    int rodada = 0;

	// Palitos que o jogador leva a mesa.
    int palitosMao1;
    int palitosMao2;
    int palitosMao3;
    int palitosMao4;

    int Jogador1;
    int Jogador2;
    int Jogador3;
    int Jogador4;

    int somaMao;

	// O numero escolhido pelo jogador.
    int escolhaJogador1;
    int escolhaJogador2;
    int escolhaJogador3;
    int escolhaJogador4;


	// semente para rand() onde pega os segundos o tempo do relógio do computador.
    srand( (unsigned)time(NULL) );
 
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
	 		    palitosMao1 = rand() % palitoJogador1 + 1; // faz rand() ficar entre 0 e 3.
	 		    sleep(1);

	 		    palitosMao2 = rand() % palitoJogador2 + 1;
	 		    sleep(1);

	 		    int palitosMao3 = rand() % palitoJogador3 + 1;
	 		    sleep(1);

	 		    palitosMao4 = rand() % palitoJogador4 + 1;
	 		    sleep(1);

	 		    rodada = rodada + 1;
 			}else {

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

 		    escolhaJogador1 = 1 + rand() % (palitoJogador1 + palitoJogador2 + palitoJogador3 + palitoJogador4);
 		    sleep(1);
 		    printf("Jogador1 : %d\n", escolhaJogador1);

 		    escolhaJogador2 = 1 + rand() % (palitoJogador1 + palitoJogador2 + palitoJogador3 + palitoJogador4);
 		    sleep(1);
 		    printf("Jogador2 : %d\n", escolhaJogador2);

 		    escolhaJogador3 = 1 + rand() % (palitoJogador1 + palitoJogador2 + palitoJogador3 + palitoJogador4);
 		    sleep(1);
 		    printf("Jogador3 : %d\n", escolhaJogador3);

 		    escolhaJogador4 = 1 + rand() % (palitoJogador1 + palitoJogador2 + palitoJogador3 + palitoJogador4);
 		    sleep(1);
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

    printf("Parabéns \n \n");
    	
}
