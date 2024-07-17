#include <stdio.h>
#include <stdlib.h>

void print(int matriz[3][3]){
    for(int m = 0;m<3;m++){
                for(int n = 0;n<3;n++){
                    printf("%d ",matriz[m][n]);
                }
                printf("\n");
            }
}

void somaf(int matriz[3][3],int op){
    if(op ==1){
        for(int m = 0;m<3;m++){
                int soma = 0;
                for(int n = 0;n<3;n++){
                    soma = soma + matriz[m][n];
                }
                printf("%d\n",soma);
            }
    }
    else if(op ==2){
        for(int m = 0;m<3;m++){
                int soma = 0;
                for(int n = 0;n<3;n++){
                    soma = soma + matriz[n][m];
                }
                printf("%d\n",soma);
            }
    }
}

void diagonal(int matriz[3][3],int op){
    for(int m = 0;m<3;m++){
                for(int n = 0;n<3;n++){
                    if(m==n && op ==1)
                        printf("%d\n",matriz[m][n]);
                    else if (m!=n && op == 2)
                        printf("%d\n",matriz[m][n]);
                }
            }
}

void parImpar(int matriz[3][3]){
    for(int m = 0;m<3;m++){
                for(int n = 0;n<3;n++){
                    if(m%2==0)
                        if(n%2!=0)
                            printf("%d\n",matriz[m][n]);
                }
            }
}

void colZero(int matriz[3][3]){
    for(int m = 0;m<3;m++){
        printf("%d\n",matriz[m][0]);
    }
}

void multDois(int matriz[3][3]){
    for(int m = 0;m<3;m++){
                for(int n = 0;n<3;n++){
                    if(n%2==0)
                        printf("%d\t",matriz[m][n]);
                }
                printf("\n");
            }
}

int main(){
    int num[3][3];
    char esc;

    for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            printf("Digite o valor da posicao %d %d: ",i,j);
            scanf("%d",&num[i][j]);
        }
    }

    printf("Escolha uma opção:\nA)Imprimir todos os elementos da matriz\nB)Somar os elementos de cada"
    " linha e imprimir o resultado\nC)Somar os elementos de cada coluna e mostrar o resultado\nD)"
    "Imprimir os elementos da diagonal principal\nE)Imprimir todos os elementos exceto a diagonal principal"
    "\nF)Imprimir os elementos,tal que a linha eh par e a coluna eh impar\nG)Imprimir a coluna 0\nH)"
    "Imprimir as colunas multiplos de 2\n-> ");
    fflush(stdin);
    scanf("%c",&esc);

    switch(esc){
        case 'A': print(num);break;
        case 'B': somaf(num,1);break;
        case 'C': somaf(num,2);break;
        case 'D': diagonal(num,1);break;
        case 'E': diagonal(num,2);break;
        case 'F': parImpar(num);break;
        case 'G': colZero(num);break;
        case 'H': multDois(num);break;
        default: break;
    }
    return 0;
}