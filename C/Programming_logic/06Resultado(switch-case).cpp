#include <iostream>

using namespace std;

/*
6. Fazer um programa que recebe um s�mbolo de opera��o do usu�rio (+, -, / ou *)
e dois n�meros reais. O programa deve retornar o resultado da opera��o recebida
sobre estes dois n�meros.
*/

 char  op;
  int num1,num2;

main(){
    
    printf(":");
    scanf("%d",&num1);
    printf(":");
    scanf("%d",&num2);
    
    printf("operacao:");
    scanf("%c",&op);
    
    switch (op){ 
    
    	case '+':
    	  printf("%d",num1+num2);
    	break;
    	
    	case '-':
    	  printf("%d",num1-num2);
    	break;
    	
        case '*':
    	  printf("%d",num1*num2);
    	break;
    	
    	case '/':
    	  printf("%d",num1/num2);
    	break;
    	
    	default:
            printf("Opcao invalida\n");
	};

	
};
