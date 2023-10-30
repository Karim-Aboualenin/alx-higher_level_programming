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
if (list == NULL)
return (0);
while (1)
{
if(cursor->next != NULL)
{
if (cursor->next == list)
return (1);
cursor = cursor->next;
}
else
return (0);
}
}
