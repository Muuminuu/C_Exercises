#include <stdio.h>
#include <stdlib.h>
#include "list.h"

List new_list(void)
{
    return NULL;
}

/*--------------------------------------*/

Bool is_empty_list(List li)
{
    if(li == NULL)
        return true;

    return false;
}

/*--------------------------------------*/

int list_length(List li)
{
    int size = 0;

    if(!is_empty_list(li))
        while(li != NULL)
        {
            ++size;
            li = li->next;
        }

    return size;
}

/*--------------------------------------*/

void print_list(List li)
{
    if(is_empty_list(li))
    {
        printf("Rien a afficher, la liste est vide.\n");
        return;
    }

    while(li != NULL)
    {
        printf("[%d] ", li->value);
        li = li->next; // sinon on est en boucle infinie.
    }

    printf("\n");
}

/*--------------------------------------*/
List push_back_list(List li, int x); // List est un pointeur
{
    ListElement *element;

    element = malloc(sizeof(*element));

    if(element == NULL)
    {
        fprintf(stderr, "Erreur : probleme allocation dynamique");
        exit(EXIT_FAILURE);
    }

    element->value = x;
    element->next = NULL; // car on ajoute a la find e la lsite

    if(is_empty_list(li))
        return element;

    ListElement *temp; // li et temp pointe a umeme dnroit
    temp = li;

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = element;

    return li; // car temp est une reference a li
}

/*--------------------------------------*/

List push_front_list(List li, int x);
{
    ListElement *element;

    element = malloc(sizeof(*element));

    if(element == NULL)
    {
        fprintf(stderr, "Erreur : probleme allocation dynamique");
        exit(EXIT_FAILURE);
    }

    element->value = x;

    if(is_empty_list(li))
        element->next = NULL;
    else
        element->next = li;

    return element; //ici on renvoit element, qui contint oute la liste ?
}


/*--------------------------------------*/

List pop_back_list(List li) //supprimer ?
{
    if(is_empty_list(li))
        return new_list(); // ou retur li, soit liste vide

    if(li->next == NULL) // un seul element
    {
        free(li);
        li = NULL;
        
        return new_list();
    }

    ListElement *temp = li;
    ListElement *before = li;

    while(temp->next != NULL) // deplacement de pointeur (sur quoi il pointe)
    {
        before = temp; // conserver la valeur dans before
        temp = temp->next;
    }

    before->next = NULL;
    free(temp);
    temp = NULL;

    return li; //il n 'a plus l'element qu'on vient de retirer -> a agit sur la vraie liste.
}

/*--------------------------------------*/

List pop_front_list(List li); //retirer premier element liste
{
    if(is_empty_list(li)) 
        return li;// ou new_list

    ListElement *element;

    element = malloc(sizeof(*element));

    if(element == NULL)
    {
        fprintf(stderr, "Erreur : probleme allocation dynamique");
        exit(EXIT_FAILURE);
    }

    element = li->next;

    free(li);
    li = NULL;

    return element;
}

/*--------------------------------------*/


List clear_list(List li)
{
    // on va reprendre une fonction, la plus courte
    if(is_empty_list(li))
        return new_list();

    while(li != NULL)
        li = pop_front_list(li)
}
