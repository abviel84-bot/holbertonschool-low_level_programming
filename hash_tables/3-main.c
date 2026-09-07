#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);

	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "john", "cool too");

	/* Prueba de colisión (djb2): hetairas y mentioner */
	hash_table_set(ht, "hetairas", "collision1");
	hash_table_set(ht, "mentioner", "collision2");

	/* Prueba de actualización: betty ahora tiene otro valor */
	hash_table_set(ht, "betty", "cool too");

	/* Prueba de key vacía (debe fallar y retornar 0) */
	printf("Empty key result: %d\n", hash_table_set(ht, "", "value"));

	/* Prueba de value vacío (debe funcionar, retorna 1) */
	printf("Empty value result: %d\n", hash_table_set(ht, "empty_val", ""));

	return (EXIT_SUCCESS);
}
