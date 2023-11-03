#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table to look into.
 * @key: key you are looking for.
 *
 * Return: value associated with element, or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *p;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	for (p = ht->array[index]; p != NULL; p = p->next)
		if (strcmp(key, p->key) == 0)
			return (p->value);

	return (NULL);
}
