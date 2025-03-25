#include <stdio.h>

int main() {
    printf("Desafio super trunfo\n");
    printf("\nCarta 1:\n");

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
    printf("Digite o Estado: \n");
    scanf("%s", Estado1);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigo1); 

    printf("Digite a Cidade: \n");
    scanf("%s", Cidade1);

    printf("Digite o número da População: \n");
    scanf("%d", &Populacao1);

    printf("Digite a Area: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &PontosTuristicos1);

    // Cálculos PIB per capita e Densidade Populacional da Carta 1
    PIBperCapita1 = PIB1 / Populacao1;  
    DensidadePopulacional1 = Populacao1 / Area1;

    // Dados para Carta 1
    printf("***Carta 1***\n");
    printf("Estado1: %s - Codigo1: %s - Cidade1: %s\n", Estado1, Codigo1, Cidade1);
    printf("Populacao1: %d\n", Populacao1);
    printf("Area1: %f km² - PIB1: %f\n", Area1, PIB1);
    printf("PontosTuristicos1: %d\n", PontosTuristicos1);
    printf("PIBperCapita1: %f\n", PIBperCapita1);
    printf("DensidadePopulacional: %f\n", DensidadePopulacional1);

    printf("\nDesafio super trunfo");
    printf("\nCarta 2:\n");

    // Dados para a Carta 2
    printf("Digite o Estado2: \n");
    scanf("%s", Estado2);

    printf("Digite o Codigo2: \n");
    scanf("%s", Codigo2); 

    printf("Digite a Cidade2: \n");
    scanf("%s", Cidade2);

    printf("Digite o número da Populacao2: \n");
    scanf("%d", &Populacao2);

    printf("Digite a Area2: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB2: \n");
    scanf("%f", &PIB2);
    
    printf("Digite o número de PontosTuristicos2: \n");
    scanf("%d", &PontosTuristicos2);

    // Cálculos para PIB per capita e Densidade Populacional para Carta 2
    PIBperCapita2 = PIB2 / Populacao2;  
    DensidadePopulacional2 = Populacao2 / Area2;

    // Dados para Carta 2
    printf("***Carta 2***\n");
    printf("Estado2: %s - Codigo2: %s - Cidade2: %s\n", Estado2, Codigo2, Cidade2);
    printf("Populacao2: %d\n", Populacao2);
    printf("Area2: %f km² - PIB2: %f\n", Area2, PIB2);
    printf("PontosTuristicos2: %d\n", PontosTuristicos2);
    printf("PIBperCapita2: %f\n", PIBperCapita2);
    printf("DensidadePopulacional2: %f\n", DensidadePopulacional2);

    return 0;
}
