#include <stdio.h>

int main() {
    char estado1[30];
    char codigo1[4];
    char cidade1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;
    float superpoder1;
    
    char estado2[30];
    char codigo2[4];
    char cidade2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2 = populacao1 / area1;
    float pibpercapita2;
    float superpoder2;

         // entrada de dados

    printf("Digite o estado: ");
    scanf("%29s", estado1);

    printf("Digite o codigo: ");
    scanf(" %3s", codigo1);

    printf("Digite a cidade: ");
    scanf("%29s", cidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area em km²: ");
    scanf("%f", &area1);

    printf("Digite o pib em bilhoes de reais: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turisticos: ");
    scanf("%d", &pontosturisticos1);
    
    printf("Digite o estado: ");
    scanf("%29s", estado2);
    
    printf("Digite o codigo: ");
    scanf(" %3s", codigo2);
    
    printf("Digite a cidade: ");
    scanf("%29s", cidade2);
    
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    
    printf("Digite a area em km²: ");
    scanf("%f", &area2);
    
    printf("Digite o pib em bilhoes de reais: ");
    scanf("%f", &pib2);
    
    printf("Digite quantos pontos turisticos: ");
    scanf("%d", &pontosturisticos2);
    
    // calculos
    
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;
    superpoder1 = populacao1 + area1 + (pib1 * 1000000000) + pontosturisticos1 + pibpercapita1 + (1.0 / densidadepopulacional1);

    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;
    superpoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontosturisticos2 + pibpercapita2 + (1.0 / densidadepopulacional2);

       // saida de dados
 
    printf("Cartas Super Trunfo \n");

    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: R$ %.2f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

   
    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: R$ %.2f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);
    
    // comparaçoes
    
        printf("\n Comparação de Cartas (Atributo: Área) \n");

    printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, estado1, area1);
    printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, estado2, area2);


    if(area1 > area2) {
        printf("\nResultado: Carta 1 (km2) venceu!\n", cidade1);
    } else {
        printf("\nResultado: Carta 2 (km2) venceu!\n", cidade2);
    }
    
    return 0;
}
