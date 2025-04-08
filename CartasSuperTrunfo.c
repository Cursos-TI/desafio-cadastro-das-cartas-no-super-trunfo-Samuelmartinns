#include <stdio.h>
int main() { 
    char ESTADO [30], CODIGO [30], CAP [30];
    int populacao, point;
    float area, pib;
    char ESTADO2 [30], CODIGO2 [30], CAP2 [30];
    int populacao2, point2;
    float area2, pib2;
    //perguntas da carta 1
    printf("qual o estado? ");
    scanf(" %s", ESTADO);
    printf("qual o codigo? ");
    scanf(" %s", CODIGO);
    printf("qual a capital? ");
    scanf(" %s", CAP);
    printf("qual a população? ");
    scanf("%d", &populacao);
    printf("qual a área? ");
    scanf("%f", &area);
    printf("qual o PIB? ");
    scanf("%f", &pib);
    printf("quantos pontos turisticos? ");
    scanf("%d", &point);
    //pergutas da carta 2
    printf("qual o estado 2? ");
    scanf(" %s", ESTADO2);
    printf("qual o codigo? ");
    scanf(" %s", CODIGO2);
    printf("qual a capital? ");
    scanf(" %s", CAP2);
    printf("qual a população? ");
    scanf(" %d", &populacao2);
    printf("qual a área? ");
    scanf("%f", &area2);
    printf("qual o PIB? ");
    scanf("%f", &pib2);
    printf("quantos pontos turisticos? ");
    scanf("%d", &point2);
    //info da carta 1
    printf("\ncarta 1:\n");
    printf("estados: %s\n", ESTADO);
    printf("codigo: %s\n", CODIGO);
    printf("capital: %s\n", CAP);
    printf("população: %d\n", populacao);
    printf("área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("pontos turisticos: %d\n", point);
    //info da carta 2
    printf("\ncarta 2:\n");
    printf("estados: %s\n", ESTADO2);
    printf("codigo: %s\n", CODIGO2);
    printf("capital: %s\n", CAP2);
    printf("população: %d\n", populacao2);
    printf("área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("pontos turisticos: %d\n", point2);
return 0;
}