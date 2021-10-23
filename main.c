#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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
 system("cls");


  printf("|-----------------------------------------------|\n");
  printf("|                                               | \n");
  printf("|              CADASTRO DE ATLETA               | \n");
  printf("|                                               | \n");
  printf("|-----------------------------------------------| \n");
  printf("|             *  EX: jane_doe  *                | \n");
  printf("|-----------------------------------------------| \n");

  printf(" \n\n");

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
  getch();
  return 1;
}

int registerTeam() {
 system("clear");
 system("cls");


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
  getch();

  return 1;
}

int registerPosition() {
  system("clear");
  system("cls");
  printf("|-----------------------------------------------| \n");
  printf("|                                               | \n");
  printf("|               CADASTRO DE MEDALHAS            | \n");
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
  printf("Pontuação cadastrada com Sucesso!\n\n");
  getch();

  return 1;
}

int listAthlete() {
  system("clear");
  system("cls");
  printf("|-----------------------------------------------| \n");
  printf("|                                               | \n");
  printf("|          LISTA DE ATLETA CADASTRADO           | \n");
  printf("|                                               | \n");
  printf("|-----------------------------------------------| \n");
  printf("| NOME: %s                                      | \n", name);
  printf("| MODALIDADE: %s                                | \n", modality);
  printf("| PAIS: %s                                      | \n", originCountry);
  printf("| EQUIPE: %s                                    | \n", teamName);
  printf("|-----------------------------------------------| \n\n");
  getch();
  return 1;
}

int listTeam() {
  system("clear");
  system("cls");
  printf("|-----------------------------------------------| \n");
  printf("|                                               | \n");
  printf("|          LISTA DE EQUIPE CADASTRADA           | \n");
  printf("|                                               | \n");
  printf("|-----------------------------------------------| \n");
  printf("| LOCAL DE TREINO: %s                           | \n", trainingLocal);
  printf("| DATA DE TREINAMENTO: %s                       | \n", trainingDate);
  printf("| LOCAL DE COMPETICAO: %s                       | \n", competitionPlace);
  printf("| EQUIPAMENTOS NECESSARIOS: %s                  | \n", outfit);
  printf("| ALOJAMENTO: %s                                | \n", accommodationOfTeam);
  printf("|-----------------------------------------------| \n");
  getch();
  return 1;
}

int createLog() {

  FILE*relatorio;
  relatorio = fopen("relatorio.txt", "w");

  if (relatorio == NULL)
    printf("ERRO: Nao foi possivel criar o arquivo");

  fprintf(relatorio, "|-----------------------------------------------| \n");
  fprintf(relatorio, "|                                               | \n");
  fprintf(relatorio, "|                    RELATORIO                  | \n");
  fprintf(relatorio, "|                                               | \n");
  fprintf(relatorio, "|-----------------------------------------------| \n");
  fprintf(relatorio, "| Nome: %s \n", name);
  fprintf(relatorio, "| Modalidade: %s \n", modality);
  fprintf(relatorio, "| País de origem: %s \n", originCountry);
  fprintf(relatorio, "| Nome da equipe: %s \n", teamName);
  fprintf(relatorio, "| Local de treinamento: %s \n", trainingLocal);
  fprintf(relatorio, "| Data do treinamento: %s \n", trainingDate);
  fprintf(relatorio, "| Local da competição: %s \n", competitionPlace);
  fprintf(relatorio, "| Equipamento: %s \n", outfit);
  fprintf(relatorio, "| Alojamento: %s \n", accommodationOfTeam);
  fprintf(relatorio, "|-----------------------------------------------| \n");

    fclose(relatorio);

  return 0;
}

int menu() {
  system("clear");
  system("cls");
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
  printf("|    5 - Gerar Relatorio                        | \n");
  printf("|                                               | \n");
  printf("|-----------------------------------------------| \n\n");
  printf("   Selecione uma opcao: ");
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
  case 5: r = createLog();
    break;
  default: r = 0;
    printf("Selecione uma opcao valida \n\n");
  }
   menu();
}

int handleLogin() {
  system("clear");
  system("cls");
  printf("|-----------------------------------------------| \n");
  printf("|                                               | \n");
  printf("|                     LOGIN                     | \n");
  printf("|                                               | \n");
  printf("|-----------------------------------------------| \n");
  printf("|                                               | \n");
  printf("|      INSERIR USUARIO E SENHA PARA LOGAR       | \n");
  printf("|                                               | \n");
  printf("|-----------------------------------------------| \n");

  char log[15] = "admin";
  char log1[15];
  char pw[15] = "admin";
  char pw1[15];
  printf("Login: ");
  scanf("%s", log1);
  printf("Senha: ");
  scanf("%s", pw1);

  if (strcmp(log, log1) == 0 && strcmp(pw, pw1) == 0) {
    menu();
  } else {
    printf("\n     DADOS INVALIDOS! TENTE NOVAMENTE\n\n");
    getch();
    handleLogin();

  }
}


void main() {
  handleLogin();
}

