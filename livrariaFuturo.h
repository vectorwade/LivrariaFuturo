#ifndef livrariaFuturo_h
#define livrariaFuturo_h
#include "livros.h"
#define TAM 1000


//Chamada de funções externas

struct VarG {
    int Op;
    char Cd;

}; //Variáveis do tipo Global

struct Cadastro {
    char Nome[25];
    char Email[35];
    char Cpf[15];

}; // Variáveis do tipo Cadastro.Pessoa

FILE* DB; //Ponteiro do Banco de dados

struct VarG Global;
struct Cadastro Pessoa;

void  Cadastro_Usuario();

void Listar();

#endif
