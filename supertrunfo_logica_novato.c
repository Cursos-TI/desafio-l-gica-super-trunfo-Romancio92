//incluir biblioteca
#include <stdio.h>

//incluir a função principal
int main() {

    //declarar variáveis
    int pontoturistico1, pontoturistico2;    
    char estado1, estado2;
    char cidade1[20], cidade2[20], codigo1[20], codigo2[20];
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibpc1, pibpc2;
    unsigned long int populacao1, populacao2;
    float superpoder1, superpoder2;
    int resultadoarea, resultadopib, resultadodensidade, resultadopibpc, resultadopopulacao, resultadopontoturistico, resultadosuperpoder;
    
    //printar pergunta; interagir com usuário
    //captar o dado prenchido pelo usuário e armazenar em uma variável
    printf("Digite a letra do código do Estado 1: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade1);

    printf("Digite a população da cidade: \n");
    scanf(" %lu", &populacao1);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib1);

    printf("Digite a área da cidade: \n");
    scanf(" %f", &area1);

    printf("Digite o nº de pontos turísticos da cidade: ");
    scanf(" %d", &pontoturistico1);
     
    printf("Digite a letra do código do Estado 2: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: \n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", cidade2);

    printf("Digite a população da cidade: \n");
    scanf(" %lu", &populacao2);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib2);

    printf("Digite a área da cidade: \n");
    scanf(" %f", &area2);

    printf("Digite o nº de pontos turísticos da cidade: \n");
    scanf(" %d", &pontoturistico2);

    //calcular a densidade da carta 1 e 2 a partir de outras informações de preenchimento
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    //calcular o pib per capita da carta 1 e 2 a partir de outras informações de preenchimento
    pibpc1 = pib1 / (float) populacao1;
    pibpc2 = pib2 / (float) populacao2;

     //calcular o superpoder das cartas 1 e 2; utilizar conversao de tipos de dados, modificadores de tipos de dados;
     superpoder1 = (float) populacao1 + area1 + pib1 + (float) pontoturistico1 + 1 / densidade1 + pibpc1; 
     superpoder2 = (float) populacao2 + area2 + pib2 + (float) pontoturistico2 + 1 / densidade2 + pibpc2;

    //imprimir as informações das cartas preenchidas pelo usuário;
    printf("\n CARTA_1 \n ESTADO: %c \n CÓDIGO DO ESTADO: %s \n NOME DA CIDADE: %s \n POPULAÇÃO: %lu \n", estado1, codigo1, cidade1, populacao1);
    printf(" ÁREA: %.2f km² \n PIB: %.2f bilhões de reais \n Nº PONTOS TURÍSTICOS: %d \n", area1, pib1, pontoturistico1);
    printf(" DENSIDADE POPULACIONAL: %.2f hab/km² \n PIB PER CAPITA: %.2f reais\n", densidade1, pibpc1); 
    printf(" SUPER PODER: %.2f\n",superpoder1);

    printf("\n CARTA_2 \n ESTADO: %c \n CÓDIGO DO ESTADO: %s \n NOME DA CIDADE: %s \n POPULAÇÃO: %lu \n", estado2, codigo2, cidade2, populacao2);
    printf(" ÁREA: %.2f km² \n PIB: %.2f bilhões de reais \n Nº PONTOS TURÍSTICOS: %d \n", area2, pib2, pontoturistico2);
    printf(" DENSIDADE POPULACIONAL: %.2f hab/km² \n PIB PER CAPITA: %.2f reais\n", densidade2, pibpc2); 
    printf(" SUPER PODER: %.2f\n", superpoder2);

    //comparar atributo das cartas 1 e 2
    resultadoarea = area1 > area2;
    resultadodensidade = densidade1 < densidade2;
    resultadopib = pib1 > pib2;
    resultadopontoturistico = pontoturistico1 > pontoturistico2;
    resultadopibpc = pibpc1 > pibpc2;
    resultadopopulacao = populacao1 > populacao2;
    resultadosuperpoder = superpoder1 > superpoder2;

    //imprimir o resultado das comparações
    printf("\n COMPARAÇÃO ENTRE CARTAS 1 E 2: \n RESULTADO COMPARAÇAO AREA: %d\n RESULTADO COMPARAÇAO DENSIDADE: %d\n", resultadoarea, resultadodensidade);
    printf(" RESULTADO COMPARAÇAO PIB: %d\n RESULTADO COMPARAÇAO PONTO TURISTICO: %d\n RESULTADO COMPARAÇAO PIB PER CAPITA:%d\n", resultadopib, resultadopontoturistico, resultadopibpc);
    printf(" RESULTADO COMPARAÇAO POPULAÇAO: %d\n RESULTADO COMPARAÇAO SUPER PODER: %d\n", resultadopopulacao, resultadosuperpoder);

    //imprimir a comparação das cartas com base no atributo população
    printf("\n COMPARAÇÃO ENTRE CARTAS (ATRIBUTO: POPULAÇÃO) \n");
    printf(" Carta 1: %s - %lu \n", cidade1, populacao1);
    printf(" Carta 2: %s - %lu \n", cidade2, populacao2);
        
    //estrutura de decisão if/else para decidir carta vencedora
    if(populacao1 > populacao2) {
        printf("\n Carta 1 venceu! \n");
        printf(" A cidade vencedora é: %s",cidade1);
    } else {
        printf("\n Carta 2 venceu! \n");
        printf(" A cidade vencedora é: %s",cidade2);
    }

    
    //finalizar a função principal
    return 0;
}