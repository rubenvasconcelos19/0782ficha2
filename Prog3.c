#include <stdio.h>

int menu;
float moeda;

int main(void){

    printf("Insira um dos menus apresentados: \n 1- Euro - USD Dollar \n 2- USD Dollar - Euro \n 3- Euro - CAD \n 4- CAD - Euro\n");
    scanf("%d", &menu);

    switch(menu){

        case 1:

        printf("Insira o valor que quer converter: ");
        scanf("%f", &moeda);
        printf("%.2f Eur = %.2f USD\n", moeda, moeda*1.12);

        break;

        case 2:

        printf("Insira o valor que quer converter: ");
        scanf("%f", &moeda);
        printf("%.2f USD = %.2f Eur\n", moeda, moeda/1.12);

        break;

        case 3:

        printf("Insira o valor que quer converter: ");
        scanf("%f", &moeda);
        printf("%.2f Eur = %.2f CAD", moeda, moeda*1.45);

        break;

        case 4:

        printf("Insira o valor que quer converter: ");
        scanf("%f", &moeda);
        printf("%.2f CAD = %.2f Eur", moeda, moeda/1.45);

        break;

        default:

        printf("Opção Inválida, Obrigado!");
    }
}