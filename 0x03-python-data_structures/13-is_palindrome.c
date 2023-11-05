#include "lists.h"

int is_palindrome(listint_t **head)
{
listint_t *current = *head, *reverse = *head;
int i = 0, j = 0;
while (current != NULL)
{
i++;
current = current->next;
}
current = *head;
while (current != NULL)
{
for (j =0; j < i - 1; j++)
{
reverse = reverse->next;
}
if (current->n != reverse->n)
{
return (0);
}
current = current->next;
reverse = *head;
i--;
}
return (1);
}
