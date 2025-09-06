#include <stdio.h>

int main() {

    /*
    Desafio Super Trunfo - Países
    Nível Mestre
    */

    // O nome das variáveis indica os atributos e número da carta ao que se referem 

    // Declaração das variáveis carta 1
    char estado1;
    char codigo1[20], cidade1[20];
    int turismo1;
    unsigned long int populacao1; 
    float area1, pib1, densidadePopulacional1, pibPerCapita1, superPoder1;
    

    // Declaração das variáveis carta 2
    char estado2;
    char codigo2[20], cidade2[20];
    int turismo2;
    unsigned long int populacao2; 
    float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;

    printf("Carta 1\n");     // indica ao usuário o ínicio do cadastro das informações da primeira carta do jogo

    printf("Digite a letra inicial do Estado: ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da Carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o PIB - Produto Interno Bruto da cidade: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos tem na cidade: ");
    scanf("%d", &turismo1);

    // Cálculo da Densidade Populacional, PIB per Capita e Super Poder - Carta 1

    densidadePopulacional1 = (float)populacao1 / area1; // utilizar a função (float) converte explicitamente a variavel int (tipo inteiro) em float (tipo c/ casa decimal)
    pibPerCapita1 = (float)populacao1 / pib1;     
    /* utilização do operador matematico divisão para dividir a popupação pela área em km² para chegar na densidade populacional 
    e dividr a população pelo pib para chegar no pib per capita em reais */
    superPoder1 = (long double) (float)populacao1 + (float)turismo1 + area1 + pib1 + (1 / densidadePopulacional1) + pibPerCapita1;
    // utilizar a função (long double) converte explicitamente a variavel float em long double (tipo (.) flutuante com valor muito preciso)

    printf("Carta 2\n");     // indica ao usuário o ínicio do cadastro das informações da segunda carta do jogo

    printf("Digite a letra inicial do Estado: ");
    scanf(" %c", &estado2);
    
    printf("Digite o código da Carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o PIB - Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos tem na cidade: ");
    scanf("%d", &turismo2);

    // Cálculo da Densidade Populacional, PIB per Capita  e Super Poder - Carta 2

    densidadePopulacional2 = (float)populacao2 / area2; 
    pibPerCapita2 = (float)populacao2 / pib2;
    superPoder2 = (long double) (float)populacao2 + (float)turismo2 + area2 + pib2 + (1 / densidadePopulacional2) + pibPerCapita2;

    printf("Carta 1\n");      // impressao dos dados da primeira carta
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.1f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2lf\n\n", superPoder1);

    printf("Carta 2\n");     // impressao dos dados da segunda carta
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.1f bilhões de reais\n", pib2);
    printf("Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2lf\n\n", superPoder2);

    printf("Comparação de Cartas\n");  // indica o início da comparação dos atributos das cartas 1 e 2 e menciona a carta vencedora para cada atributo
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 2 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", turismo1 > turismo2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    // Vence a carta de maior (>) valor naquele atributo ou menor (<) se tratando da densidade populacional
    // Resultado (1) = Verdadeiro - indica que a carta 1 venceu a carta 2 na comparação dos atributos 
    // Resultado (0) = Falso - indica que a carta 1 perdeu da carta 2 na comparação dos atributos, desta forma carta 2 é vencedora na comparação dos valores deste atributo. 
    return 0;
}