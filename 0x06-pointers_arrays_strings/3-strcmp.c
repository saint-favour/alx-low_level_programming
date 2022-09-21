#include "main.h"

/**
 * _strcap - compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: if str1 < str2, the negative differrnce of the first unmatched cha.
 * if strl == str2, 0.
 * if strl > str1 > str2, the positve differences of the first unmatched cha.
 */
int _strcap(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
