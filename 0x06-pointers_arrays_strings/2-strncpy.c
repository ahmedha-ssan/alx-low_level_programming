#include "main.h"
/**
*_strncpy - copies string.
*@dest: pointer to destination.
*@src: pointer to source.
*@n: number of bytes.
*
* Return: pointer to destination.
*/
char *_strncpy(char *dest, char *src, int n)
{
int byteCount;

for (byteCount = 0; byteCount < n && src[byteCount] != '\0'; byteCount++)
dest[byteCount] = src[byteCount];
for (; byteCount < n; byteCount++)
dest[byteCount] = '\0';

return (dest);
}
