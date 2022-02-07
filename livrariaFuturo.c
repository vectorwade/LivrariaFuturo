#include "livrariaFuturo.h"

//cadastra os usuarios
void  Cadastro_Usuario() {
    system("cls");
    DB = fopen("dados.txt", "a"); //abre o arquivo para armazenar os dados

    if(DB == NULL) { //verifica o local de armazenamento
        printf("\nErro no Banco\n");
        return ;

    } else {

        printf("\n");
        printf(" CADASTRO\n");


        printf("\nNome: ");
        fgets(Pessoa.Nome, 25, stdin); //Recebe o nome

        printf("\nE-mail: ");
        fgets(Pessoa.Email, 35, stdin); //Recebe o Email

        printf("\nDigite seu CPF: ");
        fgets(Pessoa.Cpf, 15, stdin); //Recebe o Cpf

        system("cls");

        printf("Finalizar cadastro? [s/n] : ");
        scanf("%c", &Global.Cd); //Conclusão do cadastro

        if(Global.Cd == 's') {
            fprintf(DB, "Nome: %sE-mail: %sCPF: %s", Pessoa.Nome, Pessoa.Email, Pessoa.Cpf);
            fprintf(DB, "----------------------\n"); //Salva os dados

            fclose(DB); //Fecha o arquivo

            system("cls");
            printf("\n");
            printf(" Cadastro Concluído \n");
            printf("\n");

            sleep(1);
            //main();

        } else if(Global.Cd == 'n') {
            system("cls");
            printf("Cadastro Cancelado.\nVoltando ao Menu Principal\n");
            fclose(DB); //Fecha o arquivo
            getchar();
            sleep(1);
            //main();

        } else {
            printf("Valor inválido. Tente novamente\n");
            fclose(DB); //Fecha DB
            sleep(1);
            Cadastro_Usuario();

        }

    }

}

//lista os usuarios cadastrados e salvos em arquivo
void Listar() {
    system("cls");
    DB = fopen("dados.txt", "r"); //Abre o arquivo com os dados de usuario para leitura

    if(DB == NULL) { //Verificação do Banco de dados
        printf("\nErro no Banco de Dados\n");
        return ;

    } else {
        printf("\n");
        printf(" Usuarios cadastrados\n");
        printf("\n\n");

        char listagem[250]; //String geral para os dados

        while(fgets(listagem, 250, DB) != NULL) {
            printf("%s", listagem);

        } //Considera todos os dados como uma String e exibe na tela

        fclose(DB);

        printf("\nVoltar ao Menu Principal? [s/n]: ");
        scanf("%c", &Global.Cd);

        if(Global.Cd == 's') {
            //main();

        } else if(Global.Cd != 's' && Global.Cd != 'n') {
            printf("Valor inválido.\n\n");
            sleep(1);
           // main();

        }

    }


}

