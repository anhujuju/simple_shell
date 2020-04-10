#include "holberton.h"
/**
  * _strspn - gets length of a prefix substring
  * @s: string
  * @delimiter: delimiter
  * Return: Counter
  */
unsigned int _strspn(char *s, char *delimiter)
{
	unsigned int i, j;
	unsigned int count;

	count = 0;

	for (i = 0; s[i] != '\0'; s++, i++)
	{
		for (j = 0; delimiter[j] != '\0'; j++)
		{
			if (*s == delimiter[j])
			{
				count++;
				break;
			}
		}
		if (count < i)
			break;
	}
	return (count);
}
/**
  *
  *
  *
  */
char *_strtok(char *s, char *delimiter);
