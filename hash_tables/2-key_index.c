#include "hash_tables.h"

/**
 * key_index - Da el indice de un arreglo para una llave
 * @key: La llave
 * @size: Tamaño del arreglo de la tabla hash
 *
 * Return: El indice donde se debe guardar el par llave/valor
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
