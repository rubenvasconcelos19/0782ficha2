#include <stdio.h>

int menu;
float input;

int main (void){

    printf("Insira 1 para a conversão de Kg para lb, Qualquer outra opção serve para a conversão de lb para Kg.\n");
    scanf("%d", &menu);

    if(menu==1){

    printf("Insira a Quantidade para Converter(Kg to lb): ");
    scanf("%f", &input);

    printf("%.2f Kg = %.2f lb\n", input, input*2.2);

    }else{

    printf("Insira a Quantidade para Converter(lb to Kg): ");
    scanf("%f", &input);

    printf("%.2f lb = %.2f Kg\n", input, input/2.2);

    }



}