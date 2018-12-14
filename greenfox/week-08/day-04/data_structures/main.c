#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main()
{
    node_t* head = init_linked_list();
    head->value = 5;

    node_t* node1 = init_linked_list();
    head->next = node1;
    node1->value = 8;

    node_t* node2 = init_linked_list();
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
    printf("--------------INSERT_AFTER--------------------\n");
    insert_after(head, 0,2);
    print_list(head);
    printf("--------------DELETE--------------------\n");
    delete(&head);
    print_list(head);
    printf("--------------SIZE--------------------\n");
    printf("%d\n",size(head));
    printf("--------------IS_EMPTY--------------------(0-false, 1-true)\n");
    printf("%d\n",is_empty(head));

    return 0;
}