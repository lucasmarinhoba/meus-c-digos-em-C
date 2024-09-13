#include <stdio.h>
int main() {
  int num,soma, maior, menor;
  soma = 0;
  maior = -2147483647;
  menor = 2147483647;
  printf("Insira um numero diferente de 0:\n");
  scanf("%d", &num);
  while (num != 0) {
    soma += num;
    printf("Digite um número (ou 0 para sair):\n");
    scanf("%d", &num);
    if (num == 0) {
    break;
    }

    if (num > maior) {
    maior = num;
    }

    if (num < menor) {
    menor = num;
    }
  }
  printf("Maior numero digitado: %d\n", maior);
  printf("Menor numero digitado: %d\n", menor);
  printf("Soma de todos os numeros: %d\n", soma);
  return 0;
}
