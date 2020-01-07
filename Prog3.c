#include <stdio.h>

int menu;
float moeda;

int main(void){ //Programa com um menu de escolhas para fazer conversões

    printf("Insira um dos menus apresentados: \n 1- Euro - USD Dollar \n 2- USD Dollar - Euro \n 3- Euro - CAD \n 4- CAD - Euro\n");
    scanf("%d", &menu);

    switch(menu){ //4 Opções para o utilizador para conversões.

        case 1: //Converte de Eur para USD 

        printf("Insira o valor que quer converter: ");
        scanf("%f", &moeda);
        printf("%.2f Eur = %.2f USD\n", moeda, moeda*1.12);

        break;

        case 2: //Converte de USD para Eur

        printf("Insira o valor que quer converter: ");
        scanf("%f", &moeda);
        printf("%.2f USD = %.2f Eur\n", moeda, moeda/1.12);

        break;

        case 3: //Converte de Eur para CAD

        printf("Insira o valor que quer converter: ");
        scanf("%f", &moeda);
        printf("%.2f Eur = %.2f CAD", moeda, moeda*1.45);

        break;

        case 4: //Converte de CAD para Eur

        printf("Insira o valor que quer converter: ");
        scanf("%f", &moeda);
        printf("%.2f CAD = %.2f Eur", moeda, moeda/1.45);

        break;

        default: //Opção que aparece se a escolha do utilizador for diferente das opções fornecidas.

        printf("Opção Inválida, Obrigado!\n");
    }
}