#include <stdio.h>
int main() {
    int num1, num2, media;
    printf("Insira o primeiro n�mero:\n");
    scanf("%d", &num1);
    printf("Insira o segundo n�mero:\n");
    scanf("%d", &num2);
    media = (num1 + num2)/2;
    printf("A media dos numeros foi:%d", media);
    return 0;
}
