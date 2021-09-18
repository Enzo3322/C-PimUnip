#include <stdlib.h>
#include <string.h>
#include <stdio.h>  
#include<locale.h>

// =========================== globals vars =================================//
// variables with global scope to access valueof content: cadastro de atleta
char name[100];
char modality[100];
char origincountry[100];
char teamname[100];

// variables with global scope to access valueof content: cadastro de equipe
char traininglocal[100];
char trainingdate[100];
char competitionplace[100];
char outfit[100];
char accommodationofteam[100];

char temp;
// ============================================================================//

// TODO: Criar uma função que recebe 



void cadastroAtleta() {
    system("clear");
    printf("╔══════════════════════════════════════════════════════════════════════╗ \n");
    printf("║                                                                      ║ \n");
    printf("║                           CADASTRO DE ATLETA                         ║ \n");
    printf("║                                                                      ║ \n");
    printf("╚══════════════════════════════════════════════════════════════════════╝ \n\n");

    printf("Nome do Atleta: ");
    scanf("%c", &temp);
    fgets(name, 100, stdin);
    printf("\n");

    printf("Modalidade: ");
    scanf("%c", &temp);
    fgets(modality, 100, stdin);
    printf("\n");

    printf("Pais de Origem: ");
    scanf("%c", &temp);
    fgets(origincountry, 100, stdin);
    printf("\n");

    printf("Nome da Equipe Olimipica do atleta: ");
    scanf("%c", &temp);
    fgets(teamname, 100, stdin);
    printf("\n");

    printf("Atleta Cadastrado com Sucesso!\n\n");  


}

void cadastroEquipe() {
    printf("\nLocal de Treinamento:");
    scanf("%c",&temp);
    fgets(traininglocal,100,stdin );
    printf("\n");

    printf("Data do Treinamento:  EX: 11/10/2021 ");
    scanf("%c",&temp);
    fgets(trainingdate,100,stdin);
    printf("\n");

    printf("Local da Compenticao:");
    scanf("%c",&temp);
    fgets(competitionplace,100,stdin);
    printf("\n");
    
    printf("Equipamentos Necessarios: ");
    scanf("%c",&temp);
    fgets(outfit,100,stdin);
    printf("\n");

    printf("Alojamento da Delegacao: ");
    scanf("%c",&temp);
    fgets(accommodationofteam,100,stdin);
    printf("\n");

    printf("Equipe Cadastrado com Sucesso!\n\n");  
}

void listAtleta() {
    printf("Listar Atleta");
}

void listEquipe() {
    printf("Listar Equipe");   
}

int menu() {
    system("clear");
    printf("╔══════════════════════════════════════════════════════════════════════╗ \n");
    printf("║                                                                      ║ \n");
    printf("║                     GESTAO DE TAREFAS OLIMPIADAS                     ║ \n");
    printf("║                             MENU DE OPCOES                           ║ \n");
    printf("╠══════════════════════════════════════════════════════════════════════╣ \n");
    printf("║                                                                      ║ \n");
    printf("║                 1 - Cadastrar Atletas                                ║ \n");
    printf("║                                                                      ║ \n");
    printf("║                 2 - Cadastrar Cadastrar Equipe                       ║ \n");
    printf("║                                                                      ║ \n");
    printf("║                 3 - Exibir Atletas Cadastrados                       ║ \n");
    printf("║                                                                      ║ \n");
    printf("║                 4 - Exibir Membros de Equipe Cadastrados             ║ \n");
    printf("║                                                                      ║ \n");
    printf("╚══════════════════════════════════════════════════════════════════════╝ \n\n");

    int selected;
    scanf("%d", &selected);
    switch(selected){
        case 1 : cadastroAtleta();
            break;
        case 2 : cadastroEquipe();
            break;
        case 3 : listAtleta();
            break;
        case 4 : listEquipe();
            break;
        default : printf("Selecione uma opcao válida");
    }
}

void login(){
    printf("╔══════════════════════════════════════════════════════════════════════╗ \n");
    printf("║                                                                      ║ \n");
    printf("║                                LOGIN                                 ║ \n");
    printf("║                                                                      ║ \n");
    printf("╠══════════════════════════════════════════════════════════════════════╣ \n");
    printf("║                                                                      ║ \n");
    printf("║                   INSEIR USUARIO E SENHA PARA LOGAR                  ║\n");
    printf("║                                                                      ║ \n");
    printf("╚══════════════════════════════════════════════════════════════════════╝ \n\n");

    char login[15] = "admin";
    char login1[15];
    char senha[15] = "admin";
    char senha1[15];        
    printf("Digite o Login: ");
    scanf("%s", login1);
    printf("Digite a Senha: ");
    scanf("%s", senha1);

    if (strcmp(login, login1) == 0 && strcmp(senha, senha1) == 0){
        menu();
    } else{
        printf("\n             DADOS INVALIDOS!\n\n");
    }
}


void main () {
    system("clear");
    login();
   
}