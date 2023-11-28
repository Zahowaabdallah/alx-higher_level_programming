<<<<<<< HEAD
=======
#include "lists.h"
#include <stdlib.h>
/**
insert_node - Inserts a number into a sorted s
ingly-linked list.
 * @head: adress of head pointer
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
                return (*head = new);
        }
        while (node)
        {
                if (!node->next || new->n < node-
>next->n)
                {
                        new->next = node->next;
                        node->next = new;
                        return (node);
                }
                node = node->next;
        }
        return (NULL);
>>>>>>> e51160e65f4c226d2a65cc0f55c681aa94666383
