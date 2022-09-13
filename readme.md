# Linked List in C
This is a c library for linked list done as a learning project.

The nodes stores integer values but can be switched to store any data you desire.

Hopefully by viewing the source code you can learn how different operations on the linked list is implemented.

# What has been implemented?

First initialize your linked list like so:

```c
node* ll = malloc(sizeof(node));
ll->value = 1;
ll->next = NULL;
```

Then the following functions are available for you to interact with the linked list.

These are the functions available in the header file.

```c
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
```
