#include <stdio.h>

int n = 10;
int a[10] = {1,2,3,4,5,6,7,8,9,10};
int k = 25;

int dfs(int i, int sum){
    if (i==n) return 0;
    if (sum == k) return 1;
    return dfs(i+1,sum) || dfs(i+1,sum+a[i]);
}

int main(){
    printf("%s\n", dfs(0,0)?"YES":"NO");
    return 0;
}
