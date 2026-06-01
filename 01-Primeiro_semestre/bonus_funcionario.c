#include <stdio.h>

int main(){

    int B;
    float A, C;
    char nome[40]="";

    printf("informe seu nome:\n");
    scanf("%s", &nome);
    printf("informe o valor do salario:\n");
    scanf("%f", &A);
    printf("informe quantos anos voce trabalha na universidade:\n");
    scanf("%d", &B);

    if (B >= 5){
         C= A + (A*0.2);
        printf("Seu salario passa a ser: %.3f.\n", C);
    }else{
        C= A + (A*0.1);
        printf("Seu salario passa a ser: %.3f.\n", C);
}