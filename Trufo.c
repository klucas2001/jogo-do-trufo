#include <stdio.h>
#include <stdlib.h>
#
int main (){
    int menu;
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
    int menu2;

    printf("### Jogo do trufo ###\n");

    printf("### menu ###\n");
    printf(" 1 - regras do jogo:\n");
    printf(" 2 - jogar modo normal:\n");
    printf(" 3 - outros modos de jogo:\n");

    scanf("%d", &menu);

    if (menu < 1 || menu > 3) {
        printf("Opcao invalida! Tente novamente.\n");
        return 0;
    }

    switch (menu) {
    case 1:
        printf("Regras do jogo:\n");
        printf("O jogo do trufo é um jogo de cartas onde cada carta representa uma cidade com atributos como população, área, PIB e pontos turísticos. O objetivo do jogo é comparar os atributos das cartas para determinar qual delas é a mais poderosa.\n");
        printf("Cada jogador escolhe uma carta e compara seus atributos. A carta com o maior valor em um atributo específico vence a rodada. Se houver empate, o jogo pode continuar com outro atributo ou ser decidido por outros critérios.\n");
        printf("O jogo pode ser jogado em diferentes modos, como modo normal, modo rápido ou modo estratégico, cada um com suas próprias variações nas regras e na forma de jogar.\n");
        printf("Divirta-se jogando trufo!\n");
        break;

    case 2:
     printf("### Jogando no modo normal ###\n");

    printf("**Carta 1**\n");
    printf("Estado: \n");
    scanf("%s", &estado);
    printf("codigo da carta *4 letras*: \n");
    scanf("%s", &codigo);
    printf("Cidade: \n");
    scanf ("%s", &cidade);
    printf("Populacao: \n");
    scanf("%d", &populacao);
    if (populacao <= 0) {
        printf("numero de populacao invalido!, o numero deve ser mais que zero.\n");
        return 0;    
    }
    printf ("Area em km2: \n");
    scanf("%f", &area);
    if (area <= 0) {
        printf("numero de area invalido!, o numero deve ser mais que zero.\n");
        return 0;    
    }
    printf("Pib: \n");
    scanf("%f", &pib);
    if (pib <= 0) {
        printf("numero de pib invalido!, o numero deve ser mais que zero.\n");
        return 0;    
    }
    printf("Pontos turisticos: \n");
    scanf("%d", &pontos);
    if (pontos <= 0) {
        printf("numero de pontos turisticos invalido!, o numero nao pode ser zero!\n");
        return 0;    
    }
  
    printf("**Carta 2**\n");
    printf("Estado: \n");
    scanf("%s", &estado2);
    printf("codigo da carta *4 letras*: \n");
    scanf("%s", &codigo2);

    if (sizeof(codigo2) != 4) {
        printf("Codigo invalido! Deve conter 4 letras.\n");
        return 0;    
    }
    printf("Cidade: \n");
    scanf ("%s", &cidade2);
    printf("Populacao: \n");
    scanf("%d", &populacao2);
    if (populacao2 <= 0) {
        printf("numero de populacao invalido!, o numero nao pode ser zero!\n");
        return 0;    
    }
    printf ("Area em km2: \n");
    scanf("%f", &area2);
    if (area2 <= 0) {
        printf("numero de area invalido!, o numero nao pode ser zero!\n");
        return 0;    
    }
    printf("Pib: \n");
    scanf("%f", &pib2);
    if (pib2 <= 0) {
        printf("numero de pib invalido!, o numero nao pode ser zero!\n");
        return 0;    
    }
    printf("Pontos turisticos: \n");
    scanf("%d", &pontos2);
    if (pontos2 <= 0) {
        printf("numero de pontos turisticos invalido!, o nao pode ser zero\n");
        return 0;    
    }

    printf("\n***Informacoes das cartas***\n");

    printf ("Carta 1\n");
    printf("- Estado: %s\n - Codigo: %s\n - Cidade: %s\n", estado, codigo, cidade);
    printf("- Populacao: %lu\n - Area: %f\n - Pib: %f\n - Pontos turisticos: %d\n", populacao, area, pib, pontos); 

    printf ("Carta 2\n");
    printf("- Estado: %s\n - Codigo: %s\n - Cidade: %s\n", estado2, codigo2, cidade2);
    printf("- Populacao: %lu\n - Area: %f\n - Pib: %f\n - Pontos turisticos: %d\n", populacao2, area2, pib2, pontos2); 

    printf("\n***Densidade populacional e pib***\n");

    float densidade1 = populacao / area;
    float densidade2 = populacao2 / area2;
    float pibPerCapita1 = pib / populacao;
    float pibPerCapita2 = pib2 / populacao2;

    printf("- Densidade populacional da carta 1: %.2f\n", densidade1);
    if (densidade1 <= 0) {
        printf("numero da densidade populacional invalido, o numero nao pode ser zero!\n");
        return 0;    
    }
    printf("- Pib per capita da carta 1: %.2f\n", pibPerCapita1);
    if (pibPerCapita1 <= 0) {
        printf("numero do pib per capita invalido, o numero nao pode ser zero!\n");
        return 0;    
    }

    printf("- Densidade populacional da carta 2: %.2f\n", densidade2);
    if (densidade2 <= 0) {
        printf("numero da densidade populacional invalido, o numero nao pode ser zero!\n");
        return 0;    
    }
    printf("- Pib per capita do carta 2: %.2f\n", pibPerCapita2);

    float superpoder1 = area + pib + pontos + 1/densidade1;
    float superpoder2 = area2 + pib2 + pontos2 + 1/densidade2;

    printf("\n***Poder das cartas***\n");

    printf("- Superpoder da carta 1: %.2f\n", superpoder1);
    printf("- Superpoder da carta 2: %.2f\n", superpoder2);

    printf("\n***Carta vencedora***\n");
    
   if (superpoder1 > superpoder2) {
        printf("Carta 1 venceu!\n");
    } else if (superpoder1 < superpoder2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate no poder!\n");
        return 0;
    }
    break;
   
    case 3:
        printf("### Outros modos de jogo ###\n");
        printf(" 1 - Comparar populacao\n");
        printf(" 2 - Comparar area\n");
        printf(" 3 - Comparar pib\n");
        printf(" 4 - Comparar pontos turisticos\n");

           scanf("%d", &menu2);

    if (menu2 < 1 || menu2 > 5) {
        printf("Opcao invalida! Tente novamente.\n");
        return 0;
    }

    switch (menu2)
     {
    case 1:     
                printf("### Jogando no modo comparacao de populacao! ###\n");
                printf("**Carta 1**\n");
                printf("populacao: \n");
                scanf("%d", &populacao);
                if (populacao <= 0) {
                    printf("numero de populacao invalido!, o numero deve ser mais que zero.\n");
                    return 0;

                }
                printf("**Carta 2**\n");
                printf("populacao: \n");
                scanf("%d", &populacao2);
                if (populacao2 <= 0) {
                    printf("numero de populacao invalido!, o numero deve ser mais que zero.\n");
                    return 0;
                        
                }
                if (populacao > populacao2) {
                    printf("Carta 1!\n");
                } else if (populacao < populacao2) {
                    printf("Carta 2!\n");
                } else {
                    printf("Empate na populacao!\n");
                }
                break;
    case 2:
                printf("### Jogando no modo comparacao de area! ###\n");
                printf("**Carta 1**\n");
                printf ("Area em km2: \n");
                scanf("%f", &area);
                if (area <= 0) {
                    printf("numero de area invalido!, o numero deve ser mais que zero.\n");
                    return 0;    
                }
                printf("**Carta 2**\n");
                printf ("Area em km2: \n");
                scanf("%f", &area2);
                if (area2 <= 0) {
                    printf("numero de area invalido!, o numero deve ser mais que zero.\n");
                    return 0;    
                }
                if (area > area2) {
                    printf("Carta 1 venceu!\n");
                } else if (area < area2) {
                    printf("Carta 2 venceu!\n");
                } else {
                    printf("Empate na area!\n");
                }
                break;
    case 3:
                printf("### Jogando no modo comparacao de pib! ###\n");
                printf("**Carta 1**\n");
                printf("Pib: \n");
                scanf("%f", &pib);
                if (pib <= 0) {
                    printf("numero de pib invalido!, o numero deve ser mais que zero.\n");
                    return 0;    
                }
                printf("**Carta 2**\n");
                printf("Pib: \n");
                scanf("%f", &pib2);
                if (pib2 <= 0) {
                    printf("numero de pib invalido!, o numero deve ser mais que zero.\n");
                    return 0;    
                }
                if (pib > pib2) {
                    printf("Carta 1 venceu!\n");
                } else if (pib < pib2) {
                    printf("Carta 2 venceu!\n");
                } else {
                    printf("Empate no pib!\n");
                }
                break;
    case 4:
                printf("### Jogando no modo comparacao de pontos turisticos! ###\n");
                printf("**Carta 1**\n");
                printf("Pontos turisticos: \n");
                scanf("%d", &pontos);
                if (pontos <= 0) {
                    printf("numero de pontos turisticos invalido!, o numero deve ser mais que zero.\n");
                    return 0;    
                }
                printf("**Carta 2**\n");
                printf("Pontos turisticos: \n");
                scanf("%d", &pontos2);
                if (pontos2 <= 0) {
                    printf("numero de pontos turisticos invalido!, o numero deve ser mais que zero.\n");
                    return 0;    
                }
                if (pontos > pontos2) {
                    printf("Carta 1 venceu!\n");
                } else if (pontos < pontos2) {
                    printf("Carta 2 venceu!\n");
                } else {
                    printf("Empate nos pontos turisticos!\n");
                }
                break;
    default:
                printf("Opcao invalida! Tente novamente.\n");
                return 0;
                break;
                
                break;
            }
            return 0;
        }
    }