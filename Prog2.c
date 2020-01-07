#include <stdio.h>

int num1;
int num2;
int maior;

int main(void){

    printf("Insira um valor: ");
    scanf("%d", &num1);

    printf("Insira outro valor: ");
    scanf(" %d", &num2);

    if(num1==num2){
        printf("%d + %d = %d\nAmbos valores de %d e %d são iguais\n", num1, num2, num1+num2, num1, num2);
    }else{
        if(num1>num2){
            printf("%d + %d = %d\n%d é maior do que %d\n", num1, num2, num1+num2, num1, num2);
        }else{
            printf("%d + %d = %d\n%d é maior do que %d\n", num1, num2, num1+num2, num2, num1);
        }
    }

}