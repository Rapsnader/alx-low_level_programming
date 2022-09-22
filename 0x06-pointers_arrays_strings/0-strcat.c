#include "main.h"

/**
*_strcat - has the string pointed to @src to
* the end of string point to dest @dest
*@dest: string that will append
*@src: string to be concatenated
*
* Return: return pointer to @dest
*/

char *_strcat(char *dest, char *src)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for(index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
