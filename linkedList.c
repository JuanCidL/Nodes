#include <stdio.h>

typedef struct node{
  int val;
  struct node* next;
} Node;

Node* newList(int val, Node* next){
  Node* newL = (Node*) malloc(sizeof(Node));
  newL->val = val;
  newL->next = next;
  return newL;
}

 char* toStr(Node* list){
  if (list == NULL) return "\n";
  else{
    char* val = (char*)malloc(9*sizeof(char));
    sprintf(val, "-> [ %d ] ", list->val);
    return strcat(val, toStr(list->next));
  }
}

void delList(Node* list){
  Node* temp;
  if (list->next != NULL) {
    temp = list->next;
    list->next = NULL;
    delList(temp);
  }
  free(list);
  return;
}

void add(Node* l1, Node l2){
  return;
}



void main(){
  int num1 = 12;
  int num2 = 19;
  
  Node* list = newList(15, newList(5, NULL));
  Node* ptr = list;
  printf("%s", toStr(list));
  
  while (ptr!=NULL){
    printf("%d\n", ptr->val);
    ptr = ptr->next;
  }
  //delList(ptr);
}
