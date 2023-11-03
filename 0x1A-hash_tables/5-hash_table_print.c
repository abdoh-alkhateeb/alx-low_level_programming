#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table to print.
 *
 * Return: nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	if (ht != NULL)
	{
		unsigned long int i;
		hash_node_t *p;
		bool first_printf = true;

		printf("{");

		for (i = 0; i < ht->size; i++)
			for (p = (ht->array)[i]; p != NULL; p = p->next)
			{
				if (first_printf == false)
					printf(", ");

				printf("'%s': '%s'", p->key, p->value);

				if (first_printf == true)
					first_printf = false;
			}

		printf("}\n");
	}
}
