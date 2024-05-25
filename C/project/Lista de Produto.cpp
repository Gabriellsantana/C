#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>

#define MAX_TAM 5

typedef struct {
    char nome[50];
    int quantidade;
    float preco;
} Produto;

typedef struct {
    Produto dados[MAX_TAM];
    int tamanho;
} Lista;

// Funções para operações na lista
void inicializarLista(Lista *lista) {
    lista->tamanho = 0;
}

bool listaCheia(Lista lista) {
    return lista.tamanho == MAX_TAM;
}

bool listaVazia(Lista lista) {
    return lista.tamanho == 0;
}

void inserirElemento(Lista *lista, Produto produto) {
    if (!listaCheia(*lista)) {
        lista->dados[lista->tamanho++] = produto;
		printf("Produto %s inserido com sucesso.\n", produto.nome);
    } else {
        printf("A lista está cheia. Não é possível inserir mais produtos.\n");
    }
}

void removerElemento(Lista *lista, char nome[]) {
    int i, j;
    bool encontrado = false;

    for (i = 0; i < lista->tamanho; i++) {
        if (strcmp(lista->dados[i].nome, nome) == 0) {
            encontrado = true;
            for (j = i; j < lista->tamanho - 1; j++) {
                lista->dados[j] = lista->dados[j + 1];
            }
            lista->tamanho--;
            printf("Produto %s removido com sucesso.\n", nome);
            break;
        }
    }

    if (!encontrado) {
    	printf("Produto %s não encontrado na lista.\n", nome);
    }
}

void buscarElemento(Lista lista, char nome[]) {
    int i;
    bool encontrado = false;

    for (i = 0; i < lista.tamanho; i++) {
        if (strcmp(lista.dados[i].nome, nome) == 0) {
            encontrado = true;
            printf("Produto %s encontrado na posição %d.\n", nome, i);
            break;
        }
    }

    if (!encontrado) {
        printf("Produto %s não encontrado na lista.\n", nome);
    }
}

void mostrarLista(Lista lista) {
    int i;

    printf("Lista de Produtos: \n");
    if (listaVazia(lista)) {
        printf("vazia\n");
    } else {
        for (i = 0; i < lista.tamanho; i++) {
            printf("Nome: %s | Quantidade: %d | Preço: %.2f\n", lista.dados[i].nome, lista.dados[i].quantidade, lista.dados[i].preco);
        }
    }
}

// Função para exibir o menu
void exibirMenu() {
    printf("\nMenu:\n");
    printf("1. Inserir produto\n");
    printf("2. Remover produto\n");
    printf("3. Buscar produto\n");
    printf("4. Mostrar lista de produtos\n");
    printf("5. Sair\n");
    printf("Escolha uma opção: ");
}

main() {
	
	setlocale(LC_ALL, "Portuguese");

    Lista lista;
    int opcao;
    Produto produto;
    char nome[50];

    inicializarLista(&lista);

    do {
        exibirMenu();
        scanf("%d", &opcao);
		system("cls");
        switch (opcao) {
            case 1:
                printf("Digite o nome do produto: ");
                scanf("%s", produto.nome);
                printf("Digite a quantidade do produto: ");
                scanf("%d", &produto.quantidade);
                printf("Digite o preço do produto: ");
                scanf("%f", &produto.preco);
                inserirElemento(&lista, produto);
                break;
            case 2:
                printf("Digite o nome do produto a ser removido: ");
                scanf("%s", nome);
                removerElemento(&lista, nome);
                break;
            case 3:
                printf("Digite o nome do produto a ser buscado: ");
                scanf("%s", nome);
                buscarElemento(lista, nome);
                break;
            case 4:
                mostrarLista(lista);
                break;
            case 5:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
};

