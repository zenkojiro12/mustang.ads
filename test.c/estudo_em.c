#include <stdio.h>

    int main() {
        int num1, num2;
        int soma;
        printf("Digite dois números inteiros:\n");
    printf("Digite o primeiro número:\n");
        scanf("%d",&num1);
    printf("Digite o segundo número:\n");
        scanf("%d",&num2);
        soma = num1 + num2;
    printf("A soma de %d e %d é: %d\n",num1,num2,soma);
    return 0;
    }