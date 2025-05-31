#include "list.h"
/* print_dlistint(): prints conntents of all nodes
 *@h : pointer to head of doubly linked list
 *return: number of nodes printed
 **/

size_t print_dlistint(const dlistint_t *h)
{
    nodePointer current =h;
    int count =0;
    if (h = NULL) return count;
    while(current)
    {
        printf("%d\n", current->n);
        count++;
        current = current ->next;
    }
    return count;
}
