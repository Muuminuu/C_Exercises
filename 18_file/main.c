#include <stdio.h>
#include "queue.h"

int main(void)
{
    if(is_empty_queue())
        printf("File vide.\n");
    else
        printf("File non vide.\n");

    printf("Taille de la file: %d\n", queue_length());
    print_queue();

    // essayer avec un seul element en premier lieu.
    push_queue(14);
    printf("Taille de la file: %d\n", queue_length());
    print_queue();

    pop_queue();
    printf("Taille de la file: %d\n", queue_length());
    print_queue();

    // ensuite essayer avec plusieurs
    push_queue(14);
    push_queue(-26);
    push_queue(35);
    printf("Taille de la file: %d\n", queue_length());
    print_queue();

    pop_queue();
    printf("Taille de la file: %d\n", queue_length());
    print_queue();

    pop_queue();
    pop_queue();
    printf("Taille de la file: %d\n", queue_length());
    print_queue();

    // si jamais on voulait tout nettoyer d'un coup, on enlève les pop au dessus et on fait ca:
    clear_queue();
    print_queue();

    return 0;
}