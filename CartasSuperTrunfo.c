#include <stdio.h>

#define MAX_CIDADES 2

// Estrutura para armazenar os dados da carta
typedef struct {
    char estado;
    char codigo[5]; // Código da carta (ex: A01, B03)
    char nome_cidade[100]; // Nome da cidade
    int populacao; // População da cidade
    float area; // Área da cidade em km²
    float pib; // PIB da cidade
    int pontos_turisticos; // Número de pontos turísticos
} Carta;

// Função para comparar as cartas com base no PIB
void comparar_cartas(Carta carta1, Carta carta2) {
    // Comparação baseada no PIB
    if (carta1.pib > carta2.pib) {
        printf("Carta 1 - %s venceu! PIB: %.2f bilhões de reais\n", carta1.nome_cidade, carta1.pib);
    } else if (carta1.pib < carta2.pib) {
        printf("Carta 2 - %s venceu! PIB: %.2f bilhões de reais\n", carta2.nome_cidade, carta2.pib);
    } else {
        printf("Empate! PIB: %.2f bilhões de reais\n", carta1.pib);
    }
}

int main() {
    Carta cartas[MAX_CIDADES]; // Vetor para armazenar as cartas
    int i;

    // Loop para cadastrar as cartas
    for (i = 0; i < MAX_CIDADES; i++) {
        printf("Digite os dados da Carta %d:\n", i + 1);
        
        // Coleta dos dados para cada carta
        printf("Estado (A a H): ");
        scanf(" %c", &cartas[i].estado); // O espaço antes de %c é para consumir o '\n' deixado pelo Enter
        
        printf("Código da Carta (ex: A01): ");
        scanf("%s", cartas[i].codigo);
        
        printf("Nome da Cidade: ");
        scanf(" %[^\n]", cartas[i].nome_cidade); // Lê a linha inteira, permitindo espaços
        
        printf("População: ");
        scanf("%d", &cartas[i].populacao);
        
        printf("Área (em km²): ");
        scanf("%f", &cartas[i].area);
        
        printf("PIB (em bilhões de reais): ");
        scanf("%f", &cartas[i].pib);
        
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &cartas[i].pontos_turisticos);
        
        printf("\n"); // Linha em branco para separar as cartas
    }

    // Exibindo as informações das cartas cadastradas
    for (i = 0; i < MAX_CIDADES; i++) {
        printf("Carta %d:\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].nome_cidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões de reais\n", cartas[i].pib);
        printf("Número de Pontos Turísticos: %d\n", cartas[i].pontos_turisticos);
        printf("\n"); // Linha em branco para separar as cartas
    }

    // Comparando as cartas com base no PIB
    comparar_cartas(cartas[0], cartas[1]);

    return 0;
}
