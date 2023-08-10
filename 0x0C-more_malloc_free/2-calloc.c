#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of objects.
 * @size: size of each object.
 *
 * Return: a pointer to the allocated memory, null if fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, totalsize;

	if (nmemb == 0 || size == 0)
		return (NULL);

	totalsize = nmemb * size;

	ptr = (char *)malloc(totalsize);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < totalsize; i++)
		ptr[i] = 0;

	return ((void *)ptr);
}
