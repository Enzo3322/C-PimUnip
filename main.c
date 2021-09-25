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
// ======================================================================= ===//

int registerAthlete() {
  system("clear");
  printf("|-----------------------------------------------| \n");
  printf("|                                               | \n");
  printf("|              CADASTRO DE ATLETA               | \n");
  printf("|                                               | \n");
  printf("|-----------------------------------------------| \n\n");

  printf("Nome do Atleta: ");
  scanf("%s", &name);
  printf("\n");
  printf("Modalidade: ");
  scanf("%s", & modality);
  printf("\n");
  printf("Pais de Origem: ");
  scanf("%s", & originCountry);
  printf("\n");
  printf("Nome da Equipe Olimipica do atleta: ");
  scanf("%s", & teamName);
  printf("\n");
  printf("Atleta Cadastrado com Sucesso!\n\n");
  return 1;
}

int registerTeam() {
  system("clear");
  printf("|-----------------------------------------------| \n");
  printf("|                                               | \n");
  printf("|               CADASTRO DE EQUIPE              | \n");
  printf("|                                               | \n");
  printf("|-----------------------------------------------| \n");
  
  printf("\nLocal de Treinamento: ");
  scanf("%s", & trainingLocal);
  printf("\n");
  printf("Data do Treinamento: ");
  scanf("%s", & trainingDate);
  printf("\n");
  printf("Local da Compenticao: ");
  scanf("%s", & competitionPlace);
  printf("\n");
  printf("Equipamentos Necessarios: ");
  scanf("%s", & outfit);
  printf("\n");
  printf("Alojamento da Delegacao: ");
  scanf("%s", & accommodationOfTeam);
  printf("\n");
  printf("Equipe Cadastrado com Sucesso!\n\n");
  return 1;
}

int listAthlete() {
   system("clear");
  printf("|-----------------------------------------------| \n");
  printf("|                                               | \n");
  printf("|         LISTA DE ATLETAS CADASTRADOS          | \n");
  printf("|                                               | \n");
  printf("|-----------------------------------------------| \n");
  printf("|\tNOME\tMODALIDADE\tPAIS\tEQUIPE\t \n");
  printf("|\t%s", name);
  printf("\t%s", modality);
  printf("\t\t%s", originCountry);
  printf("\t%s", teamName);
  printf("\n\n");
  
  float i;
  printf("Digite 1 para continuar\n");
  printf("Digite 2 para cadastrar um novo atleta\n");
  scanf("%s", i);

  if(i == 1){
    return 1;
  }else if(i == 2) {
    return registerAthlete();
  }else {
    return 0;
  }
  return 1;
}

int listTeam() {
  system("clear");
  printf("|-----------------------------------------------| \n");
  printf("|                                               | \n");
  printf("|          LISTA DE EQUIPES CADASTRADA          | \n");
  printf("|                                               | \n");
  printf("|-----------------------------------------------| \n");
  printf("%s\n", trainingLocal);
  printf("%s\n", trainingDate);
  printf("%s\n", competitionPlace);
  printf("%s\n", outfit);
  printf("%s\n\n", accommodationOfTeam);

  float i;
  printf("\nDigite 1 para continuar\n");
  printf("Digite 2 para cadastrar um novo atleta\n");
  scanf("%s", i);
  if(i == 1){
    return 1;
  }else if(i == 2) {
    return registerAthlete();
  }else {
    return 0;
  }
}

int menu() {
  system("clear");
  printf("|-----------------------------------------------| \n");
  printf("|                                               | \n");
  printf("|        SOFTWARE DE GESTAO OLIMPIADAS          | \n");
  printf("|                MENU DE OPCOES                 | \n");
  printf("|                                               | \n");
  printf("|-----------------------------------------------| \n");
  printf("|                                               | \n");
  printf("|    1 - Cadastrar Atletas                      | \n");
  printf("|                                               | \n");
  printf("|    2 - Cadastrar Cadastrar Equipe             | \n");
  printf("|                                               | \n");
  printf("|    3 - Exibir Atletas Cadastrados             | \n");
  printf("|                                               | \n");
  printf("|    4 - Exibir Membros de Equipe Cadastrados   | \n");
  printf("|                                               | \n");
  printf("|-----------------------------------------------| \n");
  int r = 0;
  int selected;
  scanf("%i", & selected);
  switch (selected) {
  case 1: r = registerAthlete();
    break;
  case 2: r = registerTeam();
    break;
  case 3: r = listAthlete();
    break;
  case 4: r = listTeam();
    break;
  default: r = 0;
    printf("Selecione uma opcao valida \n\n");
  }
   menu();
}

int handleLogin() {
  system("clear");
  printf("|-----------------------------------------------| \n");
  printf("|                                               | \n");
  printf("|                     LOGIN                     | \n");
  printf("|                                               | \n");
  printf("|-----------------------------------------------| \n");
  printf("|                                               | \n");
  printf("|      INSERIR USUARIO E SENHA PARA LOGAR       | \n");
  printf("|                                               | \n");
  printf("|-----------------------------------------------| \n\n");

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
    printf("\n             DADOS INVALIDOS! TENTE NOVAMENTE\n\n");
    handleLogin();

  }
}

void main() {
  handleLogin();
}