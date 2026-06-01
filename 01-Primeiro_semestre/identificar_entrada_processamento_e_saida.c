#include <stdio.h>

int main(){

int A, B, C, D, X;
char nome [50]= "";

printf("informe seu nome:\n");
scanf("%s", &nome);
printf("informe o primeiro valor:\n");
scanf("%d", &A);
printf("informe o segundo valor:\n");
scanf("%d", &B);
printf("informe o ultimo valor:\n");
scanf("%d", &C);

printf("informe quantos amigos sao:\n");
scanf("%d", &D);

X= (A+B+C)/D;

printf("Cada um deve pagar: %d.\n", X);

}