#include <lists.h>
/**
 * main - return number of nodes of dlistint
 * @h: head of list
 *Return - return number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t num_nodes = 0;

    while (h)
    {
        num_nodes++;
        printf("%d/n", h->n);
        h = h->next;
    }
    return (num_nodes);
}
