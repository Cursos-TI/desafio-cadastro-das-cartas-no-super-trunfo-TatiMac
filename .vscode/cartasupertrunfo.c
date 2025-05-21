
#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
//  Cada país está dividido em 8 estados
// Cada Estado tem 4 cidades 
// A carta tem que ser identificada por um código
// Criar uma estrutura, pra nao ter que ta repetindo as variaveis porque pode ficar confuso.
/* modelo aula 
carta 1: 
    estado : a
    codigo: a01
    nome : (lembrar de nao usar nome composto)
    populacao: 
    area: km2
    pib:
    numero de pontos turisticos: 

 NIVEL AVENTUREIRO 
  - acrescentar densidade populacional populacao/area
  - acrescentar PIB per capita pib/populacao 
  - e apresentar na saide de dados 
  - tentar usar funcoes (primeira aula aventureiro)


*/

//   COMECO FUNCOES 

float calculo_densidade(float populacao, float area) {
    return populacao / area;
};
float calculo_percapita(float pib, float populacao) {
    return pib / populacao;
};
// como nao tem controle de erro ter cuidado com os numeros que vai inserir



// 1. criando as cartas 
struct carta_estrutura {
// lembrar que para o codigo vou usar letras maisculas para os estados e numeros para cidade
// comecando com a primeira letra do alfabeto e a sequencia 01 (A01/A02/A03/A04)
// lembra que em c tem um espaco a mais. 
    char estado[25];
    char codigo[4]; 
    char cidade[25];
    float populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    // so registrar duas cartas 

    struct carta_estrutura carta_1, carta_2;
// carta 1
    printf("Cadastro da Primeira Carta:\n");
    printf("Nao usar ',' ou '.' na introduçao dos numeros!");
    printf("Estado: ");
    scanf(" %s", carta_1.estado);
    printf("Código da Cidade: ");
    scanf(" %s", carta_1.codigo);
    printf("Cidade: ");
    scanf(" %s", carta_1.cidade ); // NAO ESQUECER DE ESPACAR 
    printf("Populacao: ");
    scanf(" %f", &carta_1.populacao);
    printf("Area: ");
    scanf(" %f", &carta_1.area);
    printf("PIB: ");
    scanf(" %f", &carta_1.pib);
    printf("Quantidade de Pontos Turisticos: ");
    scanf(" %d", &carta_1.pontos_turisticos);

// carta 2
    printf("\n\n");
    printf("Cadastro da Segunda Carta:\n");
    printf("Nao usar ',' ou '.' na introduçao dos numeros!");
    printf("Estado: ");
    scanf(" %s", carta_2.estado);
    printf("Codigo da Cidade: ");
    scanf(" %s", carta_2.codigo);
    printf("Cidade: ");
    scanf(" %s", carta_2.cidade ); 
    printf("Populacao: ");
    scanf(" %f", &carta_2.populacao);
    printf("Area: ");
    scanf(" %f", &carta_2.area);
    printf("PIB: ");
    scanf(" %f", &carta_2.pib);
    printf("Quantidade de Pontos Turisticos: ");
    scanf(" %d", &carta_2.pontos_turisticos);

// calculando a densidade e pib per capita
     // carta 1

    float densidade_1 = calculo_densidade(carta_1.populacao, carta_1.area);
    float pib_percapita_1 = calculo_percapita(carta_1.pib, carta_1.populacao);

    // carta 2

    float densidade_2 = calculo_densidade(carta_2.populacao, carta_2.area);
    float pib_percapita_2 = calculo_percapita(carta_2.pib, carta_2.populacao);

// 2. imprimir as cartas

// carta 1
    printf("\n");
    printf("------- CARTAS CADASTRADAS -------\n");
    printf("Primeira Carta:\n");
    printf("Estado: %s\n", carta_1.estado);
    printf("Codigo da Cidade: %s\n", carta_1.codigo);
    printf("Cidade: %s\n", carta_1.cidade);
    printf("Populacao: %.3f habitantes\n", carta_1.populacao );
    printf("Area: %.4f Km²\n", carta_1.area);
    printf("Densidade Populacional:%.2f hab/km²\n", densidade_1); // ACRENSENTADO DENSIDADE 
    printf("PIB: %.4f\n", carta_1.pib);
    printf("PIB per capita: %.2f\n", pib_percapita_1); // ACRENSENTADO PIB PER CAPITA
    printf("Quantidade de Pontos Turisticos: %d\n", carta_1.pontos_turisticos);
    printf("\n");
// carta 2
    printf("------- Segunda Carta -------\n");
    printf("Estado: %s\n", carta_2.estado);
    printf("Codigo da Cidade: %s\n", carta_2.codigo);
    printf("Cidade: %s\n", carta_2.cidade);
    printf("Populacao: %.3f habitantes\n", carta_2.populacao);
    printf("Area: %.4f Km²\n", carta_2.area);
    printf("Densidade Populacional:%.2f hab/km²\n", densidade_2); // ACRENSENTADO DENSIDADE
    printf("PIB: %.4f\n", carta_2.pib);
    printf("PIB per capita: %.2f\n", pib_percapita_2); // ACRENSENTADO PIB PER CAPITA 
    printf("Quantidade de Pontos Turisticos: %d\n", carta_2.pontos_turisticos);

       

    return 0;
}

