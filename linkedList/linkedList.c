#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node_t;

void push(node_t **head,int value){
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

void unshift(node_t **head, int value){
    node_t *new_node = (node_t*) malloc(sizeof(node_t));
    new_node->value = value;
    new_node->next = *head;
    *head = new_node;
}

int pop(node_t *head){
    if(head->next == NULL){
        free(head);
        return 0;
    }
    node_t *current = head;
    while (current->next->next != NULL){
        current = current->next;
    }
    free(current);
    current->next = NULL;
    return 0;    
}

void shift(node_t **head){
    node_t *new = NULL;
    new = (*head)->next;
    free(*head);
    *head = new;
}

void print(node_t *head){
    node_t *current = head;
    while (current != NULL)
    {
        if(current->next == NULL){
            printf("%d\n",current->value);
        }else{
            printf("%d -> ",current->value);
        }
        current = current->next;
    }
}

int main(){
    node_t *head = NULL;
    push(&head,1); 
    push(&head,2); 
    push(&head,3);
    unshift(&head,4); 
    unshift(&head,5); 
    unshift(&head,6); 
    print(head);
    pop(head);
    pop(head);
    pop(head);
    print(head);
    shift(&head);
    print(head);
    return 0;
}