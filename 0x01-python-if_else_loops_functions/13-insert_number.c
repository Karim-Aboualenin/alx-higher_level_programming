#include "lists.h"

listint_t *insert_node(listint_t **head, int number)
{
listint_t *current = NULL, *new = NULL;
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
if ((*head)->next == NULL)
{
if ((*head)->n < new->n)
(*head)->next = new;
else
{
new->next = *head;
*head = new;
}
return (new);
}
current = *head;
while (current != NULL)
while (current->next != NULL)
{
if (new->n < current->n)
{
new->next = current;
*head = new;
return (new);
}
if (((new->n > current->n) && (new->n < (current->next)->n)) ||
(new->n == current->n))
{
new->next = current->next;
current->next = new;
return (new);
}
current = current->next;
}
current->next = new;
return (new);
}
