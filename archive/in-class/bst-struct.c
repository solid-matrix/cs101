#include<stdio.h>
#include<stdlib.h>

typedef struct structTreeNode{
    int value;
    struct structTreeNode* parent;
    struct structTreeNode* right;
    struct structTreeNode* left;
} BSTNode;

typedef struct{
    BSTNode * root;
} BST;

BSTNode* NewBSTNode(int value){
    BSTNode* node = (BSTNode*)malloc(sizeof(BSTNode));
    node->parent = NULL;
    node->left = NULL;
    node->right = NULL;
    node->value = value;
    return node;
}

int FreeBSTNode(BSTNode* node){
    int tmp = node->value;
    free(node);
    return tmp;
}


BST *NewBST(){
    BST* bst = (BST*) malloc(sizeof(BST));
    bst->root = NULL;
    return bst;
}

void FreeBST(BST *bst){
    free(bst);
}

void Add(BST *bst, int value){
    if (bst->root == NULL){
        BSTNode *node = NewBSTNode(value);
        bst->root = node;
        return;
    }
    BSTNode *t = bst->root;

    while(1){
        if(value>=t->value ){
            if(t->right == NULL){
                BSTNode *node = NewBSTNode(value);
                t->right = node;
                node->parent = t;
                break;
            }else{
                t = t->right;
            }
        }else{
            if(t->left == NULL){
                BSTNode *node = NewBSTNode(value);
                t->left = node;
                node->parent = t;
                break;
            }else{
                t = t->left;
            }
        }
    }
}

void TraverseNode(BSTNode *node){
    if(node == NULL) return;
    TraverseNode(node->right);
    printf("%d\n", node->value);
    TraverseNode(node->left);
}

void Traverse(BST *bst){
    TraverseNode(bst->root);
}


int main(){
    BST *bst = NewBST();

    Add(bst, 4);
    Add(bst, 7);
    Add(bst, 9);
    Add(bst, 1);
    Add(bst, 11);
    Add(bst, 2);
    Add(bst, 5);
    Add(bst, 0);
    Add(bst, 3);

    Traverse(bst);

    return 0;
}