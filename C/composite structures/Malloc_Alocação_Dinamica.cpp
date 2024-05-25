#include<stdio.h> //para usar o gets para ler sring.
#include<stdlib.h> //Fornece fun��es para ALOCA��O DIN�MICA





main(){
 // criando uma array de 50 inteiros (200 bytes)	
 int *v = (int*)malloc(200); // mesma coisa de int v[50]; se int tem 4 bytes e vc precisa de 50 posi��o 50x4	
 //criando uma array de 200 char (200 bytes)
 char *c = (char*)malloc (200);
 
 int *n = (int*)malloc(50* sizeof(int));// 50 x o tamanho do meu tipo que nocaso com sizeof da pra saber que 4 bytes que � o int
 //essa abordagem � usada quando se saber o numeo exato de dados que vou usar para n�o ter desperdi�o de m�moria
 // exemplo eu sei que vou ter 50 inform��o de tal tipo ent�o de terminei o tamnho certo de m�moria para se usar 50 x 4 bytes
 // essa arbodagem � mais ideal por seguran�a
 
 if (v == NULL || c == NULL) {
        printf("Erro! Falha na aloca��o de mem�ria.\n");
        return 1;
    } 
 
    char *nome;
    nome = (char *) malloc (sizeof(char));
    fflush(stdin);
    gets(nome);
    printf("\nseu nome %s agora oculpa o espa�o exato do tamnaho dele na memoria RAM[disco/C]\n",nome);
     
     
   // Libera a mem�ria alocada dinamicamente
    free(v);
    free(c);
    free(nome);

};

/*Em C, a fun��o malloc() � utilizada para alocar mem�ria dinamicamente durante a execu��o de um programa.
Isso significa que voc� pode solicitar ao sistema operacional uma certa quantidade de mem�ria em tempo de execu��o,
em vez de especificar todas as aloca��es de mem�ria durante a compila��o*/


/*
A fun��o malloc() aloca mem�ria dinamicamente em tempo de execu��o.
Sempre verifique se a aloca��o foi bem-sucedida.
Libere a mem�ria alocada dinamicamente usando free() quando n�o precisar mais dela.
*/


/*
A diferen�a fundamental entre int *n = (int*)malloc(50 * sizeof(int)); e int *v = (int*)malloc(200); 
est� na quantidade de mem�ria alocada e na forma como ela � organizada. Vamos analisar cada uma delas:

int *n = (int*)malloc(50 * sizeof(int));

Aqui, voc� est� alocando mem�ria para um array de inteiros que pode armazenar at� 50 elementos.
O tamanho de cada elemento � determinado pelo sizeof(int). Portanto, independentemente do tamanho do int em sua plataforma (normalmente 4 bytes),
voc� tem espa�o para 50 inteiros. Esta abordagem � �til quando voc� sabe exatamente quantos elementos precisa armazenar e deseja alocar
a quantidade exata de mem�ria para isso.

int *v = (int*)malloc(200);

Aqui, voc� est� alocando 200 bytes de mem�ria, que podem ser interpretados como um array de inteiros ou como uma regi�o de mem�ria 
cont�nua de tamanho arbitr�rio. Isso permite mais flexibilidade no uso da mem�ria. Por exemplo,
voc� poderia usar essa mem�ria para armazenar uma matriz de inteiros de tamanho vari�vel,
ou para armazenar outros tipos de dados em uma estrutura mais complexa. No entanto, com essa abordagem,
voc� precisa ser cuidadoso ao acessar os elementos, pois n�o h� garantia de que voc� est� acessando um n�mero
inteiro v�lido em cada posi��o.

Vantagens e desvantagens:

int *n = (int*)malloc(50 * sizeof(int));

Vantagens:
A quantidade de mem�ria alocada � precisa e controlada.
Acesso aos elementos � direto e seguro.
Desvantagens:
A quantidade de mem�ria alocada � fixa e pode ser desperdi�ada se n�o for totalmente utilizada.
int *v = (int*)malloc(200);

Vantagens:
Flexibilidade no uso da mem�ria.
Pode ser usado para armazenar diferentes tipos de dados ou estruturas de dados complexas.
Desvantagens:
O acesso aos elementos pode ser mais complexo e requer gerenciamento cuidadoso.
Pode haver desperd�cio de mem�ria se a quantidade alocada for maior do que o necess�rio.
Em resumo, a escolha entre essas duas abordagens depende das necessidades espec�ficas do seu programa. 
Se voc� sabe exatamente quantos elementos precisa armazenar e quer minimizar o desperd�cio de mem�ria, use a primeira abordagem. 
Se voc� precisa de flexibilidade e est� lidando com estruturas de dados din�micas ou tamanhos vari�veis, a segunda abordagem pode 
ser mais apropriada.
*/

//https://chat.openai.com/share/6ee52adb-641f-4c6e-a71d-3ec3511af952
