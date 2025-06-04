#include <stdio.h>
#include <string.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    limparBuffer();

    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    limparBuffer();

    printf("Nome da Cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhões R$): ");
    scanf("%f", &pib1);

    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pibPerCapita1 + pontosTuristicos1 + (1.0f / densidade1);

    limparBuffer();

    // Entrada Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    limparBuffer();

    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    limparBuffer();

    printf("Nome da Cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhões R$): ");
    scanf("%f", &pib2);

    printf("Nº de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pibPerCapita2 + pontosTuristicos2 + (1.0f / densidade2);

    // Exibição das cartas
    printf("\n\n--- CARTA 1 ---\n");
    printf("Estado: %c | Código: %s | Cidade: %s\n", estado1, codigo1, nomeCidade1);
    printf("População: %lu | Área: %.2f km² | PIB: %.2f bilhões\n", populacao1, area1, pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f | PIB per Capita: %.6f | Super Poder: %.2f\n",
           densidade1, pibPerCapita1, superPoder1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c | Código: %s | Cidade: %s\n", estado2, codigo2, nomeCidade2);
    printf("População: %lu | Área: %.2f km² | PIB: %.2f bilhões\n", populacao2, area2, pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f | PIB per Capita: %.6f | Super Poder: %.2f\n",
           densidade2, pibPerCapita2, superPoder2);

    // Comparações (1 = Carta 1 vence, 0 = Carta 2 vence)
    int r_pop = (populacao1 > populacao2);
    int r_area = (area1 > area2);
    int r_pib = (pib1 > pib2);
    int r_pts = (pontosTuristicos1 > pontosTuristicos2);
    int r_densidade = (densidade1 < densidade2); // menor vence
    int r_pc = (pibPerCapita1 > pibPerCapita2);
    int r_sp = (superPoder1 > superPoder2);

    // Resultado da comparação
    printf("\n\n--- RESULTADO DAS COMPARAÇÕES ---\n");
    printf("População: %d\n", r_pop);
    printf("Área: %d\n", r_area);
    printf("PIB: %d\n", r_pib);
    printf("Pontos Turísticos: %d\n", r_pts);
    printf("Densidade Populacional (menor vence): %d\n", r_densidade);
    printf("PIB per Capita: %d\n", r_pc);
    printf("Super Poder: %d\n", r_sp);

    return 0;
}
