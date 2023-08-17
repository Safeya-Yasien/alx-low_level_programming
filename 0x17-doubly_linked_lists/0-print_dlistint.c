#include "lists.h"
/**
 * print_dlistint - print all nodes
 * @h: pointer to head
 * return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	int count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}

