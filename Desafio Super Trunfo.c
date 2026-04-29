#include <stdio.h>

int main(){

    // ==================== VARIÁVEIS ====================
    char estado1, estado2; 
    char codigo1[50], codigo2[50]; 
    char nome_da_Cidade1[50], nome_da_Cidade2[50];
    unsigned long int populacao1, populacao2; 
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2; 
    int escolha1, escolha2;
    float area1, area2; 
    float PIB1, PIB2;
    float densidade_populacional1, densidade_populacional2;
    float PIB_percapita1, PIB_percapita2;
    float superpoder1, superpoder2;
    float valor1_carta1, valor1_carta2;   
    float valor2_carta1, valor2_carta2;   
    float soma_carta1, soma_carta2;

    // ==================== PERGUNTAS - CARTA 1 ====================
    printf("Digite o estado da Carta 1: \n");
    scanf("%c", &estado1);

    printf("Digite o codigo da Carta 1: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: \n");
    scanf("%s", nome_da_Cidade1);

    printf("Digite a populacao da Carta 1: \n");
    scanf("%lu", &populacao1);

    printf("Digite a area em km² da Carta 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos da Carta 1: \n");
    scanf("%d", &numero_de_pontos_turisticos1);

    // ===================Calculos CARTA 1===================

    densidade_populacional1 = (float)populacao1 / area1;
    PIB_percapita1 = PIB1 / (float)populacao1;
    superpoder1 = (float)populacao1 + area1 + PIB1 + numero_de_pontos_turisticos1 + PIB_percapita1 + ((float)1 / densidade_populacional1);

 
    // ==================== PERGUNTAS - CARTA 2 ====================
    printf("Digite o estado da Carta 2: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da Carta 2: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: \n");
    scanf("%s", nome_da_Cidade2);

    printf("Digite a populacao da Carta 2: \n");
    scanf("%lu", &populacao2);

    printf("Digite a area em km² da Carta 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos da Carta 2: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    // ===================Calculos CARTA 2===================  
    densidade_populacional2 = (float)populacao2 / area2;
    PIB_percapita2 = PIB2 / (float)populacao2;
    superpoder2 = (float)populacao2 + area2 + PIB2 + numero_de_pontos_turisticos2 + PIB_percapita2 + ((float)1 / densidade_populacional2);


    //=======================RESULTADOS FINAIS====================

    // ==================== RESULTADOS - CARTA 1 ====================
    printf("=== CARTA 1 ===\n\n");

    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nome_da_Cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Numero de pontos turisticos: %d\n", numero_de_pontos_turisticos1);
    printf("Densidade populacional: %.2f\n", densidade_populacional1);
    printf("PIB per capita: %.2f\n", PIB_percapita1);
    printf("Super poder: %.2f\n", superpoder1);

    // ==================== RESULTADOS - CARTA 2 ====================
    printf("=== CARTA 2 ===\n\n");
    
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", nome_da_Cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", PIB_percapita2);
    printf("Super poder: %.2f\n", superpoder2);


    // ====================== MENU ESCOLHA 1 ======================
    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &escolha1);

    // ====================== MENU ESCOLHA 2 ======================
    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2) {
    printf("\nErro! Voce nao pode escolher o mesmo atributo duas vezes.\n");
    printf("Por favor, reinicie o programa e tente novamente.\n");
    return 0;
    }
    // ====================== SWITCH DA ESCOLHA 1 ======================
    switch (escolha1) {

    case 1:   // Populacao
    printf("\n=== Comparando Populacao ===\n");
    printf("Carta 1: %lu\n", populacao1);
    printf("Carta 2: %lu\n\n", populacao2);

    if (populacao1 > populacao2) {
    printf("Resultado: Carta 1 venceu!\n");
    } 
    else if (populacao1 < populacao2) {
    printf("Resultado: Carta 2 venceu!\n");
    } 
    else {
    printf("Resultado: Empate!\n");
    }
    break;

    case 2:  // Area
    printf("\n=== Comparando a Area ===\n");
    printf("Carta 1: %.2f\n", area1);
    printf("Carta 2: %.2f\n\n", area2);       
        
    if (area1 > area2) {
    printf("Resultado: Carta 1 venceu!\n");
    }
    else if (area1 < area2){    
    printf("Resultado: Carta 2 venceu!\n");
    }
    else {
    printf("Resultado: Empate!\n");
    }
    break;

    case 3:   // PIB
    printf("\n=== Comparando o PIB ===\n");
    printf("Carta 1: %.2f\n", PIB1);
    printf("Carta 2: %.2f\n\n", PIB2);

    if (PIB1 > PIB2) {
    printf("Resultado: Carta 1 venceu!\n");
    }
    else if (PIB1 < PIB2){
    printf("Resultado: Carta 2 venceu!\n");
    }
    else {
    printf("Resultado: Empate!\n");
    }
    break;

    case 4:   // Numero de pontos turisticos
    printf("\n=== Comparando Numero de Pontos Turisticos ===\n");
    printf("Carta 1: %d\n", numero_de_pontos_turisticos1);
    printf("Carta 2: %d\n\n", numero_de_pontos_turisticos2);

    if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) {
    printf("Resultado: Carta 1 venceu!\n");
    } 
    else if (numero_de_pontos_turisticos1 < numero_de_pontos_turisticos2) {
    printf("Resultado: Carta 2 venceu!\n");
    } 
    else {
    printf("Resultado: Empate!\n");
    }
    break;

    case 5:   // Densidade Populacional
    printf("\n=== Comparando Densidade Populacional ===\n");
    printf("Carta 1: %.2f\n", densidade_populacional1);
    printf("Carta 2: %.2f\n\n", densidade_populacional2);

    if (densidade_populacional1 < densidade_populacional2) {
    printf("Resultado: Carta 1 venceu!\n");
    }
    else if (densidade_populacional1 > densidade_populacional2){
    printf("Resultado: Carta 2 venceu!\n");
    }
    else {
    printf("Resultado: Empate!\n");
    }
    break;
               
    case 6:   // PIB per Capita
    printf("\n=== Comparando PIB per Capita ===\n");
    printf("Carta 1: %.2f\n", PIB_percapita1);
    printf("Carta 2: %.2f\n\n", PIB_percapita2);

    if (PIB_percapita1 > PIB_percapita2) {
    printf("Resultado: Carta 1 venceu!\n");
    }
    else if (PIB_percapita1 < PIB_percapita2){
    printf("Resultado: Carta 2 venceu!\n");
    }
    else {
    printf("Resultado: Empate!\n");
    }
    break;

    case 7:   // Super Poder
    printf("\n=== Comparando Super Poder ===\n");
    printf("Carta 1: %.2f\n", superpoder1);
    printf("Carta 2: %.2f\n\n", superpoder2);

    if (superpoder1 > superpoder2) {
    printf("Resultado: Carta 1 venceu!\n");
    }
    else if (superpoder1 < superpoder2){
    printf("Resultado: Carta 2 venceu!\n");
    }
    else {
    printf("Resultado: Empate!\n");
    }
    break;

    default:
    printf("Opcao invalida!\n");
    }

    // ====================== SWITCH DA ESCOLHA 2 ======================
    switch (escolha2) {

    case 1:   // Populacao
    printf("\n=== Comparando Populacao ===\n");
    printf("Carta 1: %lu\n", populacao1);
    printf("Carta 2: %lu\n\n", populacao2);

    if (populacao1 > populacao2) {
    printf("Resultado: Carta 1 venceu!\n");
    } 
    else if (populacao1 < populacao2) {
    printf("Resultado: Carta 2 venceu!\n");
    } 
    else {
    printf("Resultado: Empate!\n");
    }
    break;

    case 2:  // Area
    printf("\n=== Comparando a Area ===\n");
    printf("Carta 1: %.2f\n", area1);
    printf("Carta 2: %.2f\n\n", area2);       
        
    if (area1 > area2) {
    printf("Resultado: Carta 1 venceu!\n");
    }
    else if (area1 < area2){    
    printf("Resultado: Carta 2 venceu!\n");
    }
    else {
    printf("Resultado: Empate!\n");
    }
    break;

    case 3:   // PIB
    printf("\n=== Comparando o PIB ===\n");
    printf("Carta 1: %.2f\n", PIB1);
    printf("Carta 2: %.2f\n\n", PIB2);

    if (PIB1 > PIB2) {
    printf("Resultado: Carta 1 venceu!\n");
    }
    else if (PIB1 < PIB2){
    printf("Resultado: Carta 2 venceu!\n");
    }
    else {
    printf("Resultado: Empate!\n");
    }
    break;

    case 4:   // Numero de pontos turisticos
    printf("\n=== Comparando Numero de Pontos Turisticos ===\n");
    printf("Carta 1: %d\n", numero_de_pontos_turisticos1);
    printf("Carta 2: %d\n\n", numero_de_pontos_turisticos2);

    if (numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2) {
    printf("Resultado: Carta 1 venceu!\n");
    } 
    else if (numero_de_pontos_turisticos1 < numero_de_pontos_turisticos2) {
    printf("Resultado: Carta 2 venceu!\n");
    } 
    else {
    printf("Resultado: Empate!\n");
    }
    break;

    case 5:   // Densidade Populacional
    printf("\n=== Comparando Densidade Populacional ===\n");
    printf("Carta 1: %.2f\n", densidade_populacional1);
    printf("Carta 2: %.2f\n\n", densidade_populacional2);

    if (densidade_populacional1 < densidade_populacional2) {
    printf("Resultado: Carta 1 venceu!\n");
    }
    else if (densidade_populacional1 > densidade_populacional2){
    printf("Resultado: Carta 2 venceu!\n");
    }
    else {
    printf("Resultado: Empate!\n");
    }
    break;
               
    case 6:   // PIB per Capita
    printf("\n=== Comparando PIB per Capita ===\n");
    printf("Carta 1: %.2f\n", PIB_percapita1);
    printf("Carta 2: %.2f\n\n", PIB_percapita2);

    if (PIB_percapita1 > PIB_percapita2) {
    printf("Resultado: Carta 1 venceu!\n");
    }
    else if (PIB_percapita1 < PIB_percapita2){
    printf("Resultado: Carta 2 venceu!\n");
    }
    else {
    printf("Resultado: Empate!\n");
    }
    break;

    case 7:   // Super Poder
    printf("\n=== Comparando Super Poder ===\n");
    printf("Carta 1: %.2f\n", superpoder1);
    printf("Carta 2: %.2f\n\n", superpoder2);

    if (superpoder1 > superpoder2) {
    printf("Resultado: Carta 1 venceu!\n");
    }
    else if (superpoder1 < superpoder2){
    printf("Resultado: Carta 2 venceu!\n");
    }
    else {
    printf("Resultado: Empate!\n");
    }
    break;

    default:
    printf("Opcao invalida!\n");
    }

    // ====================== PEGANDO OS VALORES ESCOLHIDOS ======================


    // Atributo 1 (escolha1)
    if (escolha1 == 1) {
    valor1_carta1 = populacao1;
    valor1_carta2 = populacao2;
    }
    else if (escolha1 == 2) {
    valor1_carta1 = area1;
    valor1_carta2 = area2;
    }
    else if (escolha1 == 3) {
    valor1_carta1 = PIB1;
    valor1_carta2 = PIB2;
    }
    else if (escolha1 == 4) {
    valor1_carta1 = numero_de_pontos_turisticos1;
    valor1_carta2 = numero_de_pontos_turisticos2;
    }
    else if (escolha1 == 5) {
    valor1_carta1 = densidade_populacional1;
    valor1_carta2 = densidade_populacional2;
    }
    else if (escolha1 == 6) {
    valor1_carta1 = PIB_percapita1;
    valor1_carta2 = PIB_percapita2;
    }
    else if (escolha1 == 7) {
    valor1_carta1 = superpoder1;
    valor1_carta2 = superpoder2;
    }
    
    // Atributo 2 (escolha2)
    if (escolha2 == 1) {
    valor2_carta1 = populacao1;
    valor2_carta2 = populacao2;
    }
    else if (escolha2 == 2) {
    valor2_carta1 = area1;
    valor2_carta2 = area2;
    }
    else if (escolha2 == 3) {
    valor2_carta1 = PIB1;
    valor2_carta2 = PIB2;
    }
    else if (escolha2 == 4) {
    valor2_carta1 = numero_de_pontos_turisticos1;
    valor2_carta2 = numero_de_pontos_turisticos2;
    }
    else if (escolha2 == 5) {
    valor2_carta1 = densidade_populacional1;
    valor2_carta2 = densidade_populacional2;
    }
    else if (escolha2 == 6) {
    valor2_carta1 = PIB_percapita1;
    valor2_carta2 = PIB_percapita2;
    }
    else if (escolha2 == 7) {
    valor2_carta1 = superpoder1;
    valor2_carta2 = superpoder2;
    }
    soma_carta1 = valor1_carta1 + valor2_carta1;
    soma_carta2 = valor1_carta2 + valor2_carta2;
    // ====================== COMPARAÇÃO FINAL DOS DOIS ATRIBUTOS ======================
    printf("\n=== VENCEDOR GERAL ===\n");
    
    if (valor1_carta1 + valor2_carta1 > valor1_carta2 + valor2_carta2 ) {
    printf("Resultado: Carta 1 venceu nos atributos!\n");
    }
    else if (valor1_carta1 + valor2_carta1 < valor1_carta2 + valor2_carta2){    
    printf("Resultado: Carta 2 venceu nos atributos!\n");
    }
    else {
    printf("Resultado: Empate!\n");
    }
    printf("Soma dos atributos - Carta 1: %.2f\n", soma_carta1);
    printf("Soma dos atributos - Carta 2: %.2f\n", soma_carta2);
    
    return 0;   // finaliza o programa
}
