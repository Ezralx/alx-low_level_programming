#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: is the key
 * @size: The size of the array of the hash table.
 *
 * Return:  the index at which the key/value pair and
 *		stored in array of the  hash tabe
 *
 * Description: Uses the hash_djb2 function.
 * key_index function will be used for next tasks
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
