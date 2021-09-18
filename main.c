#include <stdlib.h>
#include <string.h>
#include <stdio.h>  //armazena informações de entrada e saida


void menu(int i) {
    switch(i) {
        case 1:
            system("clear");
            printf("|======================================================================| \n");
            printf("|                                                                      | \n");
            printf("|                     GESTAO DE TAREFAS OLIMPIADAS                     | \n");
            printf("|                             MENU DE OPCOES                           | \n");
            printf("|----------------------------------------------------------------------| \n");
            printf("|                                                                      | \n");
            printf("|                 1 - Cadastrar Atletas                                | \n");
            printf("|                 2 - Cadastrar Cadastrar Equipe                       | \n");
            printf("|                 3 - Exibir Atletas Cadastrados                       | \n");
            printf("|                 4 - Exibir Membros de Equipe Cadastrados             | \n");
            printf("|                                                                      | \n");
            printf("|======================================================================| \n\n");
        break;
        case 2:
            system("clear");
            printf("|======================================================================| \n");
            printf("|                                                                      | \n");
            printf("|                     GESTAO DE TAREFAS OLIMPIADAS                     | \n");
            printf("|                             MENU DE OPCOES                           | \n");
            printf("|----------------------------------------------------------------------| \n");
            printf("|                                                                      | \n");
            printf("|                 1 - Voltar ao menu inicial.                          | \n");
            printf("|                                                                      | \n");
            printf("|======================================================================| \n\n");
        break;
    }
}

// variables with global scope to access valueof content: cadastro de atleta
char name[100];
char modality[100];
char origincountry[100];
char teamname[100];
char temp;

void cadastroAtleta() {
    printf("Nome do Atleta:\n ");
    scanf("%c",&temp);
    fgets(name,100,stdin);
    printf("\n");

    
    printf("Modalidade: \n");
    scanf("%c",&temp);
    fgets(modality,100,stdin);
    printf("\n");

    
    printf("Pais de Origem: \n");
    scanf("%c",&temp);
    fgets(origincountry,100,stdin);
    printf("\n");


    printf("Nome da Equipe Olimipica do atleta: \n");
    scanf("%c",&temp);
    fgets(teamname,100,stdin);
    printf("\n");

}


// variables with global scope to access valueof content: cadastro de equipe
char traininglocal[100];
char trainingdate[100];
char competitionplace[100];
char outfit[100];
char accommodationofteam[100];
char temp;


void cadastroEquipe() {
    printf("Local de Treinamento:\n");
    scanf("%c",&temp);
    fgets(traininglocal,100,stdin );
    printf("\n");
    

    printf("Data do Treinamento:  EX: 11/10/2021 \n");
    scanf("%c",&temp);
    fgets(trainingdate,100,stdin);
    printf("\n");


    printf("Local da Compenticao:\n");
    scanf("%c",&temp);
    fgets(competitionplace,100,stdin);
    printf("\n");

    
    printf("Equipamentos Necessarios:\n");
    scanf("%c",&temp);
    fgets(outfit,100,stdin);
    printf("\n");


    printf("Alojamento da Delegacao:\n");
    scanf("%c",&temp);
    fgets(accommodationofteam,100,stdin);
    printf("\n");

}

void listAtleta() {
    menu(2);
    printf("PROGRAMA BEM PODEROSO\n");
}

void listEquipe() {
    menu(2);
    printf("PROGRAMA BEM PODEROSO\n");
}


void main () {
    menu(1);

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

    system("pause");
}

  