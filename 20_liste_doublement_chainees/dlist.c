#include <stdio.h>
#include <stdlib.h>
#include "dlist.h"

DList new_dlist(void)
{
    return NULL;
}

/*------------------------------------------*/
Bool is_empty_dlist(DList li)
{
    if(li == NULL)
        return true;

    return false;
}

/*------------------------------------------*/

int dlist_length(DList li)
{
    if(is_empty_dlist(li))
        return 0;

    return li->length;
}

/*------------------------------------------*/

/*------------------------------------------*/

/*------------------------------------------*/

/*------------------------------------------*/

/*------------------------------------------*/

/*------------------------------------------*/

/*------------------------------------------*/

/*------------------------------------------*/

/*------------------------------------------*/