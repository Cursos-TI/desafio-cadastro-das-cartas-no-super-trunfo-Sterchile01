#include <stdio.h>
#include <stdlib.h>

// Função para limpar o buffer do teclado (stdin)
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");

    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado1);
    limparBuffer();

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    limparBuffer();

    printf("Informe o Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0'; // remove o \n do final

    printf("Informe a População: ");
    scanf("%d", &populacao1);
    limparBuffer();

    printf("Informe a Área (em km²): ");
    scanf("%f", &area1);
    limparBuffer();

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    limparBuffer();

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    limparBuffer();

    printf("\n");

    // Entrada de dados da Carta 2
    printf("Cadastro da Carta 2:\n");

    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);
    limparBuffer();

    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    limparBuffer();

    printf("Informe o Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("Informe a População: ");
    scanf("%d", &populacao2);
    limparBuffer();

    printf("Informe a Área (em km²): ");
    scanf("%f", &area2);
    limparBuffer();

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    limparBuffer();

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    limparBuffer();

    printf("\n\n");

    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n");

    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
