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
    char escolha2_jogador = '0'; //Escolha do segundo jogador
    float ValorCarta1; //Valor da carta 1
    float ValorCarta2; //Valor da carta 2

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

    printf("\n"); // Linha de separacao

    // Validação para evitar escolhas iguais
    printf("Escolha outro atributo:\n");
    if (escolha_jogador != '1') printf("1. População\n");
    if (escolha_jogador != '2') printf("2. Área\n");
    if (escolha_jogador != '3') printf("3. PIB\n");
    if (escolha_jogador != '4') printf("4. Pontos Turísticos\n");
    if (escolha_jogador != '5') printf("5. Densidade\n");
    scanf(" %c", &escolha2_jogador);

    printf("\n"); // Linha de separacao

    // Obter valores dos atributos escolhidos
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;

    // Para primeiro atributo
    switch(escolha_jogador) {
        case '1': valor1_carta1 = Populacao1; valor1_carta2 = Populacao2; break;
        case '2': valor1_carta1 = Area1; valor1_carta2 = Area2; break;
        case '3': valor1_carta1 = PIB1; valor1_carta2 = PIB2; break;
        case '4': valor1_carta1 = Turisticos1; valor1_carta2 = Turisticos2; break;
        case '5': valor1_carta1 = Densidade1; valor1_carta2 = Densidade2; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    // Para segundo atributo
    switch(escolha2_jogador) {
        case '1': valor2_carta1 = Populacao1; valor2_carta2 = Populacao2; break;
        case '2': valor2_carta1 = Area1; valor2_carta2 = Area2; break;
        case '3': valor2_carta1 = PIB1; valor2_carta2 = PIB2; break;
        case '4': valor2_carta1 = Turisticos1; valor2_carta2 = Turisticos2; break;
        case '5': valor2_carta1 = Densidade1; valor2_carta2 = Densidade2; break;
        default: printf("Opção inválida!\n"); return 1;
    }

    // Calcular soma dos atributos
    ValorCarta1 = valor1_carta1 + valor2_carta1;
    ValorCarta2 = valor1_carta2 + valor2_carta2;

    // Exibir resultado detalhado
    printf("Resultado da comparação:\n");
    printf("Carta 1 (%s): %.2f + %.2f = %.2f\n", Pais_carta1, valor1_carta1, valor2_carta1, ValorCarta1);
    printf("Carta 2 (%s): %.2f + %.2f = %.2f\n", Pais_carta2, valor1_carta2, valor2_carta2, ValorCarta2);

    // Comparar e exibir vencedor
    if (ValorCarta1 > ValorCarta2) {
        printf("Carta 1 (%s) venceu!\n", Pais_carta1);
    } else if (ValorCarta2 > ValorCarta1) {
        printf("Carta 2 (%s) venceu!\n", Pais_carta2);
    } else {
        printf("Empate!\n");
    }

return 0;
}