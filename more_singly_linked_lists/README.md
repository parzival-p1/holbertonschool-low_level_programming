# C - More singly linked lists

## Recommended links 🔗
+ __Understanding the basic concept__ *By R. Buckland UNSW & J. Kathri*
	- [Linked Lists - *Richard Buckland*](https://www.youtube.com/watch?v=udapt4FGY20&t=130s)
	- [Introduction to linked list - *J. Kathri*](https://www.youtube.com/watch?v=dmb1i4oN5oE&list=PLdo5W4Nhv31bbKJzrsKfMpo_grxuLl8LU&index=7)
	
+ __Get to work__ *By J. Kathri & Ehoneah Obed*
	- [Insert a node in Singly Linked List(at beginning, end,specified position)](https://www.youtube.com/watch?v=dq3F3e9o2DM)
	- [Delete a node from linked list (from beginning, end, specified position) ](https://www.youtube.com/watch?v=ClvYytk5Rlg)
	- [Singly Linked List & its Implementation in C explained](https://youtu.be/WRnXN2CHsTc?t=3242)
	- [How to insert nodes in Singly Linked List in C](https://www.youtube.com/watch?v=SjO6FXdbn3k&t=11s)

## Learning Objectives 🎯

- How to use linked lists
- Start to look for the right source of information without too much help

## Tasks 📚

0. Print list
	- Write a function that prints all the elements of a `listint_t` list.
		+ Prototype: `size_t print_listint(const listint_t *h);`
		+ Return: the number of nodes
		+ Format: see example
		+ You are allowed to use `printf`

1. List length
	- Write a function that returns the number of elements in a linked`listint_t` list.
	Prototype: `size_t listint_len(const listint_t *h);`

2. Add node
	- Write a function that adds a new node at the beginning of a `listint_t` list.
		- Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
		- Return: the address of the new element, or `NULL` if it failed

3. Add node at the end
	- Write a function that adds a new node at the end of a `listint_t` list.
		Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
		- Return: the address of the new element, or `NULL` if it failed

4. Free list
	- Write a function that frees a `listint_t` list.
		- Prototype:`void free_listint(listint_t *head);`

5. Free
	- Write a function that frees a listint_t list.
		- Prototype: void `free_listint2(listint_t **head);`
		- The function sets the `head` to `NULL`

6. Pop
	- Write a function that deletes the head node of a `listint_t` linked list, and returns the head node’s data (n).
		- Prototype: `int pop_listint(listint_t **head);`
		- if the linked list is empty return `0`

7. Get node at index
	- Write a function that returns the nth node of a `listint_t` linked list.
		- Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
		- where `index` is the index of the node, starting at ` 0`
		- if the node does not exist, return `NULL`

8. Sum list
	- Write a function that returns the sum of all the data (n) of a `listint_t` linked list.
		- Prototype: `int sum_listint(listint_t *head);`
		- if the list is empty, return `0`
