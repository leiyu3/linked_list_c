#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main(){

    node* ll = malloc(sizeof(node));
    ll->value = 1;
    ll->next = NULL;


    print_ll(ll);
    reverse_ll(&ll);
    print_ll(ll);
    /* delete_node(&ll, 0); */

    /* print_ll(ll); */
    /* printf("The length of ll is %d\n", count_ll(ll)); */

    /* delete_node(&ll, 0); */
    /* print_ll(ll); */
    /* printf("The length of ll is %d\n", count_ll(ll)); */
    /* printf("%d\n", search_node(ll, 10)->value); */

    /* printf("%d\n", get_value(ll, 3)); */

    /* free_ll(ll); */
    return 0;
}  
