#include <stdio.h>
#include "list.h"

int main(void)
{
    List mylist = new_list();

    //test
    // if(is_empty_list(mylist))
    //     printf("Liste vide.");
    // else
    //     printf("La liste a des elements.\n");

    // printf("Taille de la liste : %d", list_length(mylist));

    print_list(mylist);

    mylist = push_back_list(mylist, 36);
    print_list(mylist);

    mylist = push_front_list(mylist, 25);
    mylist = push_back_list(mylist, -4);
    print_list(mylist);
    printf("Nombre d'elements: %d\n", list_length(mylist));

    mylist = pop_back_list(mylist);
    print_list(mylist);

    mylist = clear_list(mylist);
    print_list(mylist);

    return 0;
}