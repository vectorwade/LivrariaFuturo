#include "livros.h"


//inicializa a funçao livro
void inicializaLista(livro *lista, int n) {
	int i;

	for (i = 0; i < n; i++) {
		strcpy(lista[i].codigo,"");
		strcpy(lista[i].nome,"");
		strcpy(lista[i].autor,"");
	}
}


//copia os livros do arquivo
void copialivroLista2Arquivo(livro *lista, int n, char *nomeArquivo) {
	FILE *procurador = fopen(nomeArquivo,"a");
	int i;


	for (i = 0; i < n; i++) {

		if (strcmp(lista[i].codigo,"") == 0) {
			break;
		}

		fprintf(procurador, "%s ", lista[i].codigo);
		fprintf(procurador, "%s ", lista[i].nome);
		fprintf(procurador, "%s\n", lista[i].autor);

		fflush(procurador);
	}

	fclose(procurador);
}

//salva
void inserelivro (livro *lista, int n) {
	int i;
	FILE *procurador = fopen("salvalivro.txt","a");
	char codigo[10];

	printf("codigo: ");
	scanf("%s", codigo);
	fflush(stdin);

	for (i = 0; i < n; i++) {

		if (strcmp(lista[i].codigo, codigo) == 0) {
			printf("Codigo já cadastrado. Voltando para menu\n");
			break;
		}

		if (strcmp(lista[i].codigo,"") == 0) {
			printf("Livro sera inserido na posicao %d.\n", i);

			strcpy(lista[i].codigo, codigo);

			printf("Nome: ");
			scanf("%s",lista[i].nome);
			fflush(stdin);

			printf("Autor: ");
			scanf("%s", lista[i].autor);
			fflush(stdin);

			fprintf(procurador, "%s ", lista[i].codigo);
			fprintf(procurador, "%s ", lista[i].nome);
			fprintf(procurador, "%s\n", lista[i].autor);

			fclose(procurador);

			break;
		}
	}

	if (i == n) printf("Lista cheia!\n");
}

//funçao que exibe os livros cadastrados
void exibelivro (livro *lista, int n) {
	int i;

	for (i = 0; i < n; i++) {
		if (strcmp(lista[i].codigo,"") == 0) {
			break;
		}
		printf("Codigo: %s\n", lista[i].codigo);
		printf("Nome     : %s\n", lista[i].nome);
		printf("Autor    : %s\n", lista[i].autor);
		printf("--------------------------------------\n");
	}
}


//funçao de cadastro de livros
void Cadastro_Livro() {
	livro lista[TAM];
	int opcao;

	inicializaLista(lista, TAM);

	do {
		printf("1 - Insere livro; 2 - Lista de livros; 3 - Remover livro; 4 - Sai\n");
		printf("Opcao: ");
		scanf("%d", &opcao);

		switch (opcao) {
			case 1 : printf("INSERCAO DE LIVRO!\n\n");
					 inserelivro(lista,TAM);
			         break;
			case 2 : printf("EXIBICAO DE LIVROS!\n\n");
			         exibelivro(lista, TAM);
			         break;
            case 3 :
                    break;
			case 4 :
			         break;
			default : printf("Opcao invalida!!\n");
		}

	} while (opcao != 4);


	//copiaAlunosLista2Arquivo(lista, TAM, "salvaAlunos.txt");


}
