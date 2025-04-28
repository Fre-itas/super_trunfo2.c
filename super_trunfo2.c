#include <stdio.h>

int main(){
    char Estado1[50];
    char codigo1 [3];
    char Cidade1 [50];
  unsigned long int Populacao1;
    float Area1;
    float PIB1;
    int pontos_turisticos1;

    char Estado2[50];
    char codigo2 [3];
    char Cidade2[50];
   unsigned long int Populacao2;
    float Area2;
    float PIB2;
    int pontos_turisticos2;


    //Campo de preenchimento Carta1. O usuário pode colocar o dado das cartas em suas áreas correspondentes
    printf("Dados Carta 1:\n");

    printf("Digite seu Estado: \n");
    scanf("%s", Estado1);

    printf("Código da Carta: \n");
    scanf("%s", codigo1);

    printf("Digite sua Cidade: \n");
    scanf("%s", Cidade1);

    printf("População: \n");
    scanf("%lu", &Populacao1);

    printf("Área em km²: \n");
    scanf("%f", &Area1);

    printf("PIB: \n");
    scanf("%f", &PIB1);

    printf("Pontos Turísticos: \n");
    scanf("%i", &pontos_turisticos1);


    //Cálculo de Densidade Populacional, de PIB Per Capita e SUper Poder.  Carta 1
    float Densidade_Populacional =   Populacao1 / Area1;
    float PIB1_perCapita =  PIB1 / Populacao1;
    float Super_Poder1 = (int) Populacao1 + Area1 + PIB1 + pontos_turisticos1 + PIB1_perCapita + Densidade_Populacional;

    

    //Campo de preenchimento Carta2. O usuário pode colocar o dado das cartas em suas áreas correspondentes
    printf("Dados Carta 2: \n");

    printf("Digite seu Estado: \n");
    scanf("%s", Estado2);

    printf("Código da Carta: \n");
    scanf("%s", codigo2);

    printf("Digite sua Cidade: \n");
    scanf("%s", Cidade2);

    printf("População: \n");
    scanf("%lu", &Populacao2);

    printf("Área em km²: \n");
    scanf("%f", &Area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Pontos Turísticos: \n");
    scanf("%i", &pontos_turisticos2);

    //Cálculo de Densidade Populacional, de PIB Per Capita e Super Poder.  Carta 2
    float Densidade_Populacional2 = (float) Populacao2 / Area2;
    float PIB2_perCapita = (float) PIB2 / Populacao2;
    float Super_Poder2 = (int) Populacao2 + Area2 + PIB2 + pontos_turisticos2 + PIB2_perCapita + Densidade_Populacional2;

    
    printf("*** COMPARAÇÃO DE CARTAS:(ATRIBUTO: POPULAÇÃO) ***\n");

    printf("População 1: %lu\n", Populacao1);
    printf("População 2: %lu\n", Populacao2);
    
    if(Populacao1 > Populacao2){
        printf("Carta 1 (%s) venceu!\n ", Estado1);
    }
    else{
        printf("Carta 2 (%s) venceu!\n", Estado2);
    }

    return 0;
}