#include <stdio.h>

int main(){
    char estado1[1];
    char estado2[1];
    char codigo1[2];
    char codigo2[2];
    char nome1[50];
    char nome2[50];
    int populacao1, populacao2, turistico1, turistico2;
    float area1, area2;
    float pib1, pib2;
//carta 1
    printf("Digite a letra do nome do primeiro estado: \n");
    scanf("%s", &estado1);

    printf("Digite o codigo do estado: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", &nome1);

    printf("Digite a populucao: \n");
    scanf("%d", &populacao1);

    printf("Digite a area(em KM quadrados): \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Pontos turisticos: \n");
    scanf("%d", &turistico1);

     //Densidade populacional, PIB per capita, carta1:
    float DenPop1 = (float)(populacao1 / area1);
    float PIBCap1 = (float)(pib1 / populacao1);

    //Calculo carta1
    printf("Estado: '%s'",estado1);
    printf("\nCodigo: '%s'",estado1);
    printf("%s",codigo1);
    printf("\nNome: '%s'",nome1);
    printf("\nPopulacao: '%d'",populacao1);
    printf("\nArea(KM): '%f",area1);
    printf("\nPIB: '%f'",pib1);
    printf("\nPontos turisticos: '%d'",turistico1);
    printf("\nDensidade Populacional: '%.2f'",DenPop1);
    printf("\nPIB per Capita: '%.2f'",PIBCap1);

   



    //carta 2
    printf("\nDigite a letra do nome do segundo estado: \n");
    scanf("%s", &estado2);

    printf("Digite o codigo do estado: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", &nome2);

    printf("Digite a populucao: \n");
    scanf("%d", &populacao2);

    printf("Digite area(em KM quadrados): \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Pontos turisticos: \n");
    scanf("%d", &turistico2);

    //Densidade populacional, PIB per capita, carta2:
    float DenPop2 = (float)(populacao2 / area2);
    float PIBCap2 = (float)(pib2 / populacao2);

    //Calculo carta2

    printf("\nEstado: '%s'",estado2);
    printf("\nCodigo: '%s'",estado2);
    printf("%s",codigo2);
    printf("\nNome: '%s'",nome2);
    printf("\nPopulacao: '%d'",populacao2);
    printf("\nArea(KM): '%f",area2);
    printf("\nPIB: '%f'",pib2);
    printf("\nPontos turisticos: '%d'",turistico2);
    printf("\nDensidade Populacional: '%.2f'",DenPop2);
    printf("\nPIB per Capita: '%.2f'",PIBCap2);


    
    
    return 0;
}