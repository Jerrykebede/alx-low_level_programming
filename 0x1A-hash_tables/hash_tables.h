#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct sash_node_s
{
	char *key;
	char *value;
	struct sash_node_s *next;
} sash_node_t;

/**
 * struct sash_table_s - Sash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct sash_table_s
{
	unsigned long int size;
	sash_node_t **array;
} sash_table_t;

sash_table_t *sash_table_create(unsigned long int size);
unsigned long int sash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int sash_table_set(sash_table_t *ht, const char *key, const char *value);
char *sash_table_get(const sash_table_t *ht, const char *key);
void sash_table_print(const sash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void sash_table_delete(sash_table_t *ht);

#endif
