#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

enum Cor { Vermelho, Verde, Azul, Amarelo, Laranja };

int soma(int a, int b) {
    return a + b;
}

int main(void) {
  #define TRUE 1
  char nome[] = "Cleiton";
  int idade = 20;
  char sexo[1] = "m";
  double peso = 70.5;
  bool ativo = true;

  int val1, val2, adicao, subtracao, multiplicacao, divisao, modulo;

  int idadeTernario;

  int idadeIF;

  int dia;

  int a = 0;

  int b = 0;

  int c = 0;

  int m = 0;
  int n = 0;

  int *ponteiro; // Declaração de um ponteiro para um inteiro

  int numero1, numero2, res;

  // Constante
  #define PI 3.14159265

  // Comentário de uma linha

  /* Comentário
    de varias linhas */

  // ESCREVER NA TELA
  printf("### ESCREVER NA TELA ###\n");
  printf("Olá Mundo \n");
  printf("\n");

  // VARIÁVEIS
  printf("### VARIÁVEIS E TIPOS BÁSICOS ###\n");
  printf("Nome: %s\n", nome);
  printf("Idade: %d\n", idade);
  printf("Sexo: %s\n", sexo);
  printf("Peso: %f\n", peso);
  printf("Ativo: %d\n", ativo);
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

  adicao = val1 + val2; // Pode usar: (+, -, *, /, %)
  subtracao = val1 - val2;
  multiplicacao = val1 * val2;
  divisao = val1 / val2;
  modulo = val1 % val2;
  printf("Soma: %d \n", adicao);
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


  // ARRAY
  printf("### ARRAY ### \n");
  int numbers[] = {10, 20, 30, 40};
  int i;

  for (i = 0; i < 4; i++) {
    printf("%d\n", numbers[i]);
  }
  printf("\n");

  // MATRIZ
  printf("### MATRIZ ### \n");
  int matriz[3][3]; // Declaração de uma matriz 3x3 de inteiros

    // Inicialização da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i * 3 + j + 1;
        }
    }
    
  
    // Acesso aos elementos da matriz
    printf("Elementos da matriz:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
  printf("\n");

  // FUNCAO
  printf("### FUNCAO ### \n");
  printf("Digite o valor 1: ");
  scanf("%d", &m);

  printf("Digite o valor 2: ");
  scanf("%d", &n);

  int resultado = soma(m, n);
  printf("A soma de %d e %d é igual a %d\n", m, n, resultado);
  printf("\n");

  // PROCEDURE
  printf("### PROCEDURE ### \n");
  printf("Não tem PROCEDURE \n");
  printf("\n");

  // PONTEIRO
  printf("### PONTEIRO ### \n");
  ponteiro = (int *)malloc(sizeof(int)); // Alocação de memória dinamicamente para um inteiro

  if (ponteiro == NULL) {
    printf("Erro na alocação de memória.\n");
    return 1;
  }

  *ponteiro = 42; // Atribui um valor à variável apontada

  printf("Valor da variável apontada: %d\n", *ponteiro);
  
  free(ponteiro); // Liberação da memória alocada
  printf("\n");

  // TRY CATCH
  printf("### TRY ### \n");
  printf("Informe o valor 1 para o dividendo: ");
  scanf("%d", &numero1);

  printf("Informe o valor 2 para o divisor: ");
  scanf("%d", &numero2);

  /*
  try {
      if (numero2 == 0) {
          throw "Divisão por zero não é permitida!";
      }
      res = numero1 / numero2;
      printf("Resultado da divisão: %d\n", res);
  } catch (const char* mensagem) {
      printf("Ocorreu uma exceção: %s\n", mensagem);
  }
  */
  printf("\n");

  // ENUM
  printf("### ENUM ### \n");
  enum Cor minhaCor = Azul;

  // Verificar o valor da variável enum e imprimir uma mensagem correspondente
  switch (minhaCor) {
      case Vermelho:
          printf("Minha cor favorita é vermelho.\n");
          break;
      case Verde:
          printf("Minha cor favorita é verde.\n");
          break;
      case Azul:
          printf("Minha cor favorita é azul.\n");
          break;
      case Amarelo:
          printf("Minha cor favorita é amarelo.\n");
          break;
      case Laranja:
          printf("Minha cor favorita é laranja.\n");
          break;
      default:
          printf("Eu não tenho uma cor favorita.\n");
  }

  return 0;
}
