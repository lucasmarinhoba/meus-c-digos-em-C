#include <stdio.h>
int main () {
  int numero, soma;
  soma = 0;
  printf("Insira um numero:\n");
  scanf("%d", &numero);
  for (int i = 2; i <= numero; i += 2){
  soma += i;
  }
  printf("A soma dos numeros pares de 0 a N é: %d", soma);
  return 0;
}
