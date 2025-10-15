#include <stdio.h>

    int main()  {

        printf("======================================================================\n");
        printf("        Criando as Cartas do Super Trunfo - nível novato\n");
        printf("======================================================================\n");

    //Carta 1
    char estados; // "A" a "H"
    char codigo_da_carta[04]; // exemplo - A01,B01.....
    char cidade[30];
    int populacao;
    float area;//km²
    float pib;
    int turisticos;

    //Carta 2
    char estados2; // "A" a "H"
    char codigo_da_carta2[04];
    char cidade2[30];
    int populacao2;
    float area2;//km²
    float pib2;
    int turisticos2;


        printf("====================\n");
        printf("  Carta número 1\n");
        printf("====================\n");

    printf("Digite o Estado (A-H)\n");
    scanf("%c", &estados);

    printf("Digite o código da sua carta (ex:A01):\n");
    scanf("%s", codigo_da_carta);

    printf("digite o nome da cidade:\n");
    getchar(); //limpar o enter
    scanf("%[^\n]", cidade);

    printf("digite o área da cidade (km²):\n");
    scanf("%f", &area);

    printf("Digite o tamanho da população (em habitantes):\n");
    scanf("%d", &populacao);

    printf("Digite o PIB da cidade (em reais):\n");
    scanf( "%f", &pib);

    printf("Digite quantos pontos turísticos tem a cidade:\n");
    scanf("%d", &turisticos);

printf("\n");
        printf("====================\n");
        printf("  Carta número 2\n");
        printf("====================\n");
printf("\n");

    printf("Digite o Estado (A-H):\n");
    scanf(" %c", &estados2);

    printf("Digite o código da sua carta (ex:B01):\n");
    scanf("%s", codigo_da_carta2);

    printf("digite o nome da cidade:\n");
    getchar(); // Limpar enter
    scanf("%[^\n]", cidade2);

    printf("digite o área da cidade (km²):\n");
    scanf("%f", &area2);

    printf("Digite o tamanho da população(em habitantes):\n");
    scanf("%d", &populacao2);

    printf("Digite o PIB da cidade (em reais):\n");
    scanf(" %f", &pib2);

    printf("Digite quantos pontos turísticos tem a cidade:\n ");
    scanf("%d", &turisticos2);

        printf("====================\n");
        printf(" Amostragem da cartas\n");
        printf("====================\n");
    
        printf("\nCarta número 1:\n");

    printf("Estado: %c\n", estados);
    printf("Código: %s\n", codigo_da_carta);
    printf("cidade: %s\n", cidade);
    printf("cidade: %f km²\n", area);
    printf("População: %d habitantes\n", populacao);
    printf("PIB: %f reais \n", pib);
    printf("Pontos turísticos: %d", turisticos);

        printf("\nCarta número 2:\n");

    printf("Estado: %c\n", estados2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("cidade: %s\n", cidade2);
    printf("Área: %f km²\n", area2);
    printf("População: %d habitantes\n", populacao2);
    printf("PIB: %f reais\n",pib2);
    printf("Pontos turísticos: %d\n", turisticos2);
        printf("\n");

    return 0;

    }