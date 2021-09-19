#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>

// =========================== globals vars =================================//
// variables with global scope to access valueof content: cadastro de atleta
char name[100];
char modality[100];
char originCountry[100];
char teamName[100];

// variables with global scope to access valueof content: cadastro de equipe
char trainingLocal[100];
char trainingDate[100];
char competitionPlace[100];
char outfit[100];
char accommodationOfTeam[100];

char temp;
// ============================================================================//

// TODO: Criar uma função que recebe 

int registerAthlete() {
  system("clear");
  printf("╔══════════════════════════════════════════════════════════════════════╗ \n");
  printf("║                                                                      ║ \n");
  printf("║                           CADASTRO DE ATLETA                         ║ \n");
  printf("║                                                                      ║ \n");
  printf("╚══════════════════════════════════════════════════════════════════════╝ \n\n");

  printf("Nome do Atleta: ");
  scanf("%c", & temp);
  fgets(name, 100, stdin);
  printf("\n");

  printf("Modalidade: ");
  scanf("%c", & temp);
  fgets(modality, 100, stdin);
  printf("\n");

  printf("Pais de Origem: ");
  scanf("%c", & temp);
  fgets(originCountry, 100, stdin);
  printf("\n");

  printf("Nome da Equipe Olimipica do atleta: ");
  scanf("%c", & temp);
  fgets(teamName, 100, stdin);
  printf("\n");

  printf("Atleta Cadastrado com Sucesso!\n\n");
  return 1;
}

int registerTeam() {
  system("clear");
  printf("╔══════════════════════════════════════════════════════════════════════╗ \n");
  printf("║                                                                      ║ \n");
  printf("║                           CADASTRO DE EQUIPE                         ║ \n");
  printf("║                                                                      ║ \n");
  printf("╚══════════════════════════════════════════════════════════════════════╝ \n\n");
  printf("\nLocal de Treinamento: ");
  scanf("%c", & temp);
  fgets(trainingLocal, 100, stdin);
  printf("\n");

  printf("Data do Treinamento: ");
  scanf("%c", & temp);
  fgets(trainingDate, 100, stdin);
  printf("\n");

  printf("Local da Compenticao: ");
  scanf("%c", & temp);
  fgets(competitionPlace, 100, stdin);
  printf("\n");

  printf("Equipamentos Necessarios: ");
  scanf("%c", & temp);
  fgets(outfit, 100, stdin);
  printf("\n");

  printf("Alojamento da Delegacao: ");
  scanf("%c", & temp);
  fgets(accommodationOfTeam, 100, stdin);
  printf("\n");

  printf("Equipe Cadastrado com Sucesso!\n\n");
  return 1;
}

int listAthlete() {
  printf("╔══════════════════════════════════════════════════════════════════════╗ \n");
  printf("║                                                                      ║ \n");
  printf("║                     LISTA DE ATLETAS CADASTRADOS                     ║ \n");
  printf("║                                                                      ║ \n");
  printf("╚══════════════════════════════════════════════════════════════════════╝ \n\n");
  printf("%s", name);
  printf("%s", modality);
  printf("%s", originCountry);
  printf("%s", teamName);

  return 1;
}

int listTeam() {
  printf("╔══════════════════════════════════════════════════════════════════════╗ \n");
  printf("║                                                                      ║ \n");
  printf("║                      LISTA DE EQUIPES CADASTRADAS                    ║ \n");
  printf("║                                                                      ║ \n");
  printf("╚══════════════════════════════════════════════════════════════════════╝ \n\n");
  printf("%s", trainingLocal);
  printf("%s", trainingDate);
  printf("%s", competitionPlace);
  printf("%s", outfit);
  printf("%s", accommodationOfTeam);
  return 1;
}

int menu() {
  system("clear");
  printf("╔══════════════════════════════════════════════════════════════════════╗ \n");
  printf("║                                                                      ║ \n");
  printf("║                     GESTÃO DE TAREFAS OLIMPÍADAS                     ║ \n");
  printf("║                             MENU DE OPÇÕES                           ║ \n");
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

  int r = 0;
  int selected;
  scanf("%d", & selected);
  switch (selected) {
  case 1:
    r = registerAthlete();
    break;
  case 2:
    r = registerTeam();
    break;
  case 3:
    r = listAthlete();
    break;
  case 4:
    r = listTeam();
    break;
  default:
    r = 0;
    printf("Selecione uma opção válida");
  }
   menu();
}

void handleLogin() {
  printf("╔══════════════════════════════════════════════════════════════════════╗ \n");
  printf("║                                                                      ║ \n");
  printf("║                                LOGIN                                 ║ \n");
  printf("║                                                                      ║ \n");
  printf("╠══════════════════════════════════════════════════════════════════════╣ \n");
  printf("║                                                                      ║ \n");
  printf("║                   INSEIR USUÁRIO E SENHA PARA LOGAR                  ║ \n");
  printf("║                                                                      ║ \n");
  printf("╚══════════════════════════════════════════════════════════════════════╝ \n\n");

  char log[15] = "admin";
  char log1[15];
  char pw[15] = "admin";
  char pw1[15];
  printf("Digite o Login: ");
  scanf("%s", log1);
  printf("Digite a Senha: ");
  scanf("%s", pw1);

  if (strcmp(log, log1) == 0 && strcmp(pw, pw1) == 0) {
    menu();
  } else {
    system("clear");
    printf("\n                       DADOS INVALIDOS! TENTE NOVAMENTE\n\n");
    handleLogin();

  }
}

void main() {
  system("clear");
  handleLogin();

}