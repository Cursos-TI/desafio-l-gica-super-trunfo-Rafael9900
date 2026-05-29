#include <stdio.h>


int main(){

    printf("**************SUPER TRUNFO***********\n");
    char estado1[1];
    char estado2[1];
    int codigo1[2];
    int codigo2[2];
    char nome1[50];
    char nome2[50];
    unsigned long int populacao1, populacao2; 
    int turistico1, turistico2;
    float area1, area2;
    float pib1, pib2;

    //criação da carta 1
    printf("Escolha uma letra para representar a primeira Carta (de A ate H): \n");
    scanf("%s", &estado1);

    printf("Escolha o codigo da carta (01,02,03,04): \n");
    scanf("%s",&codigo1);

    printf("Qual o nome da cidade?: \n");
    scanf("%s", &nome1);

    printf("Qual a populacao dessa cidade?: \n");
    scanf("%lu", &populacao1);

    printf("Qual a area dessa cidade?: \n");
    scanf("%f", &area1);

    printf("Qual o PIB dessa cidade?: \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turisticos existem nessa cidade?: \n");
    scanf("%d", &turistico1);

    //Densidade populacional, PIB per capita, carta1:
    double DenPop1 = (float)(populacao1 / area1);
    double PIBCap1 = (float)(pib1 / populacao1);

    //Mostrar carta 1
    printf("Estado: %s\n",estado1);
    printf("Codigo: %s%s\n",estado1,codigo1);
    printf("Nome: %s\n",nome1);
    printf("Populacao: %lu\n",populacao1);
    printf("Area(KM): %f\n",area1);
    printf("PIB: %f\n",pib1);
    printf("Pontos turisticos: %d\n",turistico1);
    printf("Densidade Populacional: %2.f\n",DenPop1);
    printf("PIB per Capita: %2.f\n",PIBCap1);

    //criação da carta 2
    printf("Escolha uma letra para representar a Segunda Carta (de A ate H): \n");
    scanf("%s", &estado2);

    printf("Escolha o codigo da carta (01,02,03,04): \n");
    scanf("%s",&codigo2);

    printf("Qual o nome da cidade?: \n");
    scanf("%s", &nome2);

    printf("Qual a populacao dessa cidade?: \n");
    scanf("%lu", &populacao2);

    printf("Qual a area dessa cidade?: \n");
    scanf("%f", &area2);

    printf("Qual o PIB dessa cidade?: \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turisticos existem nessa cidade?: \n");
    scanf("%d", &turistico2);

    //Densidade populacional, PIB per capita, carta2:
    double DenPop2 = (float)(populacao2 / area2);
    double PIBCap2 = (float)(pib2 / populacao2);
    
    //Mostrar carta 2
    printf("Estado: %s\n",estado2);
    printf("Codigo: %s%s\n",estado2,codigo2);
    printf("Nome: %s\n",nome2);
    printf("Populacao: %lu\n",populacao2);
    printf("Area(KM): %2.f\n",area2);
    printf("PIB: %2.f\n",pib2);
    printf("Pontos turisticos: %d\n",turistico2);
    printf("Densidade Populacional: %2.f\n",DenPop2);
    printf("PIB per Capita: %2.f\n",PIBCap2);

    //poder carta1
    float poder1 = (populacao1 + turistico1 + area1 + pib1 + PIBCap1 + (DenPop1 * -1));
    //poder carta2
    float poder2 = (populacao2 + turistico2 + area2 + pib2 + PIBCap2 + (DenPop2 * -1));
    
//comparação cartas

    printf("********COMPARACAO DAS CARTAS****************\n");

    unsigned long int populacoes = (populacao1>populacao2);
    printf("A populacao de %s e maior que %s? %d\n", nome1, nome2, populacoes);
    
    float areas = (area1>area2);
    printf("A area de %s e maior que %s? %.0f\n", nome1, nome2, areas);

    int turisticos = (turistico1>turistico2);
    printf("Tem mais pontos Turisticos  %s do que %s? %d\n", nome1, nome2, turisticos);

    float pibs = (pib1>pib2);
    printf("O PIB de %s e maior que %s? %.0f\n", nome1, nome2, pibs);

    float dencipop = (DenPop1 < DenPop2);
    printf("A Densidade populacionao de %s e MENOR que %s? %.0f\n", nome1, nome2, dencipop); 

    float pibcap = (pib1 > pib2);
    printf("O PIB per Cap de %s e maior que %s? %.0f\n", nome1, nome2, pibcap); 

    float poderes = (poder1 > poder2);
    printf("A carta %s e MAIS PODEROSA que %s? %.0f\n", nome1, nome2, poderes); 


    //comparação

    if (populacao1>populacao2){
        printf("A populacao de %s e maior!", nome1);
    }else{
        printf("A populacao de %s e maior!", nome2);
    }

    return 0;
}