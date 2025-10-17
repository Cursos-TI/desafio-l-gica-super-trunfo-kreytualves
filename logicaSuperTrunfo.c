#include <stdio.h>

int main() {
    char pais1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade1;
  
    char pais2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    
    int opcao;

         // entrada de dados
         
         // carta 1

    printf("Digite o nome do país: ");
    scanf("%29s", pais1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a area em km²: ");
    scanf("%f", &area1);

    printf("Digite o pib em bilhoes de reais: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turisticos: ");
    scanf("%d", &pontosturisticos1);
    
    densidade1 = (area1 > 0) ? populacao1 / area1 : 0;
    
    // carta 2
    
    printf("Digite o nome do país: ");
    scanf("%29s", pais2);
    
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    
    printf("Digite a area em km²: ");
    scanf("%f", &area2);
    
    printf("Digite o pib em bilhoes de reais: ");
    scanf("%f", &pib2);
    
    printf("Digite quantos pontos turisticos: ");
    scanf("%d", &pontosturisticos2);
    
    densidade2 = (area2 > 0) ? populacao2 / area2 : 0;
    
    // menu interativo
    
    printf("\n*** SUPER TRUNFO - AVENTUREIRO ***\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);
    
    // swtich
    
    switch(opcao) {
        case 1:
            printf("\n--- Comparando População ---\n");
            printf("%s: %lu habitantes\n", pais1, populacao1);
            printf("%s: %lu habitantes\n", pais2, populacao2);

            if (populacao1 > populacao2)
                printf("\nVencedor: %s (maior população)\n", pais1);
            else if (populacao1 < populacao2)
                printf("\nVencedor: %s (maior população)\n", pais2);
            else
                printf("\nEmpate!\n");
            break;

        case 2:
            printf("\n--- Comparando Área ---\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);

            if (area1 > area2)
                printf("\nVencedor: %s (maior área)\n", pais1);
            else if (area1 < area2)
                printf("\nVencedor: %s (maior área)\n", pais2);
            else
                printf("\nEmpate!\n");
            break;

        case 3:
            printf("\n--- Comparando PIB ---\n");
            printf("%s: %.2f bilhões de reais\n", pais1, pib1);
            printf("%s: %.2f bilhões de reais\n", pais2, pib2);

            if (pib1 > pib2)
                printf("\nVencedor: %s (maior PIB)\n", pais1);
            else if (pib1 < pib2)
                printf("\nVencedor: %s (maior PIB)\n", pais2);
            else
                printf("\nEmpate!\n");
            break;

        case 4:
            printf("\n--- Comparando Pontos Turísticos ---\n");
            printf("%s: %d pontos turísticos\n", pais1, pontosturisticos1);
            printf("%s: %d pontos turísticos\n", pais2, pontosturisticos2);

            if (pontosturisticos1 > pontosturisticos2)
                printf("\nVencedor: %s (mais pontos turísticos)\n", pais1);
            else if (pontosturisticos1 < pontosturisticos2)
                printf("\nVencedor: %s (mais pontos turísticos)\n", pais2);
            else
                printf("\nEmpate!\n");
            break;

        case 5:
            printf("\n--- Comparando Densidade Demográfica ---\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);

            // Regra invertida: menor densidade vence
            if (densidade1 < densidade2) {
                printf("\nVencedor: %s (menor densidade populacional)\n", pais1);
            } else if (densidade1 > densidade2) {
                printf("\nVencedor: %s (menor densidade populacional)\n", pais2);
            } else {
                printf("\nEmpate!\n");
            }
            break;

        default:
            printf("\nOpção inválida! Escolha um número de 1 a 5.\n");
            break;
    }

    printf("\n===== Fim da rodada =====\n");
    return 0;
}