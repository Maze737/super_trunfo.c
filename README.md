# super_trunfo.c
Super trunfo nivel novato
linha adicionada por erro de enter no retorno
    printf("CARTA 1: \n");
    printf("Digite a LETRA do Estado (A-H): ");
    scanf(" %c", &Estado_carta1);
linha adicionada por falta de informacao
    printf("Área: %f km² \n"...
    printf("PIB: %f bilhões de reais \n"...
    

    código novato 
    #include <stdio.h>

int main(){
    char Estado_carta1; //Nome do Estado do Brasil
    char Codigo_carta1[4]; //Código da carta
    char Cidade_carta1[50]; //Nome da cidade
    int Populacao1; //Número de habitantes
    float Area1; //Área em km²
    float PIB1; //PIB da cidade
    int Turisticos1; //Número de pontos turísticos

    printf("CARTA 1: \n");
    printf("Digite a LETRA do Estado (A-H): ");
    scanf(" %c", &Estado_carta1);
    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", Codigo_carta1);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", Cidade_carta1);
    printf("Digite o número de Habitantes: \n");
    scanf("%d", &Populacao1);
    printf("Digite a área em km²: \n");
    scanf("%f", &Area1);
    printf("Digite o PIB da Cidade (bilhões de reais): \n");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Turisticos1);


    printf("Estado: %c \n", Estado_carta1);
    printf("Código: %s \n", Codigo_carta1);
    printf("Nome da Cidade: %s \n", Cidade_carta1);
    printf("População: %d \n", Populacao1);
    printf("Área: %f km² \n", Area1);
    printf("PIB: %f bilhões de reais \n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", Turisticos1);
    
    printf("\n"); // Linha de separacao

    char Estado_carta2; //Nome do Estado do Brasil
    char Codigo_carta2[4]; //Código da carta
    char Cidade_carta2[50]; //Nome da cidade
    int Populacao2; //Número de habitantes
    float Area2; //Área em km²
    float PIB2; //PIB da cidade
    int Turisticos2; //Número de pontos turísticos

    printf("CARTA 2: \n");
    printf("Digite a LETRA do Estado (A-H): ");
    scanf(" %c", &Estado_carta2);
    printf("Digite o código da carta: \n");
    scanf("%s", Codigo_carta2);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", Cidade_carta2);
    printf("Digite o número de Habitantes: \n");
    scanf("%d", &Populacao2);
    printf("Digite a área em km²: \n");
    scanf("%f", &Area2);
    printf("Digite o PIB da Cidade (bilhões de reais): \n");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Turisticos2);


    printf("Estado: %c \n", Estado_carta2);
    printf("Código: %s \n", Codigo_carta2);
    printf("Nome da Cidade: %s \n", Cidade_carta2);
    printf("População: %d \n", Populacao2);
    printf("Área: %f km² \n", Area2);
    printf("PIB: %f bilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", Turisticos2);

return 0;
}


código Aventureiro

#include <stdio.h>

