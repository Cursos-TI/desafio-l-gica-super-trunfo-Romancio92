//incluir biblioteca
#include <stdio.h>

//incluir a função principal
int main() {

    //declarar variáveis
    // atribui valor as variáveis para facilitar o teste da atividade; em outras atividades a entrada dos dados é manual;
    int pontoturistico1 = 50, pontoturistico2 = 35;    
    char estado1 = 'A', estado2 = 'B' ;
    char cidade1[20] = "Fortaleza", cidade2[20] = "Maceio", codigo1[20] = "01", codigo2[20] = "01";
    float area1 = 313.8, area2 = 509.6, pib1 = 78000000000, pib2 = 28000000000;
    float densidade1, densidade2, pibpc1, pibpc2;
    unsigned long int populacao1 = 2500000, populacao2 = 1600000;
    float superpoder1, superpoder2;
    int resultadoarea, resultadopib, resultadodensidade, resultadopibpc, resultadopopulacao, resultadopontoturistico, resultadosuperpoder;
    int atributo1, atributo2, resultado1, resultado2;
    
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

    printf("\n COMPARAÇÃO ENTRE CARTAS (ATRIBUTO: POPULAÇÃO) \n");
    printf(" Carta 1: %s - %lu \n", cidade1, populacao1);
    printf(" Carta 2: %s - %lu \n", cidade2, populacao2);
        
    if(populacao1 > populacao2) {
        printf("\n Carta 1 venceu! \n");
        printf(" A cidade vencedora é: %s \n",cidade1);
    } else {
        printf("\n Carta 2 venceu! \n");
        printf(" A cidade vencedora é: %s \n",cidade2);
    }


    // menu principal de escolha de atributo para comparação
    printf("\n### MENU DE COMPARAÇÃO #### \n");
    printf("Escolha o atributo que deseja comparar: \n");
    printf("1. Nome da cidade \n");
    printf("2. População \n");
    printf("3. Área \n");
    printf("4. PIB \n");
    printf("5. Número de pontos turísticos \n");
    printf("6. Densidade demográfica \n");
    printf("\nEscolha o primeiro atributo: \n");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo: \n");
    scanf("%d", &atributo2);

    
    //criando logica de comparação para cada escolha realizada no menu por meio do switch;
    switch(atributo1) {

        case 1: 
        printf("Nome da cidade 1: %s - Nome da cidade 2: %s \n", cidade1, cidade2);
        printf("Não há comparação/apenas exibição dos nomes das cidades \n");
        break;

        case 2: 
        printf("População 1: %lu - População 2: %lu\n", populacao1, populacao2);
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;

        case 3: 
        printf("Área 1: %.2f - Área 2: %.2f\n", area1, area2);
        resultado1 = area1 > area2 ? 1 : 0;
        break;

        case 4: 
        printf("PIB 1: %.2f - PIB 2: %.2f\n", pib1, pib2);
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;

        case 5: 
        printf("Qte pontos turísticos 1: %d - Qte pontos turísticos 2: %d\n", pontoturistico1, pontoturistico2);
        resultado1 = pontoturistico1 > pontoturistico2 ? 1 : 0;
        break;

        case 6: 
        printf("Densidade demográfica 1: %.2f - Densidade demográfica 2: %.2f\n", densidade1, densidade2);
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;

        default: 
        printf("Opção inválida");
        break;
    }
    
    //criando bloqueio para escolha do mesmo atributo;
    if (atributo1 == atributo2) 
    {printf("Erro. Você escolheu o mesmo atributo!");
            } else {
        switch(atributo2) {
            case 1: 
            printf("Nome da cidade 1: %s - Nome da cidade 2: %s \n", cidade1, cidade2);
            printf("Não há comparação/apenas exibição dos nomes das cidades \n");
            break;
    
            case 2: 
            printf("População 1: %lu - População 2: %lu\n", populacao1, populacao2);
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
    
            case 3: 
            printf("Área 1: %.2f - Área 2: %.2f\n", area1, area2);
            resultado2 = area1 > area2 ? 1 : 0;
            break;
    
            case 4: 
            printf("PIB 1: %.2f - PIB 2: %.2f\n", pib1, pib2);
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;
    
            case 5: 
            printf("Qte pontos turísticos 1: %d - Qte pontos turísticos 2: %d\n", pontoturistico1, pontoturistico2);
            resultado2 = pontoturistico1 > pontoturistico2 ? 1 : 0;
            break;
    
            case 6: 
            printf("Densidade demográfica 1: %.2f - Densidade demográfica 2: %.2f\n", densidade1, densidade2);
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;
    
            default: 
            printf("Opção inválida");
            break;
    }

    //implementando a logica de comparação do jogo para os cases dos atributos;
    if (resultado1 && resultado2 == 1) {{
        printf("\n ### RESULTADO FINAL ###\n");
        printf("Cidade 1: %s - Cidade 2: %s \n", cidade1, cidade2);
        printf("Parabéns, você venceu!\n");
    } }else if (resultado1 != resultado2) {
        printf("\n ### RESULTADO FINAL ###\n");
        printf("Cidade 1: %s - Cidade 2: %s \n", cidade1, cidade2);
        printf("O jogo empatou!\n");
    } else {
        printf("\n ### RESULTADO FINAL ###\n");
        printf("Cidade 1: %s - Cidade 2: %s \n", cidade1, cidade2);
        printf ("Infelizmente, você perdeu\n");    }}






    //finalizar a função principal
    return 0;


}   