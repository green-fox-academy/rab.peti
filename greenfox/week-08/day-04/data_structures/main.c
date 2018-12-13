#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main()
{
    node_t* head = malloc(sizeof(node_t));
    head->value = 5;

    node_t* node1 = malloc(sizeof(node_t));
    head->next = node1;
    node1->value = 8;

    node_t* node2 = malloc(sizeof(node_t));
    node1->next = node2;
    node2->value = 6;

    node2->next = NULL;

    node_t* p = head;
    while(p != NULL){
        if(p->value == 8){
            break;
        }

        p = p->next;
    }

    printf("node1: %p\n", node1);
    if(p != NULL){
        printf("p: %p\n", p);
        printf("p->value: %d\n", p->value);
    }else{
        puts("Not found!");
    }
    printf("--------------SIMPLE LIST--------------------\n");
    print_list(head);
    printf("--------------INSERT_AT_THE_BEGINNING--------------------\n");
    insert_at_the_beginning(&head, 1);
    print_list(head);
    printf("--------------INSERT_AT_THE_END--------------------\n");
    insert_at_the_end(head, 7);
    print_list(head);
    printf("----------------------------------\n");

    return 0;
}