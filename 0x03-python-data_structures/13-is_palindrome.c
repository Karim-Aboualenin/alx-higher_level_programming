#include "lists.h"
/**
 * is_palindrome - determine if singly linked list is palindrome
 * @head: pointer to head of singly linked list
 * Return: 0 if not, 1 if palindrome
 */
int is_palindrome(listint_t **head)
{
listint_t *current = *head;
int i = 0, j = 0;
int data[10000];
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
data[j] = current->n;
j++;
current = current->next;
}
for (j = 0; j <= (i / 2); j++)
{
if (data[j] != data[i - 1 -j])
return (0);
}
return (1);
}
