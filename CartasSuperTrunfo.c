#include <stdio.h>

int main() {
    printf("Desafio super trunfo\n");
    printf("\nCarta 1:\n");

    char Estado[20]; 
    char Codigo[20];
    char Cidade[10];
    int Populacao;
    float Area;
    float PIB;
    int PontosTuristicos;

    printf("Digite o Estado: \n");
    scanf("%s", Estado);

    printf("Digite o Codigo: \n");
    scanf("%s", Codigo); 

    printf("Digite a Cidade: \n");
    scanf("%s", Cidade);

    printf("Digite o número da População: \n");
    scanf("%d", &Populacao);

    printf("Digite a Area: \n");
    scanf("%f", &Area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &PontosTuristicos);

    printf("Estado: %s - Codigo: %s - Cidade: %s\n", Estado, Codigo, Cidade);
    printf("Populacao: %d - Area: %.2f - PIB: %.2f\n", Populacao, Area, PIB);
    printf("Pontos turisticos: %d\n", PontosTuristicos);

    return 0;
}