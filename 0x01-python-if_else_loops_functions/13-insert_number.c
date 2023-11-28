#include "lists.h"
#include <stdlib.h>
/**
 * insert_node - Inserts node in sorted list
 * @head: address of head pointer
 * @number: The number to insert
 * Return: inserted node
 */
listint_t *insert_node(listint_t **head, int numb
er)
{
        listint_t *node = *head, *new = malloc(si
zeof(listint_t));
        if (!new)
                return (NULL);
        new->n = number;
        new->next = NULL;

        if (!node || new->n < node->n)
        {
                new->next = node;
		*head = new;
                return (new);
        }

        while (node)
        {
                if (!node->next || new->n < node-
>next->n)
                {
                        new->next = node->next;
                        node->next = new;
                        return (new);
                }
                node = node->next;
        }

        return (NULL);
}
