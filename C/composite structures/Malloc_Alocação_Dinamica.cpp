#include<stdio.h> //para usar o gets para ler sring.
#include<stdlib.h> //Fornece funções para ALOCAÇÂO DINÂMICA





main(){
 // criando uma array de 50 inteiros (200 bytes)	
 int *v = (int*)malloc(200); // mesma coisa de int v[50]; se int tem 4 bytes e vc precisa de 50 posição 50x4	
 //criando uma array de 200 char (200 bytes)
 char *c = (char*)malloc (200);
 
 int *n = (int*)malloc(50* sizeof(int));// 50 x o tamanho do meu tipo que nocaso com sizeof da pra saber que 4 bytes que é o int
 //essa abordagem é usada quando se saber o numeo exato de dados que vou usar para não ter desperdiço de mémoria
 // exemplo eu sei que vou ter 50 informção de tal tipo então de terminei o tamnho certo de mémoria para se usar 50 x 4 bytes
 // essa arbodagem é mais ideal por segurança
 
 if (v == NULL || c == NULL) {
        printf("Erro! Falha na alocação de memória.\n");
        return 1;
    } 
 
    char *nome;
    nome = (char *) malloc (sizeof(char));
    fflush(stdin);
    gets(nome);
    printf("\nseu nome %s agora oculpa o espaço exato do tamnaho dele na memoria RAM[disco/C]\n",nome);
     
     
   // Libera a memória alocada dinamicamente
    free(v);
    free(c);
    free(nome);

};

/*Em C, a função malloc() é utilizada para alocar memória dinamicamente durante a execução de um programa.
Isso significa que você pode solicitar ao sistema operacional uma certa quantidade de memória em tempo de execução,
em vez de especificar todas as alocações de memória durante a compilação*/


/*
A função malloc() aloca memória dinamicamente em tempo de execução.
Sempre verifique se a alocação foi bem-sucedida.
Libere a memória alocada dinamicamente usando free() quando não precisar mais dela.
*/


/*
A diferença fundamental entre int *n = (int*)malloc(50 * sizeof(int)); e int *v = (int*)malloc(200); 
está na quantidade de memória alocada e na forma como ela é organizada. Vamos analisar cada uma delas:

int *n = (int*)malloc(50 * sizeof(int));

Aqui, você está alocando memória para um array de inteiros que pode armazenar até 50 elementos.
O tamanho de cada elemento é determinado pelo sizeof(int). Portanto, independentemente do tamanho do int em sua plataforma (normalmente 4 bytes),
você tem espaço para 50 inteiros. Esta abordagem é útil quando você sabe exatamente quantos elementos precisa armazenar e deseja alocar
a quantidade exata de memória para isso.

int *v = (int*)malloc(200);

Aqui, você está alocando 200 bytes de memória, que podem ser interpretados como um array de inteiros ou como uma região de memória 
contínua de tamanho arbitrário. Isso permite mais flexibilidade no uso da memória. Por exemplo,
você poderia usar essa memória para armazenar uma matriz de inteiros de tamanho variável,
ou para armazenar outros tipos de dados em uma estrutura mais complexa. No entanto, com essa abordagem,
você precisa ser cuidadoso ao acessar os elementos, pois não há garantia de que você está acessando um número
inteiro válido em cada posição.

Vantagens e desvantagens:

int *n = (int*)malloc(50 * sizeof(int));

Vantagens:
A quantidade de memória alocada é precisa e controlada.
Acesso aos elementos é direto e seguro.
Desvantagens:
A quantidade de memória alocada é fixa e pode ser desperdiçada se não for totalmente utilizada.
int *v = (int*)malloc(200);

Vantagens:
Flexibilidade no uso da memória.
Pode ser usado para armazenar diferentes tipos de dados ou estruturas de dados complexas.
Desvantagens:
O acesso aos elementos pode ser mais complexo e requer gerenciamento cuidadoso.
Pode haver desperdício de memória se a quantidade alocada for maior do que o necessário.
Em resumo, a escolha entre essas duas abordagens depende das necessidades específicas do seu programa. 
Se você sabe exatamente quantos elementos precisa armazenar e quer minimizar o desperdício de memória, use a primeira abordagem. 
Se você precisa de flexibilidade e está lidando com estruturas de dados dinâmicas ou tamanhos variáveis, a segunda abordagem pode 
ser mais apropriada.
*/

//https://chat.openai.com/share/6ee52adb-641f-4c6e-a71d-3ec3511af952
