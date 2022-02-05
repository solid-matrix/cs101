#include <stdio.h>
#include <stdlib.h>

struct Point{
    int x;
    int y;
    int a[10000];
};

typedef struct Point P;

void PrintPoint(P p){
    //printf("(%d, %d)\n", p.x, p.y);
    p.a[0]=0;
}

void PrintPoint2(P* p){
    //printf("(%d, %d)\n", p->x, p->y);
    p->a[0]=0;
}

int main(){
    P c;
    c.x =5;
    c.y =6;

    P *pc = &c;

    printf("start\n");
    for(int i = 0; i<1000000; i++) PrintPoint(c);
    printf("middle\n");
    for(int i = 0; i<1000000; i++) PrintPoint2(pc);
    printf("finish\n");

    return 0;
}