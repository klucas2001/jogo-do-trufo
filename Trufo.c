#include <stdio.h>

int main (){

    float area;
    float pib;
    int pontos;
    char codigo [4];
    char estado [50];
    char cidade [50];
    unsigned long int populacao;
    float area2;
    float pib2;
    int pontos2;
    char codigo2 [4];
    char estado2 [50];
    char cidade2 [50];
    unsigned long int  populacao2;

    printf("***Jogo do trufo***\n");

    printf("**Carta 1**\n");
    printf("Estado: \n");
    scanf("%s", &estado);
    printf("codigo da carta *4 letras*: \n");
    scanf("%s", &codigo);
    printf("Cidade: \n");
    scanf ("%s", &cidade);
    printf("Populacao: \n");
    scanf("%d", &populacao);
    printf ("Area em km2: \n");
    scanf("%f", &area);
    printf("Pib: \n");
    scanf("%f", &pib);
    printf("Pontos turisticos: \n");
    scanf("%d", &pontos);
  
    printf("**Carta 2**\n");
    printf("Estado: \n");
    scanf("%s", &estado2);
    printf("codigo da carta *4 letras*: \n");
    scanf("%s", &codigo2);
    printf("Cidade: \n");
    scanf ("%s", &cidade2);
    printf("Populacao: \n");
    scanf("%d", &populacao2);
    printf ("Area em km2: \n");
    scanf("%f", &area2);
    printf("Pib: \n");
    scanf("%f", &pib2);
    printf("Pontos turisticos: \n");
    scanf("%d", &pontos2);

    printf("\n***Informacoes das cartas***\n");

    printf ("Carta 1\n");
    printf("Estado: %s - Codigo: %s - Cidade: %s\n", estado, codigo, cidade);
    printf("Populacao: %lu - Area: %f - Pib: %f - Pontos turisticos: %d\n", populacao, area, pib, pontos); 

    printf ("Carta 2\n");
    printf("Estado: %s - Codigo: %s - Cidade: %s\n", estado2, codigo2, cidade2);
    printf("Populacao: %lu - Area: %f - Pib: %f - Pontos turisticos: %d\n", populacao2, area2, pib2, pontos2); 

    float densidade1 = populacao / area;
    float densidade2 = populacao2 / area2;

    printf("Densidade populacional do estado 1: %.2f\n", densidade1);
    printf("Densidade populacional do estado 2: %.2f\n", densidade2);
    float pibPerCapita1 = pib / populacao;
    float pibPerCapita2 = pib2 / populacao2;

    printf("Pib per capita do estado 1: %.2f\n", pibPerCapita1);
    printf("Pib per capita do estado 2: %.2f\n", pibPerCapita2);

    float superpoder1 = area + pib + pontos + 1/densidade1;
    float superpoder2 = area2 + pib2 + pontos2 + 1/densidade2;

    printf("Superpoder da carta 1: %.2f\n", superpoder1);
    printf("Superpoder da carta 2: %.2f\n", superpoder2);

    printf("***A carta com maior superpoder vence a partida!***\n");
    
    printf("Quem venceu a partida foi carta %d\n", (superpoder1 > superpoder2) ? 1 : 2);

    return 0;
}
