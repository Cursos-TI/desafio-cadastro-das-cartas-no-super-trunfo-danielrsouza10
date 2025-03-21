#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao1, populacao2, qtdePontosTuristicos1, qtdePontosTuristicos2;
    float pib1, pib2, area1, area2;
    char estado1, estado2;
    char codigoDaCarta1[5], codigoDaCarta2[5];
    char cidade1[50], cidade2[50];
    double superPoder1, superPoder2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Insira uma letra que corresponda ao estado (A a F): \n");
    scanf("%c", &estado1);
    getchar();
    
    printf("Insira o estado e um codigo da carta com 2 digitos (0 a 9): \n");
    scanf("%s", &codigoDaCarta1);
    
    printf("Insira o nome da cidade: \n");
    scanf("%s", &cidade1);
    
    printf("Insira a quantidade de habitantes: \n");
    scanf("%d", &populacao1);
    
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib1);
    
    printf("Insira a Area da cidade: \n");
    scanf("%f", &area1);
    
    printf("Insira a quantidade de pontos turisticos na cidade: \n");
    scanf("%d", &qtdePontosTuristicos1);
    getchar();

    printf("Insira uma letra que corresponda ao estado (A a F): \n");
    scanf("%c", &estado2);
    getchar();
    
    printf("Insira o estado e um codigo da carta com 2 digitos (0 a 9): \n");
    scanf("%s", &codigoDaCarta2);
    
    printf("Insira o nome da cidade: \n");
    scanf("%s", &cidade2);
    
    printf("Insira a quantidade de habitantes: \n");
    scanf("%d", &populacao2);
    
    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib2);
    
    printf("Insira a Area da cidade: \n");
    scanf("%f", &area2);
    
    printf("Insira a quantidade de pontos turisticos na cidade: \n");
    scanf("%d", &qtdePontosTuristicos2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
    printf("----- CIDADE 01----- \n");
    printf("Nome da cidade: %s\n", cidade1);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoDaCarta1);
    printf("Qtde Habitantes: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", qtdePontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", populacao1/area1);
    printf("PIB per Capita: %.2f\n", pib1/populacao1);
    
    printf("----- CIDADE 02----- \n");
    printf("Nome da cidade: %s\n", cidade2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoDaCarta2);
    printf("Qtde Habitantes: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", qtdePontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", populacao2/area2);
    printf("PIB per Capita: %.2f\n", pib2/populacao2);

    superPoder1 = (float) populacao1 + area1 + pib1 + qtdePontosTuristicos1 + pib1/populacao1 - populacao1/area1;
    superPoder2 = (float) populacao2 + area2 + pib2 + qtdePontosTuristicos2 + pib2/populacao2 - populacao2/area2;

    printf("Comparacao de Cartas\n");
    printf("Populacao: Carta %d venceu\n", populacao1>populacao2);
    printf("Area: Carta %d venceu \n", area1>area2);
    printf("PIB: Carta %d venceu \n", pib1>pib2);
    printf("Pontos turisticos: Carta %d venceu \n", qtdePontosTuristicos1 > qtdePontosTuristicos2);
    printf("Densidade populacional: Carta %d venceu \n", populacao1/area1 > populacao2/area2);
    printf("PIB per Capita: Carta %d venceu \n", pib1/populacao1 > pib2/populacao2);
    printf("Super Poder: Carta %d venceu \n", superPoder1 > superPoder2);

    
    return 0;
}
