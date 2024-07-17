#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[3][3],b[3][3],c[3][3];

    printf("Preencha a Matriz A:\n");
    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            printf("Digite o valor da posicao %d %d: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("===============================\nPreencha a Matriz B:\n");
    for(int k = 0; k<3;k++){
        for(int l= 0; l<3;l++){
            printf("Digite o valor da posicao %d %d: ",k,l);
            scanf("%d",&b[k][l]);
        }
    }
    printf("================================\nA+B =\n");
    for(int m = 0;m<3;m++){
        for(int n = 0;n<3;n++){
            c[m][n] = a[m][n]+b[m][n];
            printf("%d\t",c[m][n]);
        }
        printf("\n");
    }

    return 0;
}