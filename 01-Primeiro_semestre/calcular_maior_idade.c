#include <stdio.h>

int main(){

    int A;
    char nome[40]="";

    printf("informe o seu nome:\n");
    scanf("%s", &nome);
    printf("informe sua idade:\n");
    scanf("%d", &A);

    if (A >=18){
        printf("Voce e maior de idade!\n");
    }else{
        printf("Voce e menor de idade!\n");
    }
}