#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free.
 * @ptr: a pointer to the memory previously allocated with a call to malloc.
 * @old_size: size, in bytes, of the allocated space for ptr.
 * @new_size: size, in bytes, of the new memory block.
 *
 * Return: a pointer to the newly created memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr, *old_ptr;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	old_ptr = (char *)ptr;
	new_ptr = (char *)malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (new_size < old_size)
		for (i = 0; i < new_size; i++)
			new_ptr[i] = old_ptr[i];

	if (new_size > old_size)
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_ptr[i];

	free(old_ptr);
	return ((void *)new_ptr);
}
