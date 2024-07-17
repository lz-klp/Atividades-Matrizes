#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m;
    printf("Digite o número de linhas e colunas da matriz: ");
    scanf("%d %d",&n,&m);

    int num[n][m];

    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            printf("Digite o elemento %d %d: ",i,j);
            scanf("%d",&num[i][j]);
        }
    }

    int menor_pos[2],maior_pos[2],maior = num[0][0],menor = num[0][0];

    for(int k = 0;k<n;k++){
        for(int l = 0;l<m;l++){
            if(num[k][l]<menor){
                menor = num[k][l];
                menor_pos[0] = k;
                menor_pos[1] = l;
            }
            if(num[k][l]>maior){
                maior = num[k][l];
                maior_pos[0] = k;
                maior_pos[1] = l;
            }
        }
    }

    printf("Menor: %d Posicao: %d %d\nMaior: %d Posicao: %d %d",menor,menor_pos[0],menor_pos[1],maior,maior_pos[0],maior_pos[1]);
    return 0;
}