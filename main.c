#include <stdio.h>
int soma(int num1, int num2);

int main(void) {

  char nome[] = "Cleiton";
  int idade = 20;
  char sexo[1] = "m";
  double peso = 70.5;
  // bool ativo = true;

  int val1, val2, soma, subtracao, multiplicacao, divisao, modulo;

  int idadeTernario;

  int idadeIF;

  int dia;

  int a = 0;

  int b = 0;

  int c = 0;

  int m = 0;
  int n = 0;

// Constante
#define PI 3.14159265

  // Comentário de uma linha

  /* Comentário
    de varias linhas */

  // Escrever na tela
  printf("### Escrever na tela ###\n");
  printf("Olá Mundo \n");
  printf("\n");

  // VARIÁVEIS
  printf("### VARIÁVEIS ###\n");
  printf("Nome: %s\n", nome);
  printf("Idade: %d\n", idade);
  printf("Sexo: %s\n", sexo);
  printf("Peso: %f\n", peso);
  // printf("%s", ativo);
  printf("\n");

  // CONSTANTE
  printf("### CONSTANTE ###\n");
  printf("PI: %f \n", PI);
  printf("\n");

  // OPERACOES
  printf("#### OPERACOES #### \n");
  printf("Informe o valor 1: ");
  scanf("%d", &val1);

  printf("Informe o valor 2: ");
  scanf("%d", &val2);

  soma = val1 + val2; // Pode usar: (+, -, *, /, %)
  subtracao = val1 - val2;
  multiplicacao = val1 * val2;
  divisao = val1 / val2;
  modulo = val1 % val2;
  printf("Soma: %d \n", soma);
  printf("Subtracao: %d \n", subtracao);
  printf("Multiplicacao: %d \n", multiplicacao);
  printf("Divisao: %d \n", divisao);
  printf("Modulo: %d \n", modulo);
  printf("\n");

  // TERNARIO
  printf("### TERNARIO \n");
  printf("Digite um número: ");
  scanf("%d", &idadeTernario);
  idadeTernario >= 18 ? printf("Maior de idade\n") : printf("Menor de idade\n");
  printf("\n");

  // IF ELSE IF ELSE
  printf("### IF ELSE IF ELSE \n");
  printf("Informe a idade: ");
  scanf("%d", &idadeIF);
  if (idadeIF < 12) {
    printf("CRIANCA\n");
  } else if ((idadeIF >= 12) && (idadeIF < 18)) {
    printf("ADOLESCENTE\n");
  } else {
    printf("ADULTO\n");
  }
  printf("\n");

  // CASE
  printf("### SWITCH CASE \n");
  printf("Informe um numero 1 - 7 para semana: ");
  scanf("%d", &dia);

  switch (dia) {

  case 1:
    printf("Domingo");
    break;

  case 2:
    printf("Segunda");
    break;

  case 3:
    printf("Terça");
    break;

  case 4:
    printf("Quarta");
    break;

  case 5:
    printf("Quinta");
    break;

  case 6:
    printf("Sexta");
    break;

  case 7:
    printf("Sabado");
    break;

  default:
    printf("Valor nao existente");
    break;
  }
  printf("\n");
  printf("\n");

  // REPEAT
  printf("### REPEAT ### \n");
  printf("Não tem REPEAT \n");
  printf("\n");

  // DO WHILE
  printf("### DO WHILE ### \n");
  do {
    printf("%d\n", a);
    a = a + 1;
  } while (a < 10);
  printf("\n");

  // WHILE
  printf("### WHILE ###");
  while (b < 10) {
    printf("%d\n", b);
    b = b + 1;
  }
  printf("\n");

  // FOR
  printf("### FOR ### \n");
  for (c = 0; c < 10; c++) {
    printf("%d\n", c);
  }

  printf("\n");

  // FUNCAO
  /**
    printf("###FUNCAO### \n");
    printf("Digite o valor 1\n");
    scanf("%d", &m);

    printf("Digite o valor 2\n");
    scanf("%d", &n); **/

  // printf("Soma %d\n", soma(m,n));

  return 0;
}

int soma(int num1, int num2) { return num1 + num2; }
