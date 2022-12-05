#include "lists.h"



/**
 *
 *  * reverse_listint - reverses a linked list
 *
 *   * @head: pointer to the first node in the list
 *
 *    * Return: pointer to the first node in the new list
 *
 *     */

void reverse_listint(listint_t **head)

{

		listint_t *prev = NULL;

			listint_t *current = *head;

				listint_t *next = NULL;
