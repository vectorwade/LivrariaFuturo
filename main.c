
#include "main.h"
#define TAM 1000

typedef struct{
    char login[30]; // vetor login da struct pessoa
    char senha[30];
} pessoa; pessoa p[1];




int main() {

    int opc = 0;
    int cont_pessoas=0;
    int cont_cadastro=0;

    char login[30]; // responsável por armazenar login e senha
    char senha[30];



    strcpy(p[0].login, "victor");
    strcpy(p[0].senha, "12345678");
   // strcpy(p[1].login, "Admin");
    //strcpy(p[1].senha, "Master");

    int login_efetuado = 0; //0 - Falso e  1 - Verdadeiro

    printf("\nAcesso ao portal\n");

    while(!login_efetuado){

    printf("\nDigite o seu login:");
    scanf("%s", login);

    printf("\nsenha:");
    scanf("%s", senha);

    if ((strcmp(login,p[0].login)==0) && (strcmp(senha,p[0].senha)==0)|| (strcmp(login,p[1].login)==0) && (strcmp(senha,p[1].senha)==0)   ){ // A função strcmp é responsável por comparar string com string
        printf("Usuário logado"); // se os vetores de dentro da struct tiver os mesmos dados do vetor interno da função main, usuário será logado.
        login_efetuado = 1;
    }else{
        printf("\nLogin e/ou senha incorretos!\n\nDigite novamente\n");
    }



    do
    {

    system("cls");
    printf(" Painel de cadastro\n");
    printf("                 \n\n");

    printf("[1] - Cadastrar\n");
    printf("[2] - Livraria\n");
    printf("[3] - Listar\n");
    printf("[4] - Encerrar\n");
    printf("\n");
    printf("Opcao: ");
    scanf("%d", &Global.Op);
    getchar();

    switch (Global.Op) {
        case 1:
            Cadastro_Usuario(); //chama a funcao de castro de usuarios

        case 2:
            Cadastro_Livro(); //chama o modulo de cadastro de livros
            break;

        case 3:
            Listar(); //chama a funcao que mostra os usuarios cadastrados
            break;

        case 4:
            exit(0);
            /*system("cls");
            printf("-----------------\n");
            printf(" Fim \n");
            printf("----------------\n\n");*/
            break;

        default:
            printf("digite outra opcao\n");
            sleep(1);
            //main();
            break;

    }
    }while(opc != 4);

    }
    return 0;
}
