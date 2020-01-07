#include <stdio.h>

int menu;
float input;

int main (void){ //Programa para converter Kg para lb e vice versa

    printf("Insira 1 para a conversão de Kg para lb, Qualquer outra opção serve para a conversão de lb para Kg.\n");
    scanf("%d", &menu);

    if(menu==1){ //Se for o utilizador escolher 1 faz conversao de Kg para lb

    printf("Insira a Quantidade para Converter(Kg to lb): ");
    scanf("%f", &input);

    printf("%.2f Kg = %.2f lb\n", input, input*2.2);

    }else{ // Se o utilizador escolher um número diferente de 1 faz conversão de lb para Kg

    printf("Insira a Quantidade para Converter(lb to Kg): ");
    scanf("%f", &input);

    printf("%.2f lb = %.2f Kg\n", input, input/2.2);

    }



}