/*
--------------------------------------
Programa: Jogo trunfo
Autor: dev Raj
Data: 28/08/2025

--------------------------------------
*/
#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomedacidade1[50], nomedacidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontost1, pontost2;

    printf("+=======================================+\n");
    printf(" BEM VINDOS AO JOGO SUPER TRUNFO        +\n");
    printf("+=======================================+\n");

    printf("**vamos comecar preenchendo a carta 01**\n");

    printf("+=======================================+\n");
    printf("+    VAMOS PREENCHER A CARTA - 01       +\n");
    printf("+=======================================+\n");
    printf("\n");

    printf("Digite a primeira letra do Estado (ex: S para SP):\n");
    scanf(" %c", &estado1); // o espaço antes de %c ignora espaços em branco
    printf("Digite a primeira letra do seu estado e um numero de 01 a 04 (Ex: A01):\n");
    scanf("%3s", codigo1);
    getchar(); // Limpa o '\n' do buffer
    printf("Digite o nome da cidade:\n");
    fgets(nomedacidade1, sizeof(nomedacidade1), stdin);

    printf("Digite o numero inteiro de população:\n");
    scanf("%d", &populacao1);
    printf("Digite a area da cidade em quilometros quadrados:\n");
    scanf("%f", &area1);
    printf("Digite o pib (produto interno bruto) da cidade:\n");
    scanf("%f", &pib1);
    printf("Digite quantos pontos turisticos a cidade tem:\n");
    scanf("%d", &pontost1);
    printf("\n");
    printf("\n");


    printf("+=======================================+\n");
    printf("+    VAMOS PREENCHER A CARTA - 02       +\n");
    printf("+=======================================+\n");

    
    printf("Digite a primeira letra do Estado (ex: R para RJ):\n");
    scanf(" %c", &estado2);

    printf("Digite a primeira letra do seu estado e um numero de 01 a 04 (Ex: B02):\n");
    scanf("%3s", codigo2);
    getchar(); // Limpa o '\n' do buffer
    printf("Digite o nome da cidade:\n");
    fgets(nomedacidade2, sizeof(nomedacidade2), stdin);
    
    printf("Digite o numero inteiro de população:\n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em quilometros quadrados:\n");
    scanf("%f", &area2);
    printf("Digite o pib (produto interno bruto) da cidade:\n");
    scanf("%f", &pib2);
    printf("Digite quantos pontos turisticos a cidade tem:\n");
    scanf("%d", &pontost2);
    printf("\n");
    printf("\n");
    printf("+=======================================+\n");
    printf("+           INFOR CARTA - 01            +\n");
    printf("+=======================================+\n");

    printf("Estado: %c\n", estado1);    
    printf("Código: %s\n", codigo1);  
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("Pib: %.2f\n", pib1);
    printf("Números de pontos turisticos: %d\n", pontost1);
    printf("\n");
    printf("\n");
    printf("+=======================================+\n");
    printf("+           INFOR CARTA - 02            +\n");
    printf("+=======================================+\n");

    printf("Estado: %c\n", estado2);    
    printf("Código: %s\n", codigo2);  
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("Pib: %.2f\n", pib2);
    printf("Números de pontos turisticos: %d\n", pontost2); 
    
    int opcao;
    printf("+=======================================+\n");
    printf("+   Escolha o atributo para comparar    +\n");
    printf("+=======================================+\n");

    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("Digite o número da opção desejada: \n");
    scanf("%d", &opcao);

    printf("Resultado da comparação\n");

    if(opcao == 1) {
        if (populacao1 > populacao2) 
            printf("Carta 01 venceu em populacao");
        else if (populacao2 > populacao1)
            printf("Carta 02 venceu em popuplacao");
        else    
            printf("Empate em populacao");
    } else if (opcao == 2) {
        if (area1 > area2)
            printf("Carta 01 venceu em area");
        else if (area2 > area1) 
            printf("Carta 02 venceu em area");
        else
            printf("Empate em area");
            
    } else if (opcao == 3) {
        if (pib1 > pib2)
            printf("Carta 01 venceu em pib");
        else if (pib2 > pib1)
            printf("Carta 02 venceu em pib");
        else    
            printf("Empate em pib");
   } else if (opcao == 4) {
        if(pontost1 > pontost2)
            printf("Carta 01 venceu em pontos turisticos");
        else if(pontost2 > pontost1)
            printf("Carta 02 venceu em pontos turisticos");
        else
            printf("Empatou em pontos turisticos");

   } else
        printf("Opção inválida!!\n");

     


   
    return 0;
}