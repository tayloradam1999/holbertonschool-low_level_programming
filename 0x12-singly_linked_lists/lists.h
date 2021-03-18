#include <stdio.h>
#include <stdlib.h>
#ifndef SINGLY_LISTS
#define SINGLY_LISTS

typedef struct sllist {
	char *str;
	unsigned int len;
	struct sllist *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
