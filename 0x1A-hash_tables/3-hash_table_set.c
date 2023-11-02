#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to.
 * @key: key to add its associated value.
 * @value: value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_node, *p;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (p = ht->array[index]; p != NULL; p = p->next)
	{
		if (strcmp(key, p->key) == 0)
		{
			free(p->value);
			p->value = strdup(value);
			return (1);
		}
	}

	hash_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (0);

	hash_node->key = strdup(key);
	if (hash_node->key == NULL)
	{
		free(hash_node);
		return (0);
	}

	hash_node->value = strdup(value);
	if (hash_node->value == NULL)
	{
		free(hash_node->key);
		free(hash_node);
		return (0);
	}

	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}
