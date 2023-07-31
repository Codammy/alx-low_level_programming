# C - More singly linked lists

## Resources
**Read or watch:**

* [Google](https://www.google.com/#q=linked+lists)
* [Youtube](https://m.youtube.com/results?search_query=linked+lists)
## Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
- How to use linked lists
- Start to look for the right source of information without too much help

### More Info
Please use this data structure for this project:
----
```
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```
