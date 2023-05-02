#include "lists.h"

/**
 * add_nodeint - we will dds a new node at the beginning
 *               of a listint_t list.
 * @head: This will be a pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If anything happens,add the function fails, it will return  - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
