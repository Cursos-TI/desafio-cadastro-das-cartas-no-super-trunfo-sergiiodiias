#include <stdio.h>

int main() {
    // Carta 1 - Dados Carta 1
    char estado1 = 'C';
    char codigo1[] = "C03";
    int populacao1 = 8500000;
    float area1 = 1098.75;
    float pib1 = 345.60;
    int pontosTuristicos1 = 42;

    // Carta 2 - Dados Carta 2
    char estado2 = 'F';
    char codigo2[] = "F01";
    int populacao2 = 5600000;
    float area2 = 758.40;
    float pib2 = 280.90;
    int pontosTuristicos2 = 30;

    // Exibição dos dados da Carta 1
    printf("\n📇 === Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\n📇 === Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
