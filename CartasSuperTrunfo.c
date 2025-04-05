#include <stdio.h>

int main() {
    // Carta 1 - Fortaleza, CE
    char estado1 = 'C'; // Ceará
    char codigo1[] = "A01";
    char cidade1[] = "Fortaleza";
    int populacao1 = 2687000;
    float area1 = 314.93;
    float pib1 = 61000000.0;
    int pontosTuristicos1 = 12;

    // Carta 2 - Salvador, BA
    char estado2 = 'D'; // Bahia
    char codigo2[] = "B02";
    char cidade2[] = "Salvador";
    int populacao2 = 2900000;
    float area2 = 693.28;
    float pib2 = 82000000.0;
    int pontosTuristicos2 = 18;

    // Exibição da Carta 1
    printf("📇 === Carta 1 ===\n");
    printf("Estado: %c (Ceará)\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição da Carta 2
    printf("\n📇 === Carta 2 ===\n");
    printf("Estado: %c (Bahia)\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
