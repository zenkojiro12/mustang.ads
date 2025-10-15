#include <stdio.h>

    int main()  {  

        printf("==========================================================\n");
        printf("  Criando as Cartas do Super Trunfo - nível aventureiro\n");
        printf("==========================================================\n");

    // Carta 1
    char estado1; // "A" a "H"
    char codigo1[5]; // Exemplo: A01
    char cidade1[30];
    int populacao1; // em habitantes
    float area1;    // km²
    float pib1;     // em reais
    int turisticos1;

    // Carta 2
    char estado2;
    char codigo2[5];
    char cidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;

        printf("====================\n");
        printf("  Carta número 1\n");
        printf("====================\n");

    printf("Digite o Estado (A-H):\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01):\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    getchar(); 
    scanf("%[^\n]", cidade1);

    printf("Digite a área da cidade (em km²):\n");
    scanf("%f", &area1);

    printf("Digite a população (em habitantes):\n");
    scanf("%d", &populacao1);

    printf("Digite o PIB da cidade (em reais):\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turisticos1);

        printf("====================\n");
        printf("  Carta número 2\n");
        printf("====================\n");

    printf("Digite o Estado (A-H):\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01):\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    getchar();
    scanf("%[^\n]", cidade2);

    printf("Digite a área da cidade (em km²):\n");
    scanf("%f", &area2);

    printf("Digite a população (em habitantes):\n");
    scanf("%d", &populacao2);

    printf("Digite o PIB da cidade (em reais):\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &turisticos2);

    // Cálculos 

    float densidade1 = (float) populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;

    float densidade2 = (float) populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

        printf("=============================\n");
        printf("   Amostragem das cartas\n");
        printf("=============================\n");

    printf("\nCarta número 1:\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Área: %.2f km²\n", area1);
    printf("População: %d habitantes\n", populacao1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Pontos turísticos: %d\n", turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita1);

    printf("\nCarta número 2:\n");
    
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Área: %.2f km²\n", area2);
    printf("População: %d habitantes\n", populacao2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Pontos turísticos: %d\n", turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita2);

    return 0;

}
