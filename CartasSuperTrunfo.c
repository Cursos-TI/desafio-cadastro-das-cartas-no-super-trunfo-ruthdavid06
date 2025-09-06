#include <stdio.h>

int main() {
    
    /*
    Desafio Super Trunfo - Países
    Etapa 1 - Cadastro das Cartas 1 e 2
    */

    // O nome das variáveis indica os atributos e o número da carta ao que se referem 

    // Declaração das variáveis carta 1
    char estado1;
    char codigo1[20], cidade1[20];
    int populacao1, turismo1;
    float area1, pib1, densidade1, capita1;

    // Declaração das variáveis carta 2
    char estado2;
    char codigo2[20], cidade2[20];
    int populacao2, turismo2;
    float area2, pib2, densidade2, capita2;

    printf("Carta 1\n");     // indica ao usuário o ínicio do cadastro das informações da primeira carta do jogo

    printf("Digite a letra inicial do Estado: ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da Carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o PIB - Produto Interno Bruto da cidade: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos tem na cidade: ");
    scanf("%d", &turismo1);

    // Cálculo da Densidade Populacional e PIB per Capita - Carta 1

    densidade1 = (float)populacao1 / area1; // utilizar a função (float) converte explicitamente a variavel int (tipo inteiro) em FLOAT (tipo c/ casa decimal)
    capita1 = (float)populacao1 / pib1;     
    /* utilização do operador matematico divisão para dividir a popupação pela área em km² para chegar na densidade populacional 
    e dividr a população pelo pib para chegar no pib per capita em reais */

    printf("Carta 2\n");     // indica ao usuário o ínicio do cadastro das informações da segunda carta do jogo

    printf("Digite a letra inicial do Estado: ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da Carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o PIB - Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos tem na cidade: ");
    scanf("%d", &turismo2);

    // Cálculo da Densidade Populacional e PIB per Capita - Carta 2

    densidade2 = (float)populacao2 / area2; 
    capita2 = (float)populacao2 / pib2;

    printf("Carta 1\n");      // impressao dos dados da primeira carta
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.1f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", capita1);

    printf("Carta 2\n");     // impressao dos dados da segunda carta
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.1f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n\n", capita2);

    return 0;
}