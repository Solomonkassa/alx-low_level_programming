#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Alx project
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;
    listint_t *node = head;

    for (i = 0; i < head && index != NULL; i++)
        node = node->next;

    return (head) ;
}
