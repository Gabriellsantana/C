#include<iostream>
#include<cstdio>
#include<stdio.h> //Contém as funções padrão de entrada e saída, como printf() e scanf().
#include<stdlib.h> //Fornece funções para alocação de memória dinâmica, controle de processo e outras operações de sistema.
#include<string.h> // Oferece funções para manipulação de cadeias de caracteres, como strcpy(), strlen(), strcat(), etc.
#include <string>
#include <locale.h> 


typedef struct Node {
    int data;
    struct Node* next;
} Node;


Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Função para inserir um novo visitante na pilha (entrar na fila)
void push(Node** top, int data) {
    Node* newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
    printf("Visitante adicionado com sucesso!\n");
}

// Função para remover um visitante da pilha (comprar ingresso e sair da fila)
void pop(Node** top) {
    if (*top == NULL) {
        printf("A fila está vazia!\n");
        return;
    }
    Node* temp = *top;
    *top = (*top)->next;
    free(temp);
    printf("Visitante removido com sucesso!\n");
}

// Função para imprimir a fila de visitantes
void display(Node* top) {
    if (top == NULL) {
        printf("A fila está vazia!\n");
        return;
    }
    printf("Fila de visitantes:\n");
    while (top != NULL) {
        printf("%d\n", top->data);
        top = top->next;
    }
}

int main() {
	
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    Node* top = NULL; // Topo da pilha (inicialmente vazio)
    int opcao, visitante;

    do {
        printf("\n       M E N U:      \n");
        printf("1. Adicionar visitante\n");
        printf("2. Remover visitante\n");
        printf("3. Mostrar fila de visitantes\n");
        printf("4. Sair\n\n");
        scanf("%d", &opcao);
        
        system("cls");

        switch(opcao) {
            case 1:
                printf("Informe o número do visitante: ");
                scanf("%d", &visitante);
                push(&top, visitante);
                break;
            case 2:
                pop(&top);
                break;
            case 3:
                display(top);
                break;
            case 4:
                printf("Saindo.. .\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while(opcao != 4);

    return 0;
}

