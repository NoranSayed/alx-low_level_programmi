#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @p: Pointer to a list.
 * Return: Integer.
 **/

size_t list_len(const list_t *p)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = p;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}

