#include <stdio.h>

    int main()  {
        int idade, matricula;
        float altura;
        char nome[30];
    printf("=======================================================\n");
    printf("                recolhimento de dados\n");
    printf("=======================================================\n");
        printf("Digite a sua idade:\n");
        scanf("%d", &idade);

        printf("Qual o número da sua matrícula:\n");
        scanf("%d",&matricula);

        printf("Qual a sua altura:\n");
        scanf("%f",&altura);
        
        printf("Qual o seu nome:\n");
        scanf(" %[^\n]",nome);
    printf("=======================================================\n");
    printf("                   Dados cadastrados\n");
    printf("=======================================================\n");
    
        printf("A sua idade é: %d anos\n", idade);
        printf("O número da sua matrícula é: %d\n",matricula);
        printf("A sua altura é (em metros): %f\n",altura);
        printf("O seu nome é: %s\n",nome);

    return 0;

    }
