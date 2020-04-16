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
	int i = 0;
	int c = 1;
	int result = 0;

	while (str1[i] != '\0' && str2[i] != '\0' && c == 1)
	{
		result = str1[i] - str2[i];
		if (result == 0)
		i++;
		else
		{
			c = 0;
		}
	}
return (result);
}
/**
  * _strcpy - copies a string
  * @dest: array
  * @src: src of the array
  * Return: str copied
  */
char *_strcpy(char *dest, char *src)
{
	char buffer[1025];
	int i = 0, j, pos = 0;

	while (*(src + i) != '\0')
	{
		buffer[i] = *(src + i);
		i++;
	}

	for (j = 0; *(src + j) != '\0' ; j++)
	{
		*(dest + pos) = buffer[j];
		pos++;
	}

	dest[j] = '\0';
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
	while (*s != 0)
	{
		if (*s == b)
			return (s);
		s++;
	}
	if (*s == b)
		return (s);
	return (0);
}
