#include "lists.h"
/**
 * is_palindrome - determine if singly linked list is palindrome
 * @head: pointer to head of singly linked list
 * Return: 0 if not, 1 if palindrome
 */
int is_palindrome(listint_t **head)
{
listint_t *current = *head, *reverse = *head;
int i = 0, j = 0;
if (head == NULL) 
return (0);
if (*head == NULL) 
return (1);
while (current != NULL)
{
i++;
current = current->next;
}
if (i == 1)
return (1);
current = *head;
while (current != NULL)
{
for (j = 0; j < i - 1; j++)
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
