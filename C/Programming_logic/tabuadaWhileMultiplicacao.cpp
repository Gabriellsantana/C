#include <iostream>

using namespace std;


int cont , num;

main(){
	
	printf("informe um numero para fazer tabuada \n");
	scanf("%d",&num);
	
	while (cont<=10){
	    
	    printf("%d x %d = %d \n",cont, num,cont*num);
	   
	    cont ++ ;
	};
	
};
