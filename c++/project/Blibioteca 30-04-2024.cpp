#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>

#define MAX_USUARIOS 100
#define MAX_LIVROS 100
#define MAX_SENHA 100

using namespace std;

int quanL,contL;
char usuario[MAX_USUARIOS][50];
char usuario2[50];
char senha2[50];
char senha[MAX_SENHA][50];
char oplivro[50];
char livro[MAX_LIVROS][50];
int cont = 0;
int cont_u,cont_s;
int usuarioEncontrado,j,u,sql;
main() {
    setlocale(LC_ALL, "Portuguese");

    int op, i;

    while (op != 4) { 
    	printf("\n");
        printf("[1] Se-Cadastre \n");
        printf("[2] Cadastre Livro \n");
        printf("[3] Emprestimo \n");
        printf("[4] Sair \n");
        printf("\n");
        scanf("%d", &op);
        system("cls"); //limpa tela

        switch (op) {
            case 1:
                printf("NOME DE USUÁRIO: ");
                fflush(stdin);
                gets(usuario[cont_u]);
                fflush(stdin);
              
                printf("CRIE UMA SENHA : ");
                fflush(stdin);
                gets(senha[cont_s]);
                fflush(stdin);
                
                cont_u++;
                cont_s++;

               system("cls"); //limpa tela

                break;
            case 2:
            
            	printf("Quantos livros vai cadastrar? \n ");
            	scanf("%d",&quanL);
            	system("cls"); //limpa tela
            	
            	for (contL = -1; contL <= quanL ; contL++){
                printf("Cadastre  [ %d LIVRO ] : \n",quanL);
                quanL--;
                fflush(stdin);
                gets(livro[cont]);
                fflush(stdin);
                cont++;
                system("cls"); //limpa tela
				};      
                break;
              
            case 3: {
                 //login empréstimo
                 
                printf("------[ login ]----->> \n");
                printf("\n");

                printf("Usuario: ");
                fflush(stdin);
                gets(usuario2);
                fflush(stdin);   
                printf("Senha: ");
                fflush(stdin);
                gets(senha2);
                fflush(stdin);

                system("cls"); //limpa tela
                
                //verificando login
                int usuarioEncontrado = -1;
                
                for (u = 0; u < cont_u; u++) {
                if (strcmp(usuario[u], usuario2) == 0 && strcmp(senha[u], senha2) == 0) {
                usuarioEncontrado = u;
                 };
               };
                if (usuarioEncontrado != -1) {
                printf("Bem vindo [ %s ] qual livro você deseja adquirir por Empréstimo? \n", usuario[usuarioEncontrado]);
                printf("\n");
                for (i = 0; i < cont; i++) {
                printf("%i: %s\n", i, livro[i]);
                };
                printf("\n Escolha o livro na posição [ N ]: ");
                fflush(stdin);
                gets(oplivro);
                fflush(stdin);

                // Verificando se a posição escolhida é válida
                int posicao = atoi(oplivro);
                if (posicao >= 0 && posicao < cont) {
                printf("\nEmprestimo feito com Sucesso :) do livro: %s \n", livro[posicao]);

                // Remover o livro da lista
                for (int j = posicao; j < cont - 1; j++) {
                strcpy(livro[j], livro[j + 1]);
                };
                cont--;
                 } else {
                printf("\n Posição inválida.\n");
                };
                 } else {
                printf("Usuario e senha Inválidos. Erro 404.\n");
                 };
                };
                break;
                
            case 4:
                printf(" SESSÃO ENCERRADA . . .  .\n");
                break;
            default:
                printf("\n Opção do Menu [OPÇÃO N ENCONTRADA ERRO 404] \n");
        };
    };

};

