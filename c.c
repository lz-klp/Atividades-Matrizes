#include <stdio.h>
#include <stdlib.h>

int main(){
    int notas[3][4];
    float medias[3];

    printf("Insira as Nota dos Alunos\n");

    for(int i =0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("Digite o valor da posicao %d %d: ",i,j);
            scanf("%d",&notas[i][j]);
        }
    }

    for(int k =0;k<3;k++){
        int soma = 0;
        float media = 0;
        for(int l = 0;l<4;l++){
            soma += notas[k][l];
        }
        media =  soma/4.0;
        medias[k]= media;
    }

    for(int m = 0; m<3;m++){
        printf("Aluno %d \nMedia: %.2f\nNotas:\n",m,medias[m]);
        for(int n = 0; n<4;n++){
            printf("%d\n",notas[m][n]);
        }
    }
    return 0;
}