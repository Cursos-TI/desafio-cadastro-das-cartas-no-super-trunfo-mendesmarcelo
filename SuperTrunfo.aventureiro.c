#include <stdio.h>



int main(){

 

    printf("\nDesafio Super Trunfo\n");

   

    char estado1[50];
    char codigo1[10]; // A.H., A01
    char cidade1[50];
    float populacao1;
    float area1;
    float PIB1;
    int pontosturisticos1;
    float densidade1; 

    char estado2[50];
    char codigo2[10];
    char cidade2[50];
    float populacao2;
    float area2;
    float PIB2;
    int pontosturisticos2;
    float densidade2;




    printf("*Carta 1\n*");

    printf("Digite o estado da carta 1 (A-H): \n");

    scanf("%s", estado1);

    printf("Digite o codigo da carta 1 (ex: A01):\n");

    scanf("%s", codigo1);

    printf("Digite o nome da cidade da carta 1: \n");

    scanf("%s", cidade1);

    printf("Digite a população da cidade da carta 1(em mil):\n");

    scanf("%f", &populacao1);

    printf("Digite a área da cidade da carta 1 (em km²):\n ");

    scanf("%f", &area1);

    printf("Digite o PIB da cidade da carta 1(em milhões de reais):\n ");

    scanf("%f", &PIB1);

    printf("Digite o número de pontos turístios da carta 1:\n ");

    scanf("%d", &pontosturisticos1);
    densidade1 = populacao1 / area1;


    printf("*Carta 2*\n");

    printf("Digite o estado da carta 2 (A-H):\n ");

    scanf("%s", estado2);

    printf("Digite o codigo da carta 2 (ex: A01): \n");

    scanf("%s", codigo2);

    printf("Digite o nome da cidade da carta 2:\n ");

    scanf("%s", cidade2);

    printf("Digite a população da cidade da carta 2 (em Mil):\n ");

    scanf("%f", &populacao2);

    printf("Digite a área da cidade da carta 2 (em km²):\n ");

    scanf("%f", &area2);

    printf("Digite o PIB da cidade da carta 2 (em Milhões de reais):\n ");

    scanf("%f", &PIB2);

    printf("Digite o número de pontos turístios da carta 2:\n ");

    scanf("%d", &pontosturisticos2);
    
    densidade2 = populacao2 / area2;

    

       //Exibição carta 1



       printf("\nInformações da carta 1:\n");

       printf("Estado: %s\n", estado1);

       printf("Código: %s\n", codigo1);

       printf("Cidade: %s\n", cidade1);

       printf("População: %f\n", populacao1);

       printf("Área: %fkm²\n", area1);

       printf("PIB: R$%f\n", PIB1);

       printf ("Pontos Turísticos: %d\n", pontosturisticos1);

       printf("A densidade populacional é: %.2f habitantes por km²\n",densidade1);
       

     //Exibição carta 2



     printf("\nInformações da carta 2:\n");

     printf("Estado: %s\n", estado2);

     printf("Código: %s\n", codigo2);

     printf("Cidade: %s\n", cidade2);

     printf("População: %f\n", populacao2);

     printf("Área: %fkm²\n", area2);

     printf("PIB: R$%f\n", PIB2);

     printf ("Pontos Turísticos: %d\n", pontosturisticos2);

     printf("A densidade populacional é: %.2f habitantes por km²\n",densidade2);







    return 0;



}