int main(){
    char Estado_carta1; //Nome do Estado do Brasil
    char Codigo_carta1[4]; //Código da carta
    char Cidade_carta1[50]; //Nome da cidade
    int Populacao1; //Número de habitantes
    float Area1; //Área em km²
    float PIB1; //PIB da cidade
    int Turisticos1; //Número de pontos turísticos
    
    float Densidade1; // Densidade Populacional
    float Capita1; // PIB per capita


    printf("CARTA 1: \n");
    printf("Digite a LETRA do Estado (A-H): ");
    scanf(" %c", &Estado_carta1);
    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", Codigo_carta1);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", Cidade_carta1);
    printf("Digite o número de Habitantes: \n");
    scanf("%d", &Populacao1);
    printf("Digite a área em km²: \n");
    scanf("%f", &Area1);
    printf("Digite o PIB da Cidade (bilhões de reais): \n");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Turisticos1);

    Densidade1 = (float) Populacao1 / Area1;
    Capita1 = (PIB1 * 1000000000)/ Populacao1;


    printf("Estado: %c \n", Estado_carta1);
    printf("Código: %s \n", Codigo_carta1);
    printf("Nome da Cidade: %s \n", Cidade_carta1);
    printf("População: %d \n", Populacao1);
    printf("Área: %f km² \n", Area1);
    printf("PIB: %f bilhões de reais \n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", Turisticos1);
    printf("Densidade Populacional: %f hab/km² \n", Densidade1);
    printf("PIB per capita: %f reais \n", Capita1);


    printf("\n"); // Linha de separacao

    char Estado_carta2; //Nome do Estado do Brasil
    char Codigo_carta2[4]; //Código da carta
    char Cidade_carta2[50]; //Nome da cidade
    int Populacao2; //Número de habitantes
    float Area2; //Área em km²
    float PIB2; //PIB da cidade
    int Turisticos2; //Número de pontos turísticos
    
    float Densidade2; // Densidade Populacional
    float Capita2; // PIB per capita


    printf("CARTA 2: \n");
    printf("Digite a LETRA do Estado (A-H): ");
    scanf(" %c", &Estado_carta2);
    printf("Digite o código da carta: \n");
    scanf("%s", Codigo_carta2);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", Cidade_carta2);
    printf("Digite o número de Habitantes: \n");
    scanf("%d", &Populacao2);
    printf("Digite a área em km²: \n");
    scanf("%f", &Area2);
    printf("Digite o PIB da Cidade (bilhões de reais): \n");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Turisticos2);

    Densidade2 = (float) Populacao2 / Area2;
    Capita2 = (PIB2 * 1000000000)/ Populacao2;


    printf("Estado: %c \n", Estado_carta2);
    printf("Código: %s \n", Codigo_carta2);
    printf("Nome da Cidade: %s \n", Cidade_carta2);
    printf("População: %d \n", Populacao2);
    printf("Área: %f km² \n", Area2);
    printf("PIB: %f bilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", Turisticos2);
    printf("Densidade Populacional: %f hab/km² \n", Densidade2);
    printf("PIB per capita: %f reais \n", Capita2);


return 0;
}

código mestre

#include <stdio.h>

