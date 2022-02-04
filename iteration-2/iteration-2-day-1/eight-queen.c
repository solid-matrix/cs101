#include <stdio.h>
#define N 12

int h[N];  // 行占用
int x[N*2-1]; // 正斜占用 i+j
int y[N*2-1]; // 反斜占用i-j+7
int r[N];  // 记录结果

int sum = 0;


void print(){
    for(int i =0; i<N;i++){
        for(int j = 0;j<N;j++){
            if(r[i]==j) printf("O ");
            else printf("+ ");
        }
        printf("\n");
    }
    printf("----------------\n");
}

// i 列
// j 行
void resolve(int i){
    if (i == N ) {
        print();
        sum++;
        return;
    }
    for(int j = 0; j < N; j++){
        if(h[j] || x[i+j] || y[i-j+N-1]) continue;

        h[j] = 1;
        x[i+j] = 1;
        y[i-j+N-1] =1;
        r[i] = j;
        resolve(i+1);
        h[j] = 0;
        x[i+j] = 0;
        y[i-j+N-1] =0;
        r[i] = 0;

    }
}

int main(){
    for(int i = 0; i<N; i++){
        h[i] = 0;
        r[i] = 0;
    }
    for (int i = 0; i < N*2-1; i++)
    {
        x[i] = 0;
        y[i] = 0;
    }
    
    resolve(0);

    printf("Total %d Resolutions\n", sum);
    return 0;
}