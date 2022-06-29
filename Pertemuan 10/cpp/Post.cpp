#include<stdio.h> 
#include<stdlib.h> 
  
struct Node { 
    int data; 
    struct Node* next; 
}; 

void tambah(struct Node** head_ref, int new_data){ 
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));   
    new_node->data  = new_data; 
    new_node->next = (*head_ref);   
    (*head_ref)    = new_node; 
} 
  
int hitung(struct Node* head) { 
    if (head == NULL) 
        return 0; 
    return 1 + hitung(head->next); 
} 
  
int main(){

    system("cls");

    struct Node* head = NULL; 
  
    tambah(&head, 1);
    tambah(&head, 2); 
    tambah(&head, 4);
    tambah(&head, 2);
    tambah(&head, 5);
    tambah(&head, 1);
    tambah(&head, 6);
    tambah(&head, 9);
    tambah(&head, 4);
  
    printf("Jumlah elemen pada linked list ada :  %d", hitung(head)); 

    return 0; 
} 