#include <stdio.h>
#include "lists.h"

/**
* _strlen- returns the length of a string
* @s: check the length of srting
*
* return: integer length of string
*/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
*print_t -prints all element of the list
*@h: pointer to the first node.
*print_list -prints the len of list.
* return: size of list.
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d} %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next ;
		i++;
	}
	return (i);
}
