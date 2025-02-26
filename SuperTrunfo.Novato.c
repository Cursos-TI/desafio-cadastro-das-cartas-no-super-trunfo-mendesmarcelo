#include <stdio.h>

int main(){
printf("***Desafio Super Trunfo***\n"); 

char estado;
char codigo;
char cidade;
int populacao;
float area;
float PIB;
int pontos;

printf("Digite o estado: \n");
scanf("%s", &estado);

printf("Digite o código da carta: \n");
scanf("%s", &codigo);

printf("Digite o nome da cidade: \n");
scanf("%s", &cidade);

printf(" Digite a população: \n");
scanf("%d", &populacao);

printf("Digite a área em km2:\n");
scanf("%f", &area);
  printf("Digite o PIB:\n");
scanf("%f", &PIB);

printf("Digite a quantidade de pontos turísticos:\n");
scanf("%d", &pontos);

printf("Nome do Estado: %s\n");



return 0;

}