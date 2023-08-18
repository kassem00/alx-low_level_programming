#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: linked list node
 * @index:  index 
 * Return: int value
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_var;
	unsigned int counter;

	if (*head == NULL)
		return (-1);
	temp_var = *head;
	for (counter = 0; temp_var != NULL && counter < index; counter++)
		temp_var = temp_var->next;
	if (temp_var == NULL)
		return (-1);
	if (counter == index)
	{
		if ((*head)->next == NULL)
		{
			*head = NULL;
			free(temp_var);
			return (1);
		}
		if (temp_var == (*head))
		{
			(*head) = (*head)->next;
			(*head)->prev = NULL;
			free(temp_var);
			return (1);
		}
		if (temp_var->next == NULL)
		{
			temp_var->prev->next = NULL;
			free(temp_var);
			return (1);
		}
		temp_var->next->prev = temp_var->prev;
		temp_var->prev->next = temp_var->next;
		free(temp_var);
		return (1);
	}
	return (-1);
}
