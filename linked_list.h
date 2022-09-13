#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

typedef struct node node;
struct node{
    int value;
    node* next;
};

int count_ll(node* ptr);
void prepend_ll(node **ptr, int value);
void append_ll(node* ptr, int value);
void print_ll(node* ptr);
void free_ll(node* ptr);
int update_node(node* ptr, int index, int value);
int delete_node(node **ptr, int index);
int get_value(node *ptr, int index);
node* search_node(node *ptr, int value);
void reverse_ll(node **ptr);


#endif
