#ifndef livrariaFuturo_h
#define livrariaFuturo_h
#include "livros.h"
#define TAM 1000


//Chamada de fun��es externas

struct VarG {
    int Op;
    char Cd;

}; //Vari�veis do tipo Global

struct Cadastro {
    char Nome[25];
    char Email[35];
    char Cpf[15];

}; // Vari�veis do tipo Cadastro.Pessoa

FILE* DB; //Ponteiro do Banco de dados

struct VarG Global;
struct Cadastro Pessoa;

void  Cadastro_Usuario();

void Listar();

#endif
