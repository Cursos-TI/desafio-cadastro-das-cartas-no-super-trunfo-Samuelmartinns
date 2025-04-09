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
    //desafio mestre
    int pop = populacao > populacao2, pontos = point > point2;
    float areav = area > area2, pibs = pib > pib2, rendav = rendapercapita > rendapercapita2, denciv = dencidade < dencidade2;
    long double powercad1 = populacao + area + pib + point + rendapercapita + dencidade, powercad2 =populacao2 + area2 + pib2 + point2 + rendapercapita2 + dencidade2, x1 = powercad1 > powercad2;
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", pop);
    printf("Área: Carta 1 venceu (%f)\n", areav);
    printf("PIB: Carta 1 venceu (%f)\n", pibs);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos);
    printf("Densidade Populacional: Carta 2 venceu (%f)\n", denciv);
    printf("PIB per Capita: Carta 1 venceu (%f)\n", rendav);
    printf("Super Poder: Carta 1 venceu (%lf)\n", x1);
return 0;
}