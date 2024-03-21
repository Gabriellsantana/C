#include<stdlib.h>
#include<stdio.h>


/*esta imcompleta  mais irei termina e aprimora, estou tetando fazer  de todas as forma com
  minha logica e como eu imagino que poderia ser feita  ate então não olhei nehum material extra ou de apoio por isso 
  o atraso  , na verdade essesss if ainda esta sem muitas logica 
  mais é oque esto conseguindo imaginar para testa  mais falta verifcar vencedor empate e se
  o usario digita um numero que não seja dentro da minha matriz que 3 por 3 , e se não seguir as ordem dos if ele buga
  mais vou resolver preciso de mais um tempinho  , ta uma bagunça mais vai rodar hahaha
 */

int jogo[3][3] ;
int col,lin;
char j1,j2;

main (){

  j1 = 'x';
  j2 = 'O';
	

	  	
	printf("   0     1     2    \n");
    printf("0     |     |       \n");
    printf("------|-----|-------\n");
	printf("1     |     |       \n");
    printf("------|-----|-------\n");
    printf("2     |     |       \n");
     
	 
//prenchendo coluna 0 linha 0 jogador1 X
	printf("Jogador  (%c) , entre com a linha e coluna para jogar: ",j1);
    scanf("%d %d", &col, &lin);
    if(col == 0 && lin  == 0){
    jogo[col][lin] = j1;
    printf("   0   1   2   \n");
    printf("0  %c  %c  %c  \n",jogo[0][0],jogo[0][1],jogo[0][2]);
    printf("\n");
	printf("1  %c  %c  %c   \n",jogo[1][0],jogo[1][1],jogo[1][2]);
    printf("\n");
    printf("2  %c  %c  %c     \n",jogo[2][0],jogo[2][1],jogo[2][2]);
	};
//prenchendo coluna 0 linha 1 jogador2 O
	 printf("Jogador  (%c) , entre com a linha e coluna para jogar: ",j2);
      scanf("%d %d", &col, &lin);
    if(col == 0 && lin  == 1){
    	jogo[col][lin] = j2;
    printf("   0   1   2   \n");
    printf("0  %c  %c  %c  \n",jogo[0][0],jogo[0][1],jogo[0][2]);
    printf("\n");
	printf("1  %c  %c  %c   \n",jogo[1][0],jogo[1][1],jogo[1][2]);
    printf("\n");
    printf("2  %c  %c  %c     \n",jogo[2][0],jogo[2][1],jogo[2][2]);
	};
//prenchendo coluna 0 linha 2 jogado1 X
	 printf("Jogador  (%c) , entre com a linha e coluna para jogar: ",j1);
      scanf("%d %d", &col, &lin);
    if(col == 0 && lin  == 2){
    	jogo[col][lin] = j1;
    	 printf("    0   1    2   \n");
         printf("0  %c | %c | %c  \n",jogo[0][0],jogo[0][1],jogo[0][2]);
         printf("------|----|--------\n");
	     printf("1  %c | %c | %c   \n",jogo[1][0],jogo[1][1],jogo[1][2]);
         printf("------|----|--------\n");
         printf("2  %c | %c | %c     \n",jogo[2][0],jogo[2][1],jogo[2][2]);
	};
//prenchendo coluna 1 linha 0 jogado2 O
	 printf("Jogador  (%c) , entre com a linha e coluna para jogar: ",j2);
      scanf("%d %d", &col, &lin);
    if(col == 1 && lin  == 0){
    	jogo[col][lin] = j2;
    	 printf("    0   1    2   \n");
         printf("0  %c | %c | %c  \n",jogo[0][0],jogo[0][1],jogo[0][2]);
         printf("------|----|--------\n");
	     printf("1  %c | %c | %c   \n",jogo[1][0],jogo[1][1],jogo[1][2]);
         printf("------|----|--------\n");
         printf("2  %c | %c | %c     \n",jogo[2][0],jogo[2][1],jogo[2][2]);
	};
//prenchendo coluna 1 linha 1 jogado1 X
	 printf("Jogador  (%c) , entre com a linha e coluna para jogar: ",j1);
      scanf("%d %d", &col, &lin);
    if(col == 0 && lin  == 2){
    	jogo[col][lin] = j1;
    	 printf("    0   1    2   \n");
         printf("0  %c | %c | %c  \n",jogo[0][0],jogo[0][1],jogo[0][2]);
         printf("------|----|--------\n");
	     printf("1  %c | %c | %c   \n",jogo[1][0],jogo[1][1],jogo[1][2]);
         printf("------|----|--------\n");
         printf("2  %c | %c | %c     \n",jogo[2][0],jogo[2][1],jogo[2][2]);
	};
//prenchendo coluna 1 linha 2 jogado2 O
	 printf("Jogador  (%c) , entre com a linha e coluna para jogar: ",j2);
      scanf("%d %d", &col, &lin);
    if(col == 1 && lin  == 2){
    	jogo[col][lin] = j2;
    	 printf("    0   1    2   \n");
         printf("0  %c | %c | %c  \n",jogo[0][0],jogo[0][1],jogo[0][2]);
         printf("------|----|--------\n");
	     printf("1  %c | %c | %c   \n",jogo[1][0],jogo[1][1],jogo[1][2]);
         printf("------|----|--------\n");
         printf("2  %c | %c | %c     \n",jogo[2][0],jogo[2][1],jogo[2][2]);
	};
//prenchendo coluna 2 linha 0 jogado1 X
	 printf("Jogador  (%c) , entre com a linha e coluna para jogar: ",j1);
      scanf("%d %d", &col, &lin);
    if(col == 2 && lin  == 0){
    	jogo[col][lin] = j1;
    	 printf("    0   1    2   \n");
         printf("0  %c | %c | %c  \n",jogo[0][0],jogo[0][1],jogo[0][2]);
         printf("------|----|--------\n");
	     printf("1  %c | %c | %c   \n",jogo[1][0],jogo[1][1],jogo[1][2]);
         printf("------|----|--------\n");
         printf("2  %c | %c | %c     \n",jogo[2][0],jogo[2][1],jogo[2][2]);
	};
//prenchendo coluna 2 linha 1 jogado2 O
	 printf("Jogador  (%c) , entre com a linha e coluna para jogar: ",j2);
      scanf("%d %d", &col, &lin);
    if(col == 2 && lin  == 1){
    	jogo[col][lin] = j2;
    	 printf("    0   1    2   \n");
         printf("0  %c | %c | %c  \n",jogo[0][0],jogo[0][1],jogo[0][2]);
         printf("------|----|--------\n");
	     printf("1  %c | %c | %c   \n",jogo[1][0],jogo[1][1],jogo[1][2]);
         printf("------|----|--------\n");
         printf("2  %c | %c | %c     \n",jogo[2][0],jogo[2][1],jogo[2][2]);
	};
//prenchendo coluna 2 linha 2 jogado1 X
	 printf("Jogador  (%c) , entre com a linha e coluna para jogar: ",j1);
      scanf("%d %d", &col, &lin);
    if(col == 2 && lin  == 2){
    	jogo[col][lin] = j1;
    	 printf("    0   1    2   \n");
         printf("0  %c | %c | %c  \n",jogo[0][0],jogo[0][1],jogo[0][2]);
         printf("------|----|--------\n");
	     printf("1  %c | %c | %c   \n",jogo[1][0],jogo[1][1],jogo[1][2]);
         printf("------|----|--------\n");
         printf("2  %c | %c | %c     \n",jogo[2][0],jogo[2][1],jogo[2][2]);
	};
	
};


