#include <stdio.h>

int main()  {

    printf("==============================================================\n");
    printf("    Criando as Cartas do Super Trunfo - nível avançado\n");
    printf("==============================================================\n");

    //Carta 1
    char estado1; 
    char codigo1[5]; 
    char cidade1[30];
    int populacao1;
    float area1;   // km²
    float pib1;    // reais
    int turisticos1;

    // Carta 2 
    char estado2; 
    char codigo2[5]; 
    char cidade2[30];
    int populacao2;// Habitantes
    float area2;   // km²
    float pib2;    // reais
    int turisticos2;

        printf("====================\n");
        printf("  Carta número 1\n");
        printf("====================\n");

    printf("Digite o Estado (A-H):\n");
    scanf(" %c", &estado1);

    printf("Digite o código da sua carta (ex:A01):\n ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n ");
    getchar(); // limpar o enter
    scanf("%[^\n]", cidade1);

    printf("Digite a área da cidade (em km²):\n");
    scanf("%f", &area1);

    printf("Digite a população (em habitantes):\n");
    scanf("%d", &populacao1);

    printf("Digite o PIB da cidade (em reais):\n ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos tem a cidade:\n ");
    scanf("%d", &turisticos1);

        printf("=====================\n");
        printf("  Carta número 2\n");
        printf("=====================\n");

    printf("Digite o Estado (A-H):\n ");
    scanf(" %c", &estado2);

    printf("Digite o código da sua carta (ex:B01):\n ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n ");
    getchar();
    scanf("%[^\n]", cidade2);

    printf("Digite a área da cidade (em km²):\n ");
    scanf("%f", &area2);

    printf("Digite a população (em habitantes):\n ");
    scanf("%d", &populacao2);

    printf("Digite o PIB da cidade (em reais):\n ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos tem a cidade:\n ");
    scanf("%d", &turisticos2);

    //Cálculos 
    float densidade1 = (float) populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;

    float densidade2 = (float) populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    float comparacao_das_cartas1 = populacao1 + area1 + pib1 + turisticos1 + densidade1 + pib_per_capita1;
    float comparacao_das_cartas2 = populacao2 + area2 + pib2 + turisticos2 + densidade2 + pib_per_capita2;

        printf("==========================\n");
        printf("  Amostragem das cartas\n");
        printf("==========================\n");

    printf("\n Carta número 1:\n");
    
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

        printf("=========================\n");
        printf(" COMPARAÇÃO DAS CARTAS\n");
        printf("=========================\n");
        
    char vencedor[20];

    if (populacao1 > populacao2)
        vencedor = "Carta 1";
    else if (populacao2 > populacao1)
        vencerdor = "Carta 2";
    else
        printf("População: Empate!\n");

    
    printf("População: %s venceu\n",vencedor);




    if (area1 > area2)
        printf("Área: Carta 1 venceu!\n");
    else if (area2 > area1)
        printf("Área: Carta 2 venceu!\n");
    else
        printf("Área: Empate!\n");

    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu!\n");
    else if (pib2 > pib1)
        printf("PIB: Carta 2 venceu!\n");
    else
        printf("PIB: Empate!\n");

    if (turisticos1 > turisticos2)
        printf("Pontos turísticos: Carta 1 venceu!\n");
    else if (turisticos2 > turisticos1)
        printf("Pontos turísticos: Carta 2 venceu!\n");
    else
        printf("Pontos turísticos: Empate!\n");

    if (densidade1 < densidade2)
        printf("Densidade populacional: Carta 1 venceu!\n");
    else if (densidade2 < densidade1)
        printf("Densidade populacional: Carta 2 venceu!\n");
    else
        printf("Densidade populacional: Empate!\n");

    if (pib_per_capita1 > pib_per_capita2)
        printf("PIB per capita: Carta 1 venceu!\n");
    else if (pib_per_capita2 > pib_per_capita1)
        printf("PIB per capita: Carta 2 venceu!\n");
    else
        printf("PIB per capita: Empate!\n");

    if (comparacao_das_cartas1 > comparacao_das_cartas2)
        printf("Resultado da comparação: Carta 1 venceu!\n");
    else if (comparacao_das_cartas2 > comparacao_das_cartas1)
        printf("Resultado da comparação: Carta 2 venceu!\n");
    else
        printf("Resultado da comparação: Empate!\n");

    return 0;
    
}