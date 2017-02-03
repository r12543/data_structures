//Linked List: Inserting a node at begining
#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
  int data;
  struct Node * next;
}Node;

void Insert(Node** head, int x){
  Node* temp = (Node*)malloc(sizeof(Node));
  temp->data = x;
  temp->next = NULL;
  if(*head != NULL) temp->next = *head;
  *head = temp;
}

void Print(Node* head){
  printf("The list is \n");
  while(head != NULL){
    printf(" %d", head->data);
    head = head->next;
  }
  printf("\n");
}

void InsertAtNth(Node** head, int x, int n){
  Node* temp1 = new Node();
  temp1->data = x;
  temp1->next = NULL;
  if(n == 1){
    temp1->next = *head;
    *head = temp1;
    return;
  }
  Node* temp2 = *head;
  for(i=0; i<n-2; i++){
    temp2 = temp2->next;
  }
  temp1->next = temp2->next;
  temp2->next = temp1;
}

void DeleteAtNth(Node** head, int n){
  Node * temp1 = *head;
  if(n == 1){
    *head = temp1->next;
    free(temp1);
    return;
  }
  int i;
  for(i=0; i<n-2; i++){
    temp1 = temp->next;
  }
  Node* temp2 = temp1->next;
  temp1->next = temp2->next;
  free(temp2);
}

int main(){
  Node* head = NULL;
  printf("How many numbers?\n");
  int n, i, x;
  scanf("%d", &n);
  for(i=0; i<n; i++){
    printf("Enter the number \n");
    scanf("%d", &x);
    Insert(&head, x);
    InsertAtNth(&head, x, 2);
    DeleteAtNth(&head, 2);
    Print(head);
  }
}
