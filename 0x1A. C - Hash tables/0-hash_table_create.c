#include <stdlib.h>
#include <hashtable.h>

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the hash table array
 * 
 * Returns: A pointer to the newly created hash table, or NULL on failure
*/
hash_table_t *hash_table_create(unsigned int size)
{
hash_table_t *new_table = NULL;
unsigned long int i;

if(size < 1)
return (NULL);

new_table = malloc(sizeof(hash_table_t));
if (new_table == NULL)
return (NULL);



} 