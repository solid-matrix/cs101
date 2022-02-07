#include <stdio.h>
#include <stdlib.h>

struct node_struct {
  int value;
  struct node_struct* next;
  struct node_struct* prev;
};

typedef struct node_struct Node;

typedef struct {
  Node* head;
  Node* tail;
  int count;
} LinkedList;

Node* CreateNode(int v) {
  Node* p = (Node*)malloc(sizeof(Node));
  p->value = v;
  p->next = NULL;
  p->prev = NULL;
  return p;
}

LinkedList* CreateLinkedList() {
  LinkedList* p = (LinkedList*)malloc(sizeof(LinkedList));
  p->count = 0;
  return p;
}

// tail 之后压入一个元素
void Push(LinkedList* list, int v) {
  Node* p = CreateNode(v);
  if (list->tail == NULL) {
    list->tail = p;
    list->head = p;
  } else {
    list->tail->next = p;
    p->prev = list->tail;
    list->tail = p;
  }
  list->count++;
}

// tail 元素弹出
int Pop(LinkedList* list) {
  if (list->tail == NULL) {
    exit(100);
  } else if (list->tail->prev == NULL) {
    int v = list->tail->value;
    free(list->tail);
    list->head = NULL;
    list->tail = NULL;
    list->count--;
    return v;
  } else {
    list->tail = list->tail->prev;
    int v = list->tail->next->value;
    free(list->tail->next);
    list->tail->next = NULL;
    list->count--;
    return v;
  }
}

// tail 之后压入一个元素
void Append(LinkedList* list, int v) { Push(list, v); }

// 弹出 head 元素
int Shift(LinkedList* list) {
  if (list->head == NULL) {
    exit(100);
  } else if (list->head->next == NULL) {
    int v = list->head->value;
    free(list->head);
    list->head = NULL;
    list->tail = NULL;
    list->count--;
    return v;
  } else {
    int v = list->head->value;
    list->head = list->head->next;
    free(list->head->prev);
    list->head->prev = NULL;
    list->count--;
    return v;
  }
}

void Print(LinkedList* list) {
  Node* p = list->head;
  while (p != NULL) {
    printf("%d ", p->value);
    p = p->next;
  }
  printf("\n");
}

void Swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void BubbleSort(LinkedList* list) {
  Node* l = list->tail;
  for (int i = 0; i < list->count - 1; i++) {
    Node* p = list->head;
    while (p != l) {
      if (p->value > p->next->value) Swap(&(p->value), &(p->next->value));
      p = p->next;
    }
    l = l->prev;
  }
}

int main() {
  LinkedList* list = CreateLinkedList();

  int n = 1000;

  for (int i = 0; i < n; i++) Append(list, rand() % 1000);

  BubbleSort(list);

  Print(list);

  // SwapNext(list->head);

  // Print(list);
  return 0;
}