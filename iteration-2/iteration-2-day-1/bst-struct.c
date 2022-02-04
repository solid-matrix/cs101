#include <stdio.h>
#include <stdlib.h>


struct node_struct{
    int value;
    struct node_struct *left;
    struct node_struct *right;
    struct node_struct *parent;
};

typedef struct node_struct Node;


Node* CreateNode(int v){
    Node * p = (Node*) malloc(sizeof(Node));
    p->value = v;
    return p;
}

// 插入值
void Insert(Node* bst, int v){
    // tree == NULL
    // TODO
}

// 查找值
// 找到就返回那个节点，找不到返回NULL
Node* Find(Node* bst, int v){
    // TODO
}

// 从小到大输出
void Print(Node* bst){
    // TODO
}



int main(){
    Node* root = NULL;

    Insert(root, 2);
    Insert(root, 9);
    Insert(root, 7);
    Insert(root, 4);
    Insert(root, 3);
    Insert(root, 2);
    Insert(root, -6);
    Insert(root, 11);
    Insert(root, 8);

    Node* x = Find(root, 9);
    printf("%d\n", x->value);

    Node* y = Find(root, 20);
    if(y==NULL){
        printf("Not Found");
    }

    Print(root);
    return 0;
}