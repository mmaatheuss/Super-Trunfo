#include <stdio.h> // Biblioteca para entrada e saída padrão (printf, scanf, etc.)
#include <string.h> // Biblioteca usada para manipular strings (ex: strcspn)

int main(){
    //Declaração das variaveis
    char estado1[3], estado2[3];
    char codigoCarta1[4], codigoCarta2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    float pib1, pib2;

    //Solicitação dos dados ao usuario Carta 1
    printf("Dados Carta 1\n");
    
    printf("Digite o estado:");// Sigla do Estado ex: SP,RJ, MG
    scanf("%2s", estado1);//Lê o estado(maximo 2 caracteres)

    printf("Digite o código da carta:");// Código da carta ex: A01,B02
    scanf("%3s", codigoCarta1);// Lê o codigo da carta(maximo 3 caracteres)

    getchar();

    printf("Digite o nome da cidade:");//Nome da cidade ex: Fortaleza
    fgets(cidade1, sizeof(cidade1), stdin);// Lê cidade incluindo espaços
    cidade1[strcspn(cidade1, "\n")] = '\0'; // remove '\n'
   
    printf("Digite o número de habitantes da cidade:");// População da cidade
    scanf("%i", &populacao1);//Lê a população da cidade

    printf("Digite a área da cidade:");
    scanf("%f", &area1);// Lê área

    printf("Digite O Produto Interno Bruto(PIB)da cidade:");
    scanf("%f", &pib1);// Lê 0 pib

    printf("Digite o número de pontos turísticos na cidade:");
    scanf("%d", &pontosTuristicos1);// Lê os pontos turisticos

    //Solicitação do dados ao usuario Carta 2
    printf("Dados Carta 2\n");

    printf("Digite o estado:");// Sigla do Estado ex: SP,RJ, MG
    scanf("%2s", estado2);//Lê o estado(maximo 2 caracteres)

    printf("Digite o código da carta:");// Código da carta ex: A01,B02
    scanf("%3s", codigoCarta2);// Lê o codigo da carta(maximo 3 caracteres)

    getchar();

    printf("Digite o nome da cidade:");//Nome da cidade ex: Fortaleza
    fgets(cidade2, sizeof(cidade2), stdin);// Lê cidade incluindo espaços
    cidade2[strcspn(cidade2, "\n")] = '\0'; // remove '\n'

    printf("Digite o número de habitantes da cidade:");//População da cidade
    scanf("%i", &populacao2);//Lê população da cidade

    printf("Digite a área da cidade:");
    scanf("%f", &area2);// Lê área

    printf("Digite O Produto Interno Bruto(PIB)da cidade:");
    scanf("%f", &pib2);// Lê o pib

    printf("Digite o  número de pontos turísticos na cidade:");
    scanf("%d", &pontosTuristicos2);// Lê os pontos turisticos

    
    //Exibe todos os dados informados pelo usuario
    
    // Carta 1
    printf("\n=== Carta 1 ===\n");
    printf(" Estado:%s - Código:%s - Cidade:%s\n", estado1, codigoCarta1, cidade1);
    printf(" População:%i - Área:%f km²\n ", populacao1,area1 );
    printf(" Pib:%f bilhões de reais - Número Pontos Turisticos: %d\n", pib1, pontosTuristicos1);

    //Carta 2
    printf("\n=== Carta 2 ===\n");
    printf(" Estado:%s - Código:%s - Cidade:%s\n", estado2, codigoCarta2, cidade2);
    printf(" População:%i - Área:%f km²\n ", populacao2,area2);
    printf(" Pib:%f bilhões de reais - Número Pontos Turisticos: %d\n", pib2, pontosTuristicos2);

    return 0;
}
