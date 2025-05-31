#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
typedef dlistint_t *nodePointer;

size_t print_dlistint(const dlistint_t *h);

size_t print_dlistint(const dlistint_t *h)
{
    nodePointer current =h;
    int count =0;
    if (h = NULL) return count;
    while(current)
    {
        printf("\tnode |>%d<|    --->  [%d]\n",count+1, current->n);
        count++;
        current = current ->next;
    }
    return count;
}




#endif // LIST_H_INCLUDED
