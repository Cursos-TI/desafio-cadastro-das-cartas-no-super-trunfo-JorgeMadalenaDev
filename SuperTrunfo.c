#include <stdio.h>

int main() {
    
    char estado01[50], codigo01[4], nomedacidade01[50];
    int populacao01, pontosturisticos01; 
    float area01;
    double pib01;
    
    char estado02[50], codigo02[4], nomedacidade02[50];
    int populacao02, pontosturisticos02;
    float area02;
    double pib02;

    printf("Bem vindo ao Super Trunfo - Cadastro de Cidades!\n");

    printf("carta01:\n");

    printf("Digite o estado: ");
    scanf("%s", estado01);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo01);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidade01);

    printf("Digite a populacao: ");
    scanf("%d", &populacao01);

    printf("Digite a area: ");
    scanf("%f", &area01);

    printf("Digite o PIB: ");
    scanf("%lf", &pib01);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos01);

    printf("\n\n");

    printf("carta02:\n");

    printf("Digite o estado: ");
    scanf("%s", estado02);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo02);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidade02);

    printf("Digite a populacao: ");
    scanf("%d", &populacao02);

    printf("Digite a area: ");
    scanf("%f", &area02);

    printf("Digite o PIB: ");
    scanf("%lf", &pib02);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos02);

    printf("\n\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado01);
    printf("Código: %s\n", codigo01);
    printf("Nome da Cidade: %s\n", nomedacidade01);
    printf("População: %d\n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: %.2lf bilhões de reais\n", pib01);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos01);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado02);
    printf("Código: %s\n", codigo02);
    printf("Nome da Cidade: %s\n", nomedacidade02);
    printf("População: %d\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: %.2lf bilhões de reais\n", pib02);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos02);

    return 0;
}