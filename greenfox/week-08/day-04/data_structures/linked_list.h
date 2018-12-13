#ifndef DATASTRUCTURES_LINKED_LIST_H
#define DATASTRUCTURES_LINKED_LIST_H

typedef struct node{
    int value; //void*
    struct node* next;
}node_t;

node_t* init_linked_list();

void insert_at_the_end(node_t* head, int value);

void insert_at_the_beginning(node_t **head, int value);

void insert_after(node_t *head, int value, int index);

void print_list(node_t * head);

int size(node_t *head);

int is_empty(node_t* head);


#endif //DATASTRUCTURES_LINKED_LIST_H