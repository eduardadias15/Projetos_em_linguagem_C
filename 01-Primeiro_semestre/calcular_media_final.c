#include <stdio.h>

int main(){

    int A, B, C, X;
    char nome[50]="";

    printf("informe seu nome:\n");
    scanf("%s", &nome);
    printf("informe a primeira nota:\n");
    scanf("%d", &A);
    printf("informe a segunda nota:\n");
    scanf("%d", &B);
    printf("informe a terceira nota:\n");
    scanf("%d", &C);

    X= (A+B+C)/3;
    printf("A sua media final e: %d.\n", X);

    if (X >=7){
        printf("Aluno aprovado!\n");
    }else{
        printf("Aluno reprovado!\n");
    }
}