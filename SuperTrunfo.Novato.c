#include <stdio.h>

int main(){
printf("***Desafio Super Trunfo***\n"); 

char estado[50];
char codigo[50];
char cidade[50];
float populacao;
float area;
float pib;
int pontos;

printf("Digite o estado: \n");
scanf("%s", estado);

printf("Digite o código da carta: \n");
scanf("%s", codigo);

printf("Digite o nome da cidade: \n");
scanf("%s", cidade);

printf(" Digite a população: \n");
scanf("%f", &populacao);

printf("Digite a área em km2:\n");
scanf("%f", &area);
  printf("Digite o PIB:\n");
scanf("%f", &pib);

printf("Digite a quantidade de pontos turísticos:\n");
scanf("%d", &pontos);


    printf("Nome do Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.f km2\n", area);
    printf("PIB: %.f\n", pib);
    printf("Pontos Turísticos: %d\n", pontos);



return 0;
