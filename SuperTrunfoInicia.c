#include <stdio.h>

int main(){
    //VARIÁVEIS CARTA 1
    char Pais_carta1[50]; //Nome do País da carta
    int Populacao1; //Número de habitantes
    float Area1; //Área em km²
    float PIB1; //PIB da cidade
    int Turisticos1; //Número de pontos turísticos
    float Densidade1; // Densidade Populacional
    char escolha_jogador = '0'; //Escolha do jogador
    
    
    //DADOS CARTA 1
    printf("CARTA 1: \n");
    printf("Digite o Nome do País: \n");
    scanf("%s", Pais_carta1);
    printf("Digite o número de Habitantes (somente números): \n");
    scanf("%d", &Populacao1);
    printf("Digite a área em km²(somente números): \n");
    scanf("%f", &Area1);
    printf("Digite o PIB da Cidade em bilhões de reais (somente números): \n");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos (somente números): \n");
    scanf("%d", &Turisticos1);

 Densidade1 = (float) Populacao1 / Area1;

    //Impressão dos dados carta 1
    printf("País: %s \n", Pais_carta1);
    printf("População: %d \n", Populacao1);
    printf("Área: %f km² \n", Area1);
    printf("PIB: %f bilhões de reais \n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", Turisticos1);
    printf("Densidade Populacional: %f hab/km² \n", Densidade1);
    
   

    printf("\n"); // Linha de separacao


    //variáveis carta 2
    char Pais_carta2[50]; //Nome do País da carta
    int Populacao2; //Número de habitantes
    float Area2; //Área em km²
    float PIB2; //PIB da cidade
    int Turisticos2; //Número de pontos turísticos
    float Densidade2; // Densidade Populacional
    

    //dados carta 2
    printf("CARTA 2: \n");
    printf("Digite o Nome do País: \n");
    scanf("%s", Pais_carta2);
    printf("Digite o número de Habitantes (somente números): \n");
    scanf("%d", &Populacao2);
    printf("Digite a área em km² (somente números): \n");
    scanf("%f", &Area2);
    printf("Digite o PIB da Cidade em bilhões de reais (somente números): \n");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos (somente números): \n");
    scanf("%d", &Turisticos2);

    Densidade2 = (float) Populacao2 / Area2;
    
    //impressão carta 2
    printf("País: %s \n", Pais_carta2);
    printf("População: %d \n", Populacao2);
    printf("Área: %f km² \n", Area2);
    printf("PIB: %f bilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", Turisticos2);
    printf("Densidade Populacional: %f hab/km² \n", Densidade2);
   
    printf ("Escolha um atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade\n");
    scanf(" %c", &escolha_jogador);

switch(escolha_jogador){   
       
    case '1': {
        if (Populacao1 > Populacao2) {
            printf("%s, %d Carta 1 venceu!\n", Pais_carta1, Populacao1);
        } else if (Populacao2 > Populacao1) {
            printf("%s, %d Carta 2 venceu!\n", Pais_carta2, Populacao2);
        } else {
            printf("Empate!\n");
        }
        break;
    }
    
    case '2': {
        if (Area1 > Area2) {
            printf("%s, %.2f Carta 1 venceu!\n", Pais_carta1, Area1);
        } else if (Area2 > Area1) {
            printf("%s, %.2f Carta 2 venceu!\n", Pais_carta2, Area2);
        } else {
            printf("Empate!\n");
        }
        break;
    }
    
    case '3': {
        if (PIB1 > PIB2) {
            printf("%s, %.2f Carta 1 venceu!\n", Pais_carta1, PIB1);
        } else if (PIB2 > PIB1) {
            printf("%s, %.2f Carta 2 venceu!\n", Pais_carta2, PIB2);
        } else {
            printf("Empate!\n");
        }
        break;
    }
    
    case '4': {
        if (Turisticos1 > Turisticos2) {
            printf("%s, %d Carta 1 venceu!\n", Pais_carta1, Turisticos1);
        } else if (Turisticos2 > Turisticos1) {
            printf("%s, %d Carta 2 venceu!\n", Pais_carta2, Turisticos2);
        } else {
            printf("Empate!\n");
        }
        break;
    }
    
    case '5': {
        if (Densidade1 < Densidade2) {
            printf("%s, %.2f Carta 1 venceu!\n", Pais_carta1, Densidade1);
        } else if (Densidade2 < Densidade1) {
            printf("%s, %.2f Carta 2 venceu!\n", Pais_carta2, Densidade2);
        } else {
            printf("Empate!\n");
        }
        break;
    }
    default: {
        printf("Opção inválida!\n");
        break;
    }
    return 0;
}