#include <stdio.h>
#include <stdlib.h>


struct node_struct{
    int value;
    struct node_struct *prev;
    struct node_struct *next;
};

typedef struct node_struct Node;

// 在末尾新加一个节点，值为v
void Add(Node* list, int v){
    Node * p = (Node*)malloc(sizeof(Node));
    p->value = v;
    p->prev = NULL;
    p->next = NULL;

    // TODO

    while(list->next != NULL) list = list->next;
    list->next = p;
    p->prev = list;
}

// 把末尾的值删掉
void Remove(Node* list){
    while(list->next != NULL) list = list->next;

    list->prev->next = NULL;

    free(list);
}

void Insert(Node* list, int v){
    Node * p = (Node*)malloc(sizeof(Node));
    if(list->next==NULL){
        p->value=v;
        p->prev=list;
        p->next=NULL;
        list->next=p;
    }else{
        p->value=v;
        p->next=list->next;
        list->next->prev=p;
        list->next=p;
        p->prev=list;
    }
}

void Delete(Node *list){
    if(list->next==NULL){
        list->prev->next=NULL;
    }else{;
        list->next->prev=list->prev;
        list->prev->next=list->next;
    }
    free(list);
}

Node* Find(Node *list, int v){
    while(list!=NULL){
        if(list->value == v) return list;
        list = list->next;
    }
    return NULL;
}

int Count(Node* list){
    int a=0;
    while(list!=NULL){
        a++;
        list=list->next;
    }
    return a;
}

void Print(Node* list){
    while(list != NULL){
        printf("%d, ",list->value);
        list = list->next;
    }
    printf("\n");
}

int main(){

    Node * head = (Node*)malloc(sizeof(Node));

    for(int i = 0; i<10; i++){
        Add(head, i*i);
    }

    Insert(head->next->next, 99);

    Remove(head);


    Node * q  = Find(head->next, 36);

    Delete(q);


    int c = Count(head->next);

    printf("%d\n", c);

    Print(head->next);
    
    return 0;
}