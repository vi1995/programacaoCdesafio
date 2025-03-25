#include <stdio.h>

int main(){

//** Declaração de variáveis **
char estado_1[10],estado_2[10];//Estados das cartas (A-H)
char codigo_carta_1[5],codigo_carta_2[5];//Códigos das cartas (até 4 caracteres)
char nome_cidade_1[18],nome_cidade_2[18];//Nomes das cidades (até 17 caracteres)
double qtq_populacao_1,qtq_populacao_2;//População das cidades
float areakm_1,areakm_2;//Área das cidades em km²
float pib_carta_1,pib_carta_2;//PIB das cidades em bilhões de reais
int qtq_pontos_turisticos_1,qtqpontos_turisticos_2;//Pontos turisticos das cidades 

//** Variáveis para estilo**
const char estilo[50]=
"\n\n";

printf("%s",estilo);

printf("\nCarta 1:\n");

printf("Digite o estado da primeira carta (A-H):");
scanf("%s9[^\n]",&estado_1);

printf("Digite o codigo da primeira carta:");
scanf("%s",codigo_carta_1);

printf("Digite o nome da primeira cidade:");
scanf("%s17[^\n",nome_cidade_1);

printf("Digite a quantidade da Populção da primeira carta:");
scanf("%f",&qtq_populacao_1);

printf("Digite a Área em km² da primeira carta:");
scanf("%f",areakm_1);

printf("Digite o PIB da primeira carta:");
scanf("%f",&pib_carta_1);

printf("Digite o número de pontos turísticos da primeira carta:");
scanf("%d",&qtq_pontos_turisticos_1);

printf("\nEstado : %s \n", estado_1);
printf("Código : %s \n",codigo_carta_1);
printf("Nome da cidade : %s\n",nome_cidade_1);
printf("População : %.2f Bilhões de reais \n",qtq_populacao_1);
printf("Área: %.2f km²\n",areakm_1); 
printf("PIB : %.2f \n",pib_carta_1);
printf("Ponto : %d\n",qtq_pontos_turisticos_1);

printf("%s",estilo);

printf("\nCarta 2:\n");

printf("Digite o estado da segunda carta (A-H):");
scanf("%s9[^\n]",&estado_2);

printf("Digite o nome da segunda carta:");
scanf("%s",codigo_carta_2);

printf("Digite o Nome da cidade da segunda carta:");
scanf("%s17[^\n]",nome_cidade_2);

printf("Digite a quantidade da população da segunda carta:");
scanf("%f",&qtq_populacao_2);

printf("Digite a Área da segunda carta:");
scanf("%f",&areakm_2);

printf("Digite o PIB da segunda carta:");
scanf("%f",&pib_carta_2);

printf("Digite o número de pontos turisticos da segunda carta:");
scanf("%d",&qtqpontos_turisticos_2);

printf("\nEstado : %s \n", estado_2);
printf("Código : %s \n",codigo_carta_2);
printf("Nome da cidade: %s \n",nome_cidade_2);
printf("População : %.2f Bilhões de reais \n",qtq_populacao_2);
printf("Área km² : %2.f km²\n",areakm_2); 
printf("PIB : %.2f \n",pib_carta_2);
printf("Ponto : %d \n",qtqpontos_turisticos_2);


return 0;

}
