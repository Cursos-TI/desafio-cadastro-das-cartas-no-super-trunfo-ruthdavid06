#include <stdio.h>

int main() {

    // Desafio Super Trunfo - Países
    // Etapa 1 - Cadastro das Cartas 1 e 2

    // cadastro do nome das variaveis indicando os atributos e o número da carta ao que se referem
    char estado1, estado2; 
    char codigo1[20], codigo2[20], cidade1[20], cidade2[20];
    int populacao1, populacao2, turismo1, turismo2;
    float area1, area2, pib1, pib2;
    
    printf("Carta 1\n");     // indica ao usuário o ínicio do cadastro das informações da primeira carta do jogo

    printf("Digite a letra inicial do Estado: ");
    scanf(" %c", &estado1);
    
    printf("Digite o código do Estado: ");
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


    printf("Carta 2\n");     // indica ao usuário o ínicio do cadastro das informações da segunda carta do jogo

    printf("Digite a letra inicial do Estado: ");
    scanf(" %c", &estado2);
    
    printf("Digite o código do Estado: ");
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

    printf("Carta 1\n");      // impressao dos dados da primeira carta
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.1f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", turismo1);

    printf("Carta 2\n");     // impressao dos dados da segunda carta
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.1f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);

    return 0;
}
