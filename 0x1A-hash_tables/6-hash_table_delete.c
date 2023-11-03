#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table to delete.
 *
 * Return: nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	if (ht != NULL)
	{
		unsigned long int i;
		hash_node_t *p, *q;

		for (i = 0; i < ht->size; i++)
		{
			p = ht->array[i];

			while (p != NULL)
			{
				q = p;

				p = p->next;

				free(q->key);
				free(q->value);
				free(q);
			}
		}

		free(ht->array);
		free(ht);
	}
}
