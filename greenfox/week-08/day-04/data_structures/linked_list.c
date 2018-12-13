#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

node_t *init_linked_list() {
    node_t *node = malloc(sizeof(node_t));
    return node;
}

void insert_at_the_end(node_t *head, int value) {
    node_t *insert = head;
    while (insert->next != NULL) {
        insert = insert->next;
    }

    insert->next = malloc(sizeof(node_t));
    insert->next->value = value;
    insert->next->next = NULL;
}

void insert_at_the_beginning(node_t **head, int value) {
    node_t * node = malloc(sizeof(node_t));;
    node->value = value;
    node->next = *head;
    *head = node;
}

void insert_after(node_t *head, int value, int index){
    node_t *insert = head;
    for (int i = 0; i < index-1; ++i) {
        insert = insert->next;
    }
    node_t *second = insert->next;
    insert->next = malloc(sizeof(node_t));
    insert->next->value = value;
    insert->next->next = second;
}

void print_list(node_t *head) {
    /*node_t * current = head;
    *
    *while (current != NULL) {
    *    printf("%d\n", current->value);
    *    current = current->next;
    }*/
    while(head != NULL)
    {
        printf("%d\n", head->value);
        head = head->next;
    }
}

int size(node_t *head) {
    int counter = 0;
    while(head != NULL)
    {
        head = head->next;
        counter++;
    }
    return counter;
}

int is_empty(node_t* head){
    return (head == NULL) ? (1) : (0);
}