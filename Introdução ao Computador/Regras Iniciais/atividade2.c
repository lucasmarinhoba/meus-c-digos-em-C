#include <stdio.h>
int main() {
    int num1, num2, media;
    printf("Insira o primeiro número:\n");
    scanf("%d", &num1);
    printf("Insira o segundo número:\n");
    scanf("%d", &num2);
    media = (num1 + num2)/2;
    printf("A media dos numeros foi:%d", media);
    return 0;
}
