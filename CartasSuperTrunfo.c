#include <stdio.h>

int main() {
    
    char carta01;
    char estado01[50];
    char codigo01[04];
    char nomedacidade01[50];
    int populacao01;
    float area01;
    double pib01;
    int pontosturisticos01; 
    
    char carta02;
    char estado02[50];
    char codigo02[04];
    char nomedacidade02[50];
    int populacao02;
    float area02;
    double pib02;
    int pontosturisticos02;

    printf("Bem vindo ao Super Trunfo - Cadastro de Cidades!\n");

    printf("carta01:\n");

    printf("Digite o estado: ");
    scanf("%s", &estado01);

    printf("Digite o codigo da carta:");
    scanf("%s", &codigo01);

    printf("Digite o nome da cidade:");
    scanf("%S", &nomedacidade01);

    printf("Digite a populacao:");
    scanf("%d", &populacao01);

    printf("Digite a area:");
    scanf("%.2f km²" , &area01);

    printf("Digite o pib:");
    scanf("%lf", &pib01);

    printf("Digite o nomero de potos turisticos:");
    scanf("%d", &pontosturisticos01);
    
    printf("\n\n");

    printf("carta02:\n");

    printf("Digite o estado: ");
    scanf("%s", &estado02);

    printf("Digite o codigo da carta:");
    scanf("%s", &codigo02);

    printf("Digite o nome da cidade:");
    scanf("%S", &nomedacidade02);

    printf("Digite a populacao:");
    scanf("%d", &populacao02);

    printf("Digite a area:");
    scanf("%.2f km²" , &area02);

    printf("Digite o pib:");
    scanf("%lf", &pib02);

    printf("Digite o nomero de potos turisticos:");
    scanf("%d", &pontosturisticos02);

    return 0;
}