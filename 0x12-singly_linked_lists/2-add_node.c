#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list_t list
*
* @head: pointer to pointer of list_t
* @str: string
*
* Return: address of the new element, or  NULL if it faild
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	size_t i;

	/*create memory for new node*/
	newNode = malloc(sizeof(list_t));
	/*return null if malloc fails*/
	if (newNode == NULL)
		return (NULL);
	/*duplicate string to new node*/
	newNode->str = strdup(str);
	/*determine length of string in new node*/
	for (i = 0; str[i]; i++)
		;
	/*store string length in new node*/
	newNode->len = i;
	/*switch addresses to add new node*/
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
