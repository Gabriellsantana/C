#include <iostream>

using namespace std;

/*
6. Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *)
e dois números reais. O programa deve retornar o resultado da operação recebida
sobre estes dois números.
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
