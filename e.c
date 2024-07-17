#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Digite o valor dos lados da matriz quadrada: ");
    scanf("%d",&n);
    int A[n][n],B[n][n];
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            printf("Digite o valor de %d %d: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    for(int k = 0; k<n;k++){
        for(int l =0; l<n;l++){
            B[k][l]=A[l][k];
        }
    }
    return 0;
}