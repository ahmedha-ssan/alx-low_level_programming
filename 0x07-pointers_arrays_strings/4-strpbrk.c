#include "main.h"

/**
* _strpbrk - character
* @s: string
* @accept: character to search
* Return: char
*/
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0 ; *(s + a) ; a++)
	{
		for (b = 0 ; *(accept + b) ; b++)
		{
			if (*(accept + b) == s[a])
			{
				return (s + a);
			}
		}
		if (*(accept + b) == s[a])
		{
			return (s + a);
		}
	}
	return (0);
}

