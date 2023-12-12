#include <stdio.h>

int main(){
    int R[4][5];

    printf("Digite os elementos da matriz 4x5:\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            scanf("%d", &R[i][j]);
        }
    }

    // a) Seja R uma matriz 4X5. Determine o maior elemento de R .
    int maiorElemento = R[0][0];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 5; j++){
            if (R[i][j] > maiorElemento){
                maiorElemento = R[i][j];
            }
        }
    }
    // b) Seja A uma matriz 5x5.  Fazer um programa para determinar a média dos elementos da diagonal principal de A.
    printf("O maior elemento de R é: %d\n", maiorElemento);

    return 0;
}
