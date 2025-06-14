#include <stdio.h> // Biblioteca para entrada e saída padrão (printf, scanf, etc.)
#include <string.h> // Biblioteca usada para manipular strings (ex: strcspn)

int main(){
    //Declaração das variaveis
    char estado1[3], estado2[3];
    char codigoCarta1[4], codigoCarta2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    float pib1, pib2;
   
    //Solicitação dos dados ao usuario Carta 1
    printf("Dados Carta 1\n");
    
    printf("Digite o estado:");// Sigla do Estado ex: SP,RJ, MG
    scanf("%2s", estado1);//Lê o estado(maximo 2 caracteres)

    printf("Digite o código da carta:");// Código da carta ex: A01,B02
    scanf("%3s", codigoCarta1);// Lê o codigo da carta(maximo 3 caracteres)

    getchar(); // Limpa '\n' deixado no buffer

    printf("Digite o nome da cidade:");//Nome da cidade ex: Fortaleza
    fgets(cidade1, sizeof(cidade1), stdin);// Lê cidade incluindo espaços
    cidade1[strcspn(cidade1, "\n")] = '\0'; // remove '\n'
   
    printf("Digite a população da cidade:");// População da cidade
    scanf("%lu", &populacao1);//Lê a população da cidade

    printf("Digite a área da cidade:");
    scanf("%f", &area1);// Lê área

    printf("Digite o Produto Interno Bruto(PIB)da cidade:");
    scanf("%f", &pib1);// Lê 0 pib

    printf("Digite o número de pontos turísticos na cidade:");
    scanf("%d", &pontosTuristicos1);// Lê os pontos turisticos

    // Cálculo da densidade populacionaL e Pib per capita

    float densidadePopulacional1 =  populacao1 / area1;
    
    float pibPerCapita1 = (pib1 * 1000000000 ) / populacao1;

    //Calculo do Super Poder

    float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1 );

   //Solicitação do dados ao usuario Carta 2
    printf("Dados Carta 2\n");

    printf("Digite o estado:");// Sigla do Estado ex: SP,RJ, MG
    scanf("%2s", estado2);//Lê o estado(maximo 2 caracteres)

    printf("Digite o código da carta:");// Código da carta ex: A01,B02
    scanf("%3s", codigoCarta2);// Lê o codigo da carta(maximo 3 caracteres)

    getchar(); // Limpa '\n' deixado no buffer

    printf("Digite o nome da cidade:");//Nome da cidade ex: Fortaleza
    fgets(cidade2, sizeof(cidade2), stdin);// Lê cidade incluindo espaços
    cidade2[strcspn(cidade2, "\n")] = '\0'; // remove '\n'

    printf("Digite a população da cidade:");//População da cidade
    scanf("%lu", &populacao2);//Lê população da cidade

    printf("Digite a área da cidade:");
    scanf("%f", &area2);// Lê área

    printf("Digite o Produto Interno Bruto(PIB)da cidade:");
    scanf("%f", &pib2);// Lê o pib

    printf("Digite o  número de pontos turísticos na cidade:");
    scanf("%d", &pontosTuristicos2);// Lê os pontos turisticos

    // Cálculo da densidade populacionaL e Pib per capita

    float densidadePopulacional2 = populacao2 / area2;

    float pibPerCapita2 =  (pib2 * 1000000000 ) / populacao2;

    //Calculo do Super Poder

     float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

      //Exibe todos os dados informados pelo usuario
    
    // Carta 1
    printf("\n=== Carta 1 ===\n");
    printf(" Estado:%s - Código:%s - Cidade:%s\n", estado1, codigoCarta1, cidade1);
    printf(" População:%lu - Área:%.2f km²\n ", populacao1,area1 );
    printf(" Pib:%.2f bilhões de reais - Número Pontos Turisticos: %d\n", pib1, pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km² - PIB per Capita: %.2f reais\n", densidadePopulacional1, pibPerCapita1);

    //Carta 2
    printf("\n=== Carta 2 ===\n");
    printf(" Estado:%s - Código:%s - Cidade:%s\n", estado2, codigoCarta2, cidade2);
    printf(" População:%lu - Área:%.2f km²\n ", populacao2,area2);
    printf(" Pib:%.2f bilhões de reais - Número Pontos Turisticos: %d\n", pib2, pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km² - PIB per Capita: %.2f reais\n", densidadePopulacional2, pibPerCapita2);

    // Comparações Cartas 
    printf("\n=== Comparações ===\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2 );
    printf("Aréa: Carta 1 venceu (%d)\n", area1 > area2 );
    printf("Pib: Carta 1 venceu (%d)\n", pib1 > pib2 );
    printf("Número de Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2 );
    printf("Pib per Capita: Carta 1 venceu  (%d)\n", pibPerCapita1 > pibPerCapita2 );
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2 );

    return 0;
}
