#include <stdio.h>

#define MAX_CARTAS 32  // 8 estados (A–H) × 4 cidades cada

// Estrutura da carta
typedef struct {
    char estado;       // letra A–H
    int numero;        // número da cidade (1–4)
    char codigo[4];    // Ex: A01, B03
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

int main() {
    int n, i;
    Carta cartas[MAX_CARTAS];

    printf("=== Super Trunfo: Países (Nível Novato) ===\n");
    printf("Quantas cartas deseja cadastrar? (máximo %d): ", MAX_CARTAS);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_CARTAS) {
        printf("Número inválido de cartas.\n");
        return 1;
    }

    // Cadastro das cartas
    for (i = 0; i < n; i++) {
        printf("\n--- Cadastro da Carta %d ---\n", i + 1);

        printf("Estado (A-H): ");
        scanf(" %c", &cartas[i].estado);

        printf("Número da cidade (1-4): ");
        scanf("%d", &cartas[i].numero);

        // Gera o código automaticamente (Ex: A01, B04)
        sprintf(cartas[i].codigo, "%c%02d", cartas[i].estado, cartas[i].numero);

        printf("População: ");
        scanf("%d", &cartas[i].populacao);

        printf("Área (km²): ");
        scanf("%f", &cartas[i].area);

        printf("PIB (em bilhões): ");
        scanf("%f", &cartas[i].pib);

        printf("Número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);
    }

    // Exibição das cartas
    printf("\n=== Cartas Cadastradas ===\n");
    for (i = 0; i < n; i++) {
        printf("\nCarta %d\n", i + 1);
        printf("Código: %s\n", cartas[i].codigo);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões\n", cartas[i].pib);
        printf("Pontos turísticos: %d\n", cartas[i].pontosTuristicos);
    }

    return 0;
}
