#include <stdio.h>


int main() {

char estado[50], nome_cidade[50], codigo_carta[20];
int turista;
float área, pib;
double população;

char iniciar[30];


printf("Cadastro de cartas de cartas do trunfo. \n");
printf("Digite iniciar, para começar! \n");
scanf("%s", iniciar);


  printf("Escolha o estado:  \n");
  scanf("%s", estado);

  printf("Qual o codigo da carta: \n");
  scanf("%s", codigo_carta);

  printf("Qual é o nome da cidade: \n");
  scanf("%s", nome_cidade);

 printf("População: \n");
  scanf("%lf", &população);

  printf("Forneça a quantidade de KMs quadrados: \n");
  scanf("%f", &área);

  printf("Qual o PIB?: \n");
  scanf("%f",  &pib);

  printf("Quantidade de pontos turiticos: \n");
  scanf("%d", &turista);

printf("Segue abaixo a primeira carta cadastrada:");
printf("Estado: %s \n", estado);
printf("Codigo: %s \n", codigo_carta);
printf("Cidade: %s \n", nome_cidade);
printf("Habitantes: %lf \n", população);
printf("Kms área: %f\n", área);
printf("PIB: %f \n", pib);
printf("Quantidade de PT: %d \n", turista);


char estado2[50], nome_cidade2[50], codigo_carta2[20];
int turista2;
float área2, pib2;
double população2;

printf("Cadastro da segunda carta do trunfo. \n");

  printf("Escolha o estado: \n");
  scanf("%s", estado2);

  printf("Qual o codigo da carta: \n");
  scanf("%s", codigo_carta2);

  printf("Qual é o nome da cidade: \n");
  scanf("%s", nome_cidade2);

  printf("População: \n");
  scanf("%lf", &população2);

  printf(" Forneça a quantidade de KMs quadrados: \n");
  scanf("%f", &área2);

  printf("Qual o PIB?:\n");
  scanf("%f", &pib2);

  printf("Quantidade de pontos turisticos: \n");
  scanf("%d", &turista2);

  printf("Segue abaixo a segunda carta cadastrada: \n");
  printf("Estado: %s \n", estado2);
  printf("Codigo: %s \n", codigo_carta2);
 printf("Cidade: %s \n", nome_cidade2);
 printf("Habitantes: %lf \n", população2);
 printf("KMs área: %f\n", área2);
 printf("PIB: %f \n", pib2);
 printf("Quantidade de PT: %d \n", turista2);

return 0;
} 
