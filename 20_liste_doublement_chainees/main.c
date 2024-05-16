#include <stdio.h>
#include "dlist.h"

int main(void)
{
    DList mylist = new_dlist();

    if(is_empty_dlist(mylist))
        printf("Liste d vide.\n");
    else
        printf("La liste contient des elements.\n");

    printf("Taille de la Dlist: %d\n", dlist_length(mylist));

    

    return 0;
}