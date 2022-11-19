#ifndef LISTS_H
#define LISTS_H
/* 0. Write a function that prints all the elements of
 *  a list_t list.
 */
size_t print_list(const list_t *h);

/* 1.  Write a function that returns the number of elements
 * in a linked list_t list
 */
size_t list_len(const list_t *h);

/* 2. Write a function that adds a new node at the beginning
 * of a list_t list.
 */
sigset_t *add_node(list_t **head, const char *str);

/* 3. Write a function that adds a new node at the end
 * of a list_t list.
 */
sigset_t *add_node_end(list_t **head, const char *str);

/* 4. Write a function that frees a list_t list. */
void free_list(list_t *head);

/* putchar function */
int _putchar(char c);

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

#endif /* _MAIN_H_ */
