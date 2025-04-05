#include <stdio.h>

int main() {
    // Carta 1 - Cidade: Tóquio, Japão
    char estado1 = 'A';
    char codigo1[] = "A01";
    char pais1[] = "Japão";
    char cidade1[] = "Tóquio";
    int populacao1 = 13960000;
    float area1 = 2194.07;
    float pib1 = 1650.50;
    int pontosTuristicos1 = 70;

    // Carta 2 - Cidade: Paris, França
    char estado2 = 'B';
    char codigo2[] = "B02";
    char pais2[] = "França";
    char cidade2[] = "Paris";
    int populacao2 = 11020000;
    float area2 = 105.40;
    float pib2 = 850.75;
    int pontosTuristicos2 = 95;

    // Exibição da Carta 1
    printf("\n === Carta 1 ===\n");
    printf("Código: %s\n", codigo1);
    printf("País: %s\n", pais1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de dólares\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição da Carta 2
    printf("\n === Carta 2 ===\n");
    printf("Código: %s\n", codigo2);
    printf("País: %s\n", pais2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de dólares\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
