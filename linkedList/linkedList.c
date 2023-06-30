#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node_t;

void append(node_t **head,int value){
    node_t *new_node = (node_t*) malloc(sizeof(node_t));
    new_node->value = value;
    new_node->next = NULL;

    if(*head == NULL){
        *head = new_node;
    }else{
        node_t *current = *head;
        while (current->next != NULL){
            current = current->next;
        }        
        current->next = new_node;
    }
}

void print(node_t *head){
    node_t *current = head;
    while (current != NULL)
    {
        if(current->next == NULL){
            printf("%d",current->value);
        }else{
            printf("%d -> ",current->value);
        }
        current = current->next;
    }
}

int main(){
    node_t *head = NULL;
    append(&head,1); 
    append(&head,2); 
    append(&head,3); 
    print(head);
    return 0;
}