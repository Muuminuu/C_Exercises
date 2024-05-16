#ifndef __DLIST__H__
#define __DLIST__H__

    typedef enum
    {
        false,
        true
    }Bool;

    typedef struct DlistNode
    {
        int value;
        struct DlistNode *back;
        struct DlistNode *next;
    }DlistNode;

    /* definition liste doublement chainee*/
    typedef struct Dlist
    {
        int length;
        struct DlistNode *begin;
        struct DlistNode *end;
    }*Dlist;

    /* prototypes */
    Dlist new_dlist(void);
    Bool is_empty_dlist(Dlist li)
    int dlist_length(Dlist li)
    

#endif