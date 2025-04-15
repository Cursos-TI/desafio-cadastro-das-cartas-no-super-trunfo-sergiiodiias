// Desafio: Comparação de cartas Super Trunfo (População)

#include <stdio.h>

typedef struct {
    char  estado[3];
    char  codigo[4];
    char  cidade[40];
    int   populacao;
    float area;
    float pib;            // em milhões de R$
    int   pontos_turisticos;
    float densidade;       // hab/km²
    float pib_per_capita;  // R$ por habitante
} Carta;

void calcularAtributos(Carta *c) {
    c->densidade      = c->populacao / c->area;
    c->pib_per_capita = c->pib * 1e6f / c->populacao;
}

void exibirCarta(const Carta *c, int idx) {
    printf("\nCarta %d\n", idx);
    printf("Estado: %s\n", c->estado);
    printf("Código: %s\n", c->codigo);
    printf("Cidade: %s\n", c->cidade);
    printf("População: %d\n", c->populacao);
    printf("Área: %.2f km²\n", c->area);
    printf("PIB: %.2f milhões de R$\n", c->pib);
    printf("Pontos turísticos: %d\n", c->pontos_turisticos);
    printf("Densidade: %.1f hab/km²\n", c->densidade);
    printf("PIB per capita: R$ %.2f\n", c->pib_per_capita);
}

void compararCartas(const Carta *c1, const Carta *c2) {
    printf("\nComparação (População)\n");
    printf("%s: %d\n", c1->cidade, c1->populacao);
    printf("%s: %d\n\n", c2->cidade, c2->populacao);

    if (c1->populacao > c2->populacao)
        printf("Vencedora: %s\n", c1->cidade);
    else if (c2->populacao > c1->populacao)
        printf("Vencedora: %s\n", c2->cidade);
    else
        printf("Empate\n");
}

int main(void) {
    Carta carta1 = { "CE", "A01", "Fortaleza", 2687000, 314.93f, 61.0f, 12 };
    Carta carta2 = { "BA", "B02", "Salvador", 2900000, 693.28f, 82.0f, 18 };

    calcularAtributos(&carta1);
    calcularAtributos(&carta2);

    exibirCarta(&carta1, 1);
    exibirCarta(&carta2, 2);

    compararCartas(&carta1, &carta2);

    return 0;
}