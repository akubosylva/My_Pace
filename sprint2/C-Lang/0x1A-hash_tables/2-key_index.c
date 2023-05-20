#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (size == 0)
		return (0);

	idx = hash_djb2(key);
	return (idx % size);
}
