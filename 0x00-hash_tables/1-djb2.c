/**
 * hash_djb2 - Algorithim for Hash Tables
 * @str: String to be passed to convert to binary
 * Return: New Hash Table from input string
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
