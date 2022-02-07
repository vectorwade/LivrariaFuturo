#ifndef livro_h
#define livro_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <unistd.h>
#define TAM 1000


typedef struct {
	char codigo[10];
	char nome[50];
	char autor[25];
} livro;


void inicializaLista(livro *lista, int n);

void copialivroLista2Arquivo(livro *lista, int n, char *nomeArquivo);

void inserelivro (livro *lista, int n);

void exibelivro (livro *lista, int n);

void Cadastro_Livro();

#endif
