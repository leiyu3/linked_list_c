#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int count_ll(node* ptr){
    /*
    Count the number of nodes in a linked list.
   */
    // TODO:: What if there is 0 item in the linked list??
    int count = 0;
    while (ptr != NULL){
        count++;
        ptr = ptr->next;
    }
    return count;
}

void prepend_ll(node **ptr, int value){
    /*
    Add a node to the front of the linked list
   */
    node* new = malloc(sizeof(node));
    new->value = value;
    new->next = *ptr;
    *ptr = new;

}

void append_ll(node* ptr, int value){
    /*
       Add a node to the end of the linked list
   */
    node* new = malloc(sizeof(node));
    new->value = value;
    new->next = NULL;
    while (ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = new;
}

void print_ll(node* ptr){
    /*
       Print out the linked list
   */
    while (ptr != NULL){
        printf("%d", ptr->value);
        ptr = ptr->next;
        if (ptr == NULL){
            break;
        }
        printf(" - ");
    }
    printf("\n");
}

void free_ll(node* ptr){
    /*
       Safely free all nodes inside linked list.
   */
    node* next;
    while (ptr->next != NULL){
        next = ptr->next;
        free(ptr);
        ptr = next;
    }
}

int update_node(node* ptr, int index, int value){
    /*
       Update value of a node inside linked list
   */
    // TODO:: What if the index is out of range?

    if (index >= count_ll(ptr)){
        // index out of range
        return 1;
    }

    int count = 0;
    while (count < index){
        ptr = ptr->next;
        count++;
    }

    ptr->value = value;
    return 0;
}

int delete_node(node **ptr, int index){
    /*
       Delete a node given the index
   */

    // TODO:: What if the node doesn't exist?
    node* prev;
    if (index == 0){
        prev = *ptr;
        *ptr = (*ptr)->next;
        free(prev);
        return 0;
    }

    node* root = *ptr;
    for (int i = 0; i <= index; i++){
        if (i == index){
            prev->next = root->next;
            free(root);
            return 0;
        }
        prev = root;
        root = root->next;
    }
    
    printf("Node not found\n");
    exit(-1);
}

int get_value(node *ptr, int index){
    /*
        Get the value of a specific node given the index
   */
    // TODO:: What if the index is out of range??

    for (int i = 0; i < index; i++){
        ptr = ptr->next;
    }
    return ptr->value;

}

node* search_node(node *ptr, int value){
    /*
        Search for a node given the value and returns it
    */

    while (1){
        if (ptr == NULL){
            fprintf(stderr, "Value doesn't exitst in linked list\n");
            exit(-1);
        }
        if (ptr->value == value){
            break;
        }
        ptr = ptr->next;
    }
    return ptr;
}

void reverse_ll(node** ptr){
    node *prev, *cur, *next;
    int n = count_ll(*ptr);

    if (n == 0){
        return;
    }

    if (n == 1){
        return;
    }
    
    prev = *ptr;
    cur = prev->next; 
    next = cur->next;
    prev->next = NULL;

    cur->next = prev;

    for (int i = 0; i < n-2; i++){
        prev = cur;
        cur = next;
        next = next->next;
        cur->next = prev;
    }


    *ptr = cur;
}

