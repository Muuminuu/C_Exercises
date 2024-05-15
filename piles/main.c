#include <stdio.h>
#include "stack.h"

int main(void)
{ 
    Stack sta = new_stack();

    // if(is_empty_stack(sta))
    //     printf("La pile est vide.\n");
    // else
    //     printf("La pile a des elements.\n");

    print_stack(sta);
    printf("Taille de la pile : %d\n", stack_length(sta));

    printf("\n---------------------\n");

    sta = push_stack(sta, 14);
    sta = push_stack(sta, 47);
    sta = push_stack(sta, 12);
    sta = push_stack(sta, 8);
    print_stack(sta);
    printf("Sommet atual: %d\n", top_stack(sta));

    printf("\n---------------------\n");

    // if(is_empty_stack(sta))
    //     printf("La pile est vide.\n");
    // else
    //     printf("La pile a des elements.\n");
    sta = pop_stack(sta);
    print_stack(sta);



    printf("\n---------------------\n");

    sta = clear_stack(sta);
    print_stack(sta);

    // if(is_empty_stack(sta))
    //     printf("La pile est vide.\n");
    // else
    //     printf("La pile a des elements.\n");

    return 0;
}