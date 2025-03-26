#include <stdio.h>

int main() {
    printf("Desafio super trunfo\n");

    // Declaração das variáveis
    char Estado1[50], Estado2[50]; 
    char Codigo1[20], Codigo2[20];
    char Cidade1[50], Cidade2[50];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float PIB1, PIB2;
    int PontosTuristicos1, PontosTuristicos2;
    float PIBperCapita1, PIBperCapita2;
    float DensidadePopulacional1, DensidadePopulacional2; 

    // Dados para a Carta 1
    printf("\nCarta 1:\n");
    printf("Digite o Estado: \n");
    scanf("%s", Estado1);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigo1); 

    printf("Digite a Cidade: \n");
    scanf("%s", Cidade1);

    printf("Digite o número da População: \n");
    scanf("%d", &Populacao1);

    printf("Digite a Area (em km²): \n");
    scanf("%f", &Area1);

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos1);

    // Calculando PIB per capita e Densidade Populacional da Carta 1
    PIBperCapita1 = PIB1 * 1e9 / Populacao1;  // Multiplicando PIB por 1 bilhão para voltar para reais
    DensidadePopulacional1 = Populacao1 / Area1;

    // Dados para Carta 1
    printf("\n***Carta 1***\n");
    printf("Estado: %s - Codigo: %s - Cidade: %s\n", Estado1, Codigo1, Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km² - PIB: %.2f bilhões\n", Area1, PIB1);  
    printf("Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("PIB per Capita: %.2f\n", PIBperCapita1);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional1);

    // Dados para a Carta 2
    printf("\nCarta 2:\n");
    printf("Digite o Estado: \n");
    scanf("%s", Estado2);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigo2); 

    printf("Digite a Cidade: \n");
    scanf("%s", Cidade2);

    printf("Digite o número da População: \n");
    scanf("%d", &Populacao2);

    printf("Digite a Área (em km²): \n");
    scanf("%f", &Area2);

    printf("Digite o PIB (em bilhões): \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos2);

    // Calculando PIB per capita e Densidade Populacional para Carta 2
    PIBperCapita2 = PIB2 * 1e9 / Populacao2;  // Multiplicando PIB por 1 bilhão para voltar para reais
    DensidadePopulacional2 = Populacao2 / Area2;

    // Dados para Carta 2
    printf("\n***Carta 2***\n");
    printf("Estado: %s - Codigo: %s - Cidade: %s\n", Estado2, Codigo2, Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km² - PIB: %.2f bilhões\n", Area2, PIB2);  
    printf("Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("PIB per Capita: %.2f\n", PIBperCapita2);
    printf("Densidade Populacional: %.2f\n", DensidadePopulacional2);

    return 0;
}

