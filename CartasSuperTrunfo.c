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
    printf("área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("quanridade de pontos turisticos: %d\n", point);
    //desafio nivel aventureiro que acrescenta a dencidade populacional e renda per capita na carta 1
    float dencidade, rendapercapita;
    dencidade = populacao/area;
    rendapercapita = pib/populacao;
    printf("Densidade Populacional: %.2f hab/km² \n" , dencidade);
    printf("PIB per Capita: %.2f reais\n" , rendapercapita);
    //info da carta 2
    printf("\ncarta 2:\n");
    printf("estados: %s\n", ESTADO2);
    printf("codigo: %s\n", CODIGO2);
    printf("capital: %s\n", CAP2);
    printf("população: %d\n", populacao2);
    printf("área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("quantidade de pontos turisticos: %d\n", point2);
    //desafio nivel aventureiro que acrescenta a dencidade populacional e renda per capita na carta 2
    float dencidade2, rendapercapita2;
    dencidade2 = populacao2/area2;
    rendapercapita2 = pib2/populacao2;
    printf("Densidade Populacional: %.2f hab/km² \n" , dencidade2);
    printf("PIB per Capita: %.2f reais\n" , rendapercapita2);
return 0;
}