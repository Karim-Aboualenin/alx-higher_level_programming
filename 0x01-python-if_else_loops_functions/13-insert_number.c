#include "lists.h"

listint_t *insert_node(listint_t **head, int number)
{
listint_t *current = *head, *new;
if (!head)
return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = number;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (current != NULL)
{
if (number <= current->n)
{
new->next = current;
*head = new;
return (new);
}
if ((number >= current->n) && (current->next == NULL))
{
new->next = new;
return (new);
}
if ((number >= current->n) && (number <= current->next->n))
{
new->next = current->next;
current->next = new;
return (new);
}
current = current->next;
}
return (NULL);
}
