#include <stdio.h>

int main(){
    int a[10][10];
    
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            a[i][j] = i*j;
        }
    }
        
    
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            printf("%2d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
