#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

Bool is_empty_queue(void)
{
    if(first == NULL && last == NULL)
        return true;

    return false;
}

/*---------------------------------------*/

int queue_length(void)
{
    return nb_elements;
}

/*---------------------------------------*/

int queue_first(void)
{
    if(is_empty_queue())
        exit(1);

    return first->value;
}

/*---------------------------------------*/

int queue_last(void)
{
    if(is_empty_queue())
        exit(1);

    return last->value;
}

/*---------------------------------------*/

void print_queue(void)
{
    if(is_empty_queue())
    {
        printf("Rien a afficher, la file est vide.\n")
        return;
    }

    QueueElement *temp = first; //pour eviter de modifier first
    while(temps != NULL)
    {
        printf("[%d] ", temp->value);
        temps = temp->next;
    }
    printf("\n");
}

/*---------------------------------------*/

void push_queue(int x)
{
    QueueElement *element;

    element = malloc(sizeof(*element));

    if(element == NULL)
    {
        fprintf(stderr, "Erreur : probleme d'allocation dynamique.\n");
        exit(EXIT_FAILURE);
    }

    element->value = x;
    element->next = NULL;

    if(is_empty_queue())
    {
        first = element;
        last = element;
    }
    else 
    {
        last->next = element;
        last = element;
    }

    nb_elements++;
}

/*---------------------------------------*/

void pop_queue(void) //retrait
{
    if(is_empty_queue())
    {
        printf("Rien a retire, la file est déjà vide.\n");
        return;
    }

    QueueElement *temp = first;

    if(first == last)
    {
        first = NULL;
        last = NULL;
    }
    else
        first = first->next; // first devient tout apres first (on passe au deuxieme, et le premier se retrouve juste dans notre variable temp!)

    free(temp);
    nb_elements--;
}

/*---------------------------------------*/

void clear_queue(void)
{
    if(is_empty_queue())
    {
        printf("Rien a nettoyer, la file est vide.\n")
        return;
    }

    while(!is_empty_queue())
        pop_queue();
}


