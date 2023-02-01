#include <stdio.h>
#include <stdlib.h>
#include <lists.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Alx project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i;
    listint_t *node = head;

    for (i = 0; node && i < index; i++)
        node = node->next;

    return (i == index) ? node : NULL;
}
