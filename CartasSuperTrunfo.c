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

  printf("Quantidade de habitantes: \n");
  scanf("%d", população);

  printf("Forneça a quantidade de KMs quadrados: \n");
  scanf("%f", área);

  printf("Qual o PIB?: \n");
  scanf("%f",  pib);

  printf("Quantidade de pontos turiticos: \n");
  scanf("%d", turista);


printf("Segue abaixo a primeira carta cadastrada:");
printf("Estado: %s \n", estado);
printf("Codigo: %s \n", codigo_carta);
printf("Cidade: %s \n", nome_cidade);
printf("Habitantes: %d \n", população);
printf("Kms área: %f\n", área);
printf("PIB: %f", pib);
printf("Quantidade de PT: %d", turista);

return 0;
} 
