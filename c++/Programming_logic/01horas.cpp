#include <iostream>

using namespace std;

 int segundos , horas , minutos, segundos_restantes;

main(){
	
	printf("Digite o numero de segundos: ");
	scanf("%d",&segundos);
	
	horas = segundos/3600;
	minutos =(segundos % 3600) /60;
	segundos_restantes = segundos % 60;	
	
	printf("Horas: \n%d",horas);
	
}
