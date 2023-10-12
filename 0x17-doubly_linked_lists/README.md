# C - Doubly linked lists
[![ C ]()   [![ Algorithm ]()   [![ Data structure ]()

## Resources
**Read or watch:**
- [What is a Doubly Linked List](https://www.youtube.com/watch?v=k0pjD12bzP0)

### Learning Objectives
__At the end of this project, you are expected to be able to explain to anyone, without the help of Google:__

## General
+ What is a doubly linked list
+ How to use doubly linked lists
+ Understand and know how to implement the various operations (deletion, insertion, etc) with doubly linked lists
+ Start to look for the right source of information without too much help

```
/**
* struct dlistint_s - doubly linked list
* @n: points to the previous node
* @prev: points to the previous version
* @next: poits to the next node
*
* Description: doubly linked list node structure
*/
typedef struct dlistint_s{
	int n;
	struct dlistint *prev;
	struct dlistint *next;
} dlistint_t;
```
