#include "holberton.h"
/**
  * _strlen - string length
  * @s: string
  * Return: integer
  */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
  * _strcmp - compares 2 strings
  * @str1: string 1
  * @str2: string 2
  * Return: diference between str1 & str2
  */
int _strcmp(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] == str2[i] && str2[i] != '\0')
		i++;
	return (str1[i] - str2[i]);
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
	int i = _strlen(dest);
	int j;

	for (j = 0; src[j] != '\0'; j++)
		dest[i + j] = src[j];

	dest[i + j] = '\0';

	return (dest);
}
/**
  * _strchr - finds a spec char in a stirng
  * @s: string
  * @b: char to find
  * Return: '\0'
  */
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
