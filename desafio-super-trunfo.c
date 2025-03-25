#include <stdio.h>

int main(){

//** Declaração de variáveis **
char estado_1[10],estado_2[10];//Aumenta o tamanho para 10 para incluir o caractere nulo
char codigo_carta_1[5],codigo_carta_2[5];//Aumenta para 5 para incluir o caractere nulo
char nome_cidade_1[18],nome_cidade_2[18];//Mantém o tamanho 18 para o nome das cidades 
float qtq_populacao_1,qtq_populacao_2;//Declara uma variável de ponto flutuante chamada "população"
float areakm_1,areakm_2;//Declara uma varável de ponto flutuante chamada "Área"
float pib_carta_1,pib_carta_2;//Declara uma variável de ponto flutuante chamada "PIB"
int qtq_pontos_turisticos_1,qtqpontos_turisticos_2;//Declara uma variável inteira chamada "Pontos turistícos"

//** Variáveis para estilo**
const char estilo[50]=
"\n\n";

printf("%s",estilo);

printf("\nCarta 1:\n");

printf("Digite o estado da primeira carta (A-H):");
scanf("%s9[^\n]",estado_1); //Lê o nome do Estado incluindo espaços,limitado a 9 caracteres

printf("Digite o codigo da primeira carta:");
scanf("%s",codigo_carta_1);//Lê até 5 caracteres para o código

printf("Digite o nome da primeira cidade:");
scanf("%s17[^\n",nome_cidade_1);//Lê o nome da cidade incluindo espaços,limitado a 17 caracteres

printf("Digite a quantidade da Populção da primeira carta:");
scanf("%f",&qtq_populacao_1);//Lê a densidade populacional em bilhões

printf("Digite a Área em km² da primeira carta:");
scanf("%f",&areakm_1);//Lê a área em km²

printf("Digite o PIB da primeira carta:");
scanf("%f",&pib_carta_1);//Lê o PIB per capita

printf("Digite o número de pontos turísticos da primeira carta:");
scanf("%d",&qtq_pontos_turisticos_1);//Lê a quantidade de pontos turísticos

printf("\nEstado : %s \n", estado_1);
printf("Código : %s \n",codigo_carta_1);
printf("Nome da cidade : %s\n",nome_cidade_1);
printf("População : %f Bilhões de reais \n",qtq_populacao_1);
printf("Área: %.2f km²\n",areakm_1); 
printf("PIB : %.2f \n",pib_carta_1);
printf("Ponto : %d\n",qtq_pontos_turisticos_1);

printf("%s",estilo);

printf("\nCarta 2:\n");

printf("Digite o estado da segunda carta (A-H):");
scanf("%s9[^\n]",estado_2);//Lê o nome do Estado incluindo espaços,limitado a 9 caracteres

printf("Digite o nome da segunda carta:");
scanf("%s",codigo_carta_2);//Lê até 5 caracteres para o código

printf("Digite o Nome da cidade da segunda carta:");
scanf("%s17[^\n]",nome_cidade_2);//Lê o nome da cidade incluindo espaços,limitado a 17 carcteres

printf("Digite a quantidade da população da segunda carta:");
scanf("%f",&qtq_populacao_2);//Lê a densidade populacional em bilhões

printf("Digite a Área da segunda carta:");
scanf("%f",&areakm_2);//Lê a área em km²

printf("Digite o PIB da segunda carta:");
scanf("%f",&pib_carta_2);//Lê o PIB per capita

printf("Digite o número de pontos turisticos da segunda carta:");
scanf("%d",&qtqpontos_turisticos_2);//Lê a quantidade de pontos turísticos

printf("\nEstado : %s \n", estado_2);
printf("Código : %s \n",codigo_carta_2);
printf("Nome da cidade: %s \n",nome_cidade_2);
printf("População : %f Bilhões de reais \n",qtq_populacao_2);
printf("Área km² : %2.f km²\n",areakm_2); 
printf("PIB : %.2f \n",pib_carta_2);
printf("Ponto : %d \n",qtqpontos_turisticos_2);


return 0; //Retorna 0para indicar que o programa foi executado com sucesso

}
