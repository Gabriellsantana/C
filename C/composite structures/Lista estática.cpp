#include <stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <stdbool.h>

#define MAX_TAM 5

typedef struct {
    int dados[MAX_TAM];
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

void inserirElemento(Lista *lista, int elemento) {
    if (!listaCheia(*lista)) {
        lista->dados[lista->tamanho++] = elemento;
		printf("Elemento %d inserido com sucesso.\n", elemento);
    } else {
        printf("A lista está cheia. Não é possível inserir mais elementos.\n");
    }
}

void removerElemento(Lista *lista, int elemento) {
    int i, j;
    bool encontrado = false;

    for (i = 0; i < lista->tamanho; i++) {
        if (lista->dados[i] == elemento) {
            encontrado = true;
            for (j = i; j < lista->tamanho - 1; j++) {
                lista->dados[j] = lista->dados[j + 1];
            }
            lista->tamanho--;
            printf("Elemento %d removido com sucesso.\n", elemento);
            break;
        }
    }

    if (!encontrado) {
    	printf("Elemento %d não encontrado na lista.\n", elemento);
    }
}

void buscarElemento(Lista lista, int elemento) {
    int i;
    bool encontrado = false;

    for (i = 0; i < lista.tamanho; i++) {
        if (lista.dados[i] == elemento) {
            encontrado = true;
            printf("Elemento %d encontrado na posição %d.\n", elemento, i);
            break;
        }
    }

    if (!encontrado) {
        printf("Elemento %d não encontrado na lista.\n", elemento);
    }
}

void mostrarLista(Lista lista) {
    int i;

    printf("Lista: ");
    if (listaVazia(lista)) {
        printf("vazia");
    } else {
        for (i = 0; i < lista.tamanho; i++) {
            printf("%d ", lista.dados[i]);
        }
    }
    printf("\n");
}

// Função para exibir o menu
void exibirMenu() {
    printf("\nMenu:\n");
    printf("1. Inserir elemento\n");
    printf("2. Remover elemento\n");
    printf("3. Buscar elemento\n");
    printf("4. Mostrar lista\n");
    printf("5. Sair\n");
    printf("Escolha uma opção: ");
}

int main() {
	
	setlocale(LC_ALL,"Portugues");
    Lista lista;
    int opcao, elemento;

    inicializarLista(&lista);

    do {
        exibirMenu();
        scanf("%d", &opcao);
		system("cls");
        switch (opcao) {
            case 1:
                printf("Digite o elemento a ser inserido: ");
                scanf("%d", &elemento);
                inserirElemento(&lista, elemento);
                break;
            case 2:
                printf("Digite o elemento a ser removido: ");
                scanf("%d", &elemento);
                removerElemento(&lista, elemento);
                break;
            case 3:
                printf("Digite o elemento a ser buscado: ");
                scanf("%d", &elemento);
                buscarElemento(lista, elemento);
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
}