int main(){
    //VARIÁVEIS CARTA 1
    char Estado_carta1; //Nome do Estado do Brasil
    char Codigo_carta1[4]; //Código da carta
    char Cidade_carta1[50]; //Nome da cidade
    unsigned long long int Populacao1; //Número de habitantes
    float Area1; //Área em km²
    float PIB1; //PIB da cidade
    int Turisticos1; //Número de pontos turísticos
    
    float Densidade1; // Densidade Populacional
    float Capita1; // PIB per capita
    
    float SuperPoder1; //Soma dos valores

    //DADOS CARTA 1
    printf("CARTA 1: \n");
    printf("Digite a LETRA do Estado (A-H): ");
    scanf(" %c", &Estado_carta1);
    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", Codigo_carta1);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", Cidade_carta1);
    printf("Digite o número de Habitantes (somente números): \n");
    scanf("%llu", &Populacao1);
    printf("Digite a área em km²(somente números): \n");
    scanf("%f", &Area1);
    printf("Digite o PIB da Cidade em bilhões de reais (somente números): \n");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos (somente números): \n");
    scanf("%d", &Turisticos1);

    Densidade1 = (float) Populacao1 / Area1;
    Capita1 = (PIB1 * 1000000000)/ Populacao1;
    
    SuperPoder1 = (float)Populacao1 + (float)Area1 + ((float)PIB1 * 1000000000) + (int)Turisticos1 + (float)Capita1 + ((float)1/Densidade1);

    //Impressão dos dados carta 1
    printf("Estado: %c \n", Estado_carta1);
    printf("Código: %s \n", Codigo_carta1);
    printf("Nome da Cidade: %s \n", Cidade_carta1);
    printf("População: %llu \n", Populacao1);
    printf("Área: %f km² \n", Area1);
    printf("PIB: %f bilhões de reais \n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", Turisticos1);
    
    printf("Densidade Populacional: %f hab/km² \n", Densidade1);
    printf("PIB per capita: %f reais \n", Capita1);
    
    printf("Super Poder: %f \n", SuperPoder1); 

    

    printf("\n"); // Linha de separacao


    //variáveis carta 2
    char Estado_carta2; //Nome do Estado do Brasil
    char Codigo_carta2[4]; //Código da carta
    char Cidade_carta2[50]; //Nome da cidade
    unsigned long long int Populacao2; //Número de habitantes
    float Area2; //Área em km²
    float PIB2; //PIB da cidade
    int Turisticos2; //Número de pontos turísticos
    
    float Densidade2; // Densidade Populacional
    float Capita2; // PIB per capita
    
    float SuperPoder2; //Soma dos Valores


    //dados carta 2
    printf("CARTA 2: \n");
    printf("Digite a LETRA do Estado (A-H): ");
    scanf(" %c", &Estado_carta2);
    printf("Digite o código da carta (ex: B01): \n");
    scanf("%s", Codigo_carta2);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", Cidade_carta2);
    printf("Digite o número de Habitantes (somente números): \n");
    scanf("%llu", &Populacao2);
    printf("Digite a área em km² (somente números): \n");
    scanf("%f", &Area2);
    printf("Digite o PIB da Cidade em bilhões de reais (somente números): \n");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos (somente números): \n");
    scanf("%d", &Turisticos2);

    Densidade2 = (float) Populacao2 / Area2;
    Capita2 = (PIB2 * 1000000000)/ Populacao2;
    
    SuperPoder2 = (float)Populacao2 + (float)Area2 + ((float)PIB2 * 1000000000) + (int)Turisticos2 + (float)Capita2 + ((float) 1/Densidade2); 

    //impressão carta 2
    printf("Estado: %c \n", Estado_carta2);
    printf("Código: %s \n", Codigo_carta2);
    printf("Nome da Cidade: %s \n", Cidade_carta2);
    printf("População: %llu \n", Populacao2);
    printf("Área: %f km² \n", Area2);
    printf("PIB: %f bilhões de reais \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", Turisticos2);
    
    printf("Densidade Populacional: %f hab/km² \n", Densidade2);
    printf("PIB per capita: %f reais \n", Capita2);
    
    printf("Super Poder: %f \n", SuperPoder2);



printf("\n"); //Linha de Separação

    //Batalha de cartas

if (Populacao1 > Populacao2)
{
      // Se a condição for verdadeira, execute
    printf("Populacao: Carta 1 venceu (1)\n");
} else {
    // Se a condição for falsa, execute
    printf("Populacao: Carta 2 venceu (0)\n");
}

if (Area1 > Area2)
{
      // Se a condição for verdadeira, execute
    printf("Área: Carta 1 venceu (1)\n");
} else {
    // Se a condição for falsa, execute
    printf("Área: Carta 2 venceu (0)\n");
}

if (PIB1 > PIB2)
{
      // Se a condição for verdadeira, execute
    printf("PIB: Carta 1 venceu (1)\n");
} else {
    // Se a condição for falsa, execute
    printf("PIB: Carta 2 venceu (0)\n");
}

if (Turisticos1 > Turisticos2)
{
   // Se a condição for verdadeira, execute
    printf("Pontos Turísticos: Carta 1 venceu (1)\n");
} else {
    // Se a condição for falsa, execute
    printf("Pontos Turísticos: Carta 2 venceu (0)\n");
}

if (Densidade1 < Densidade2)
{
      // Se a condição for verdadeira, execute
    printf("Densidade: Carta 1 venceu (1)\n");
} else {
    // Se a condição for falsa, execute
    printf("Densidade: Carta 2 venceu (0)\n");
}

if (Capita1 > Capita2)
{
      // Se a condição for verdadeira, execute
    printf("PIB per Capita: Carta 1 venceu (1)\n");
} else {
    // Se a condição for falsa, execute
    printf("PIB per Capita: Carta 2 venceu (0)\n");
}

if (SuperPoder1 > SuperPoder2)
{
      // Se a condição for verdadeira, execute
    printf("Super Poder: Carta 1 venceu (1)\n");
} else {
    // Se a condição for falsa, execute
    printf("Super Poder: Carta 2 venceu (0)\n");
}


return 0;
}