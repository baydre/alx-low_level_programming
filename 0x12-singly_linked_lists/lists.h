#ifndef LIST_H
#define LIST_H

#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct s_list - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct s_list
{
	char *str;
	int len;
	struct s_list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
