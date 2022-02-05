#include <stdio.h>
#include <stdlib.h>

typedef struct structLinkedListNode{
    int value;
    struct structLinkedListNode *prev;
    struct structLinkedListNode *next;
} LinkedListNode ;


typedef struct {
    LinkedListNode* first;
    LinkedListNode* last;
} LinkedList;

LinkedListNode *NewLinkedListNode(int value){
    LinkedListNode *node = (LinkedListNode*)malloc(sizeof(LinkedListNode));
    node->value = value;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

int FreeLinkedListNode(LinkedListNode *node){
    int tmp = node->value;
    free(node);
    return tmp;
}

LinkedList *CreateLinkedList(){
    LinkedList *ll = (LinkedList*)malloc(sizeof(LinkedList));
    ll->first = NULL;
    ll->last = NULL;
    return ll;
}

void Append(LinkedList *ll, int value){
    if (ll->first == NULL){
        ll->first = NewLinkedListNode(value);
        ll->last =  ll->first;
    }else{
        LinkedListNode *node = NewLinkedListNode(value);
        ll->last->next = node;
        node->prev = ll->last;
        ll->last = node;
    }
}

void Print(LinkedList *ll){
    LinkedListNode* t = ll->first;

    while(t!=NULL){
        printf("%d\n", t->value);
        t = t->next;
    }
}

void Push(LinkedList *ll, int value){
    Append(ll,value);
}

int Pop(LinkedList *ll){
    if (ll->first == NULL){
        printf("Error: linkedList is empty, cannot pop");
        exit(1);
    }
    if (ll->first == ll->last){
        LinkedListNode * node = ll->first;
        ll->first = NULL;
        ll->last = NULL;
        return node->value;
    }
    LinkedListNode *node = ll->last;
    ll->last = node->prev;
    node->prev->next = NULL;
    return FreeLinkedListNode(node);
}

void InQueue(LinkedList *ll, int value){
    Append(ll,value);
}

int OutQueue(LinkedList *ll){
    if(ll->first == NULL){
        printf("Error: linkedList is empty, cannot out queue");
        exit(1);
    }
    if(ll->first == ll->last){
        LinkedListNode * node = ll->first;
        ll->first = NULL;
        ll->last = NULL;
        return node->value;
    }
    LinkedListNode *node = ll->first;
    ll->first = node->next;
    node->next->prev = NULL;
    return FreeLinkedListNode(node);
}


int main(){
    LinkedList *ll = CreateLinkedList();

    Push(ll, 1);
    Push(ll, 5);
    Push(ll, 4);
    Push(ll, 3);

    Push(ll, 9);

    printf("Pop %d\n", Pop(ll));

    printf("Pop %d\n", Pop(ll));
    
    Push(ll, 25);

    printf("OutQueue %d\n", OutQueue(ll));
    printf("OutQueue %d\n", OutQueue(ll));
    printf("OutQueue %d\n", OutQueue(ll));
    printf("OutQueue %d\n", OutQueue(ll));

    InQueue(ll, 6);


    Print(ll);

    return 0;
}