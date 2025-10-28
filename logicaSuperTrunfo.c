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
    int opcao1, opcao2;
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;
    float soma1, soma2;
    
    printf("\n*** SUPER TRUNFO - AVANÇADO ***\n");
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao1);
    
    // segundo atributo
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i == opcao1) continue;
        switch (i) {
            case 1: 
            printf("1. População\n");
            break;
            case 2: 
            printf("2. Área\n");
            break;
            case 3: 
            printf("3. PIB\n");
            break;
            case 4:
            printf("4. Pontos Turísticos\n");
            break;
            case 5:
            printf("5. Densidade Demográfica\n");
            break;
        }
    }
    printf("Opção: ");
    scanf("%d", &opcao2);
    // swtich
    
    switch(opcao2) {
        case 1: 
        valor1_carta1 = populacao1;
        valor1_carta2 = populacao2;
        break;
        case 2:
        valor1_carta1 = area1;
        valor1_carta2 = area2;
        break;
        case 3:
        valor1_carta1 = pib1;
        valor1_carta2 = pib2;
        break;
        case 4:
        valor1_carta1 = pontosturisticos1;
        valor1_carta2 = pontosturisticos2;
        break;
        case 5:
        valor1_carta1 = densidade1;
        valor1_carta2 = densidade2;
        break;
        default: printf("Opção inválida para o primeiro atributo!\n");
        return 1;
    }
    switch (opcao2) {
        case 1: 
        valor2_carta1 = populacao1;
        valor2_carta2 = populacao2;
        break;
        case 2:
        valor2_carta1 = area1;
        valor2_carta2 = area2;
        break;
        case 3:
        valor2_carta1 = pib1;
        valor2_carta2 = pib2;
        break;
        case 4:
        valor2_carta1 = pontosturisticos1;
        valor2_carta2 = pontosturisticos2;
        break;
        case 5:
        valor2_carta1 = densidade1;
        valor2_carta2 = densidade2;
        break;
        default: printf("Opção inválida para o segundo atributo!\n");
        return 1;
    }
    
    float pontos1 = 0, pontos2 = 0;
    
    pontos1 += (opcao1 == 5) ? (valor1_carta1 < valor1_carta2) : (valor1_carta1 > valor1_carta2);
    pontos2 += (opcao1 == 5) ? (valor1_carta2 < valor1_carta1) : (valor1_carta2 > valor1_carta1);
    
    pontos1 += (opcao2 == 5) ? (valor2_carta1 < valor2_carta2) : (valor2_carta1 > valor2_carta2);
    pontos2 += (opcao2 == 5) ? (valor2_carta2 < valor2_carta1) : (valor2_carta2 > valor2_carta1);
    
    /// soma dos atributos
    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;
    
    // resultado
    printf("\nRESULTADO DA COMPARAÇÃO\n");
    printf("%s x %s\n", pais1, pais2);
    printf("\nAtributo 1: ");
    
    switch(opcao1) {
        case 1:
        printf("População\n");
        break;
        case 2:
        printf("Área\n");
        break;
        case 3:
        printf("PIB\n");
        break;
        case 4:
        printf("Pontos Turísticos\n");
        break;
        case 5:
        printf("Densidade Demográfica\n");
        break;
    }
    
    printf(" %s: %.2f | %s: %.2f\n", pais1, valor1_carta1, pais2, valor1_carta2);
    
     printf("\nAtributo 2: ");
     
     switch(opcao2) {
        case 1:
        printf("População\n");
        break;
        case 2:
        printf("Área\n");
        break;
        case 3:
        printf("PIB\n");
        break;
        case 4:
        printf("Pontos Turísticos\n");
        break;
        case 5:
        printf("Densidade Demográfica\n");
        break;
     }
     
     printf(" %s: %.2f | %s: %.2f\n", pais1, valor2_carta1, pais2, valor2_carta2);
     
     printf("\nSoma dos atributos: \n");
     printf(" %s: %.2f\n", pais1, soma1);
     printf(" %s: %.2f\n", pais2, soma2);
     
     if (soma1 > soma2)
     printf("\n Vencedor: %s\n", pais1);
     else if (soma1 < soma2)
     printf("\n Vencedor: %s\n", pais2);
     else
     printf("Empate!!\n");
     
     printf("\n Fim da Rodada\n");
     return 0;
}