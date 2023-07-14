#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates mem block using malloc and free
 *
 * @ptr: pointer to prev mem.
 * @old_size: size in bytes of the mem block.
 * @new_size: new size in bytes of the mem block
 * Return: nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *tmp;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && !ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		tmp = malloc(old_size + new_size);
		memcpy(tmp, ptr, old_size);
		free(ptr);
	}
	return (tmp);

}
