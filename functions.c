#include "holberton.h"
/**
  * _strlen - string length
  * @s: string
  * Return: integer
  */
int _strlen(char *s);
{
	int i;
	
	i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
  * _strcmp - compares 2 strings
  * @s1: string 1
  * @s2: string 2
  * Return: diference between s1 & s2
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/**
  * _strcpy - copies a string
  * @dest: array
  * @src: src of the array
  * Return: str copied
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
/**
  * _strcat - concatenates 2 string
  * @dest: input
  * @src: output
  * Return: concatd str
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int n = 0;
	int c = 0;  

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		c++;
	while (k <= j)
	{
		dest[i] = src[k];
		n++;
		i++;
	}
	return (dest);
}
char *_strchr(char *s, char b)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == b)
			return (&s[i]);

	if (s[i] == b)
		return (&s[i]);

	return ('\0');
}
