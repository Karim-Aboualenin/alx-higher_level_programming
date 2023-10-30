#include "lists.h"
#include <stdio.h>

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * list: the singly linked list
 * Return: 0 if no cycle exist ,1 otherwise
*/
int check_cycle(listint_t *list)
{
listint_t *cursor = list;
listint_t *cursor_slow = list;
if (list == NULL)
return (0);
while (1)
{
if(cursor->next != NULL && cursor->next->next != NULL)
{
cursor = cursor->next->next;
cursor_slow = cursor_slow->next;
if (cursor == cursor_slow)
return (1);
}
else
return (0);
}
}
