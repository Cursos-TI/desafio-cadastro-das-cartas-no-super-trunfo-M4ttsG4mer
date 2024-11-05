//Desafio Super Trunfo - Países (Nível Básico)
#include <stdio.h>

int main() {
//variáveis de cada atributo da cidade:
    char estado;
    char codigodacarta[3];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int numerodepontos;

    printf("Cadastro das Cartas SuperTrunfo - Países \n");

//cadastro das cartas:
    printf("Defina o Estado da Carta: \n");
    scanf("%c", &estado);

    printf("Defina o Código da Carta(Ex:A01): \n");
    scanf("%s", &codigodacarta);

    printf("Defina o Nome da Cidade: \n");
    scanf("%s", &cidade);

    printf("População da Cidade: \n");
    scanf("%d", &populacao);

    printf("Área em Km²: \n");
    scanf("%f", &area);

    printf("PIB da cidade (em Bilhões de R$): \n");
    scanf("%f", &pib);

    printf("Números de Pontos Turísticos: \n");
    scanf("%d", &numerodepontos);

//exibindo os dados
    printf("Estado: %c\n", estado);
    printf("Carta - %s\n", codigodacarta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área em Km²: %f\n", area);
    printf("PIB da Cidade (em Bilhões de R$): %f\n", pib);
    printf("Números de Pontos Turísticos: %d", numerodepontos);


    return 0;
}
