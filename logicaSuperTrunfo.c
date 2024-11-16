#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    char   cidade1, cidade2, populacao, area, Pib, turisticos;

    printf("cidade: \n");
    scanf("%s", &cidade1);
    printf("populacao: \n");
    scanf("%s\n", &populacao);
    printf("area: \n");
    scanf("%s\n", &area);
    printf("Pib: \n");
    scanf("%s\n", &Pib);
    printf("turisticos: \n");
    scanf("%s\n", &turisticos);

    if(cidade1 < cidade2) {
    printf("cidade1  tem maior populacao. \n");
} else {
    printf("cidade2  tem maior populacao. \n");
}

if(populacao){
    printf("populacao e maior. \n");
} else {
    printf("populacao e maior");
}

if (area ){
    printf("area e superior! \n");
} else {
    printf("area e superior!");
}
if( Pib){
    printf("Pib aumentou nos ultimos anos. \n");
} else {
    printf("Pib aumentou nos ultimos anos. \n");
}

if(turisticos){
    printf("quantos pontos turisticos. \n");
} else {
    printf("quantos pontos turisticos");
}



}



