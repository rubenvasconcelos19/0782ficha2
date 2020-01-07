#include <stdio.h>

int num1;
int num2;
int maior;

int main(void){ //Programa para verificar qual o maior número

    printf("Insira um valor: "); //Pede um numero ao utilizador.
    scanf("%d", &num1); //Guarda o número do utilizador.
 
    printf("Insira outro valor: "); //Pede um numero ao utilizador.
    scanf(" %d", &num2); //Guarda o número do utilizador.

    if(num1==num2){ //Se os números forem iguais diz ao utilizador.
        printf("%d + %d = %d\nAmbos valores de %d e %d são iguais\n", num1, num2, num1+num2, num1, num2);
    }else{
        if(num1>num2){ //Verifica qual o maior número
            printf("%d + %d = %d\n%d é maior do que %d\n", num1, num2, num1+num2, num1, num2);
        }else{
            printf("%d + %d = %d\n%d é maior do que %d\n", num1, num2, num1+num2, num2, num1);
        }
    }

}