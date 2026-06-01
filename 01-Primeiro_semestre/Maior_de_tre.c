#include <stdio.h>

int main(){

    int A, B, C;

    Printf("Informe o primeiro valor:\n");
    scanf("%d", &A);
    Printf("Informe o segundo valor:\n");
    scanf("%d", &B);
    Printf("Informe o terceiro valor:\n");
    scanf("%d", &C);

    if (A > B && A > C){
        printf("O maior valor e: %d.\n", A);
    }else if (B > A && B > C){
        printf("O maior valor e: %d.\n", B);
    }else if (C > A && C > B){
        printf("O maior valor e: %d.\n", C);
    }else{
        printf("Os valores sao iguais.\n");
    }
}