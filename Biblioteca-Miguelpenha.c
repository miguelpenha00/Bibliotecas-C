
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Referencias:
//Atividades realizadas em sala e exercicios propostos pra casa.
//Trabalho final de algoritimos(python)


typedef struct usuario {
    char email[100];
    char nome[100];
    struct usuario *next;
    struct usuario *prev;
} Usuario;


typedef struct livro {
    char titulo[100];
    char autor[100];
    int ano;
    int codigo;
    int status=0;
    char emailUsuario[100];
    struct livro *next;
    struct livro *prev;
} Livro;

// LISTAS
typedef struct {
    Usuario *head;
    Usuario *tail;
} ListaUsuario;

typedef struct {
    Livro *head;
    Livro *tail;
} ListaLivro;


Livro* buscarLivro(ListaLivro *lista, int codigo) {
    Livro *aux = lista->head;

    while (aux != NULL) {
        if (aux->codigo == codigo) {
            return aux;
        }

        aux = aux->next;
    }

    return NULL;
}



int main(){
    
    
    
    
    
    
    
    
    
    return 0;
}