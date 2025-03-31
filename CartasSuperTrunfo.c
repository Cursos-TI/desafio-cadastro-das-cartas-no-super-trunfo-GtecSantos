#include <stdio.h>

// Estrutura para armazenar os dados da carta
typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} CartaSuperTrunfo;

void capturarCarta(CartaSuperTrunfo *carta) {
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &carta->estado);
    
    printf("Digite o código da carta (ex: A01, B03): ");
    scanf(" %s", carta->codigo);
    
    printf("Digite o nome da cidade: ");
    while (getchar() != '\n'); // Limpa o buffer do teclado
    scanf(" %[^\n]", carta->nomeCidade);
    
    printf("Digite a população da cidade: ");
    scanf(" %d", &carta->populacao);
    
    printf("Digite a área da cidade (km²): ");
    scanf(" %f", &carta->area);
    
    printf("Digite o PIB da cidade: ");
    while (getchar() != '\n'); // Limpa o buffer do teclado
    scanf(" %f", &carta->pib);
    
    printf("Digite o número de pontos turísticos: ");
    while (getchar() != '\n'); // Limpa o buffer do teclado
    scanf(" %d", &carta->pontosTuristicos);
}

void exibirCarta(CartaSuperTrunfo carta) {
    printf("\n=== Carta Super Trunfo ===\n");
    printf("Estado: %c\n", carta.estado);
    printf("Código da Carta: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d habitantes\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("===========================\n");
}

int main() {
    CartaSuperTrunfo carta1, carta2;
    
    printf("Cadastro da primeira carta:\n");
    capturarCarta(&carta1);
    
    printf("\nCadastro da segunda carta:\n");
    capturarCarta(&carta2);
    
    printf("\nCartas cadastradas:\n");
    exibirCarta(carta1);
    exibirCarta(carta2);
    
    return 0;
}
