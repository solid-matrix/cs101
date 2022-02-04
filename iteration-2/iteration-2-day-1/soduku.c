#include <stdio.h>

int a[9][9]; // 原数独矩阵
int r[9][9]; // 数独的解矩阵

int v[9][10];
int h[9][10];
int c[3][3][10];

void Print(){
    for(int i =0;i<9;i++){
        for (int j = 0; j < 9; j++)
        {
            if (a[i][j] == 0) printf("%d ", r[i][j]);
            else printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("------------------\n");
}

void Resolve(int i){
    // TODO
}


int main(){
    for(int i =0;i<9;i++){
        for (int j = 0; j < 9; j++)
        {
            scanf("%d", &a[i][j]);
            r[i][j] = 0;
        }
    }
    // init
    
    for(int i=0;i<9;i++){
        for(int k=0;k<10;k++){
            v[i][k] = 0;
            h[i][k] = 0;
        }
    }
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            for(int k=0;k<10;k++){
                c[i][j][k] = 0;
            }
        }
    }

    Resolve(0);
    Print();
    return 0;
}