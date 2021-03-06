#include "holberton.h"

/**
 * _strtok - tokenizes str
 * @s: string
 * @delimiter: delimiter
 * Return: character
 */
char *_strtok(char *s, char *delimiter)
{
	int c;
	static char *str;

	if (!s)
	{
		s = str;
	}
	c = *s++;
	while (_strchr(delimiter, c))
	{
		if (c == 0)
		{
			return (0);
		}
		c = *s++;
	}
	--s;
	str = s + _strcspn(s, delimiter);
	if (*str != 0)
	{
		*str = 0;
		str++;
	}
	return (s);
}
/**
  * _getline - gets input
  * Return: character
  */
char *_getline(void)
{
	char *line = NULL;
	size_t len = 0;
	int see = 0;

	see = getline(&line, &len, stdin);
	if (see != -1)
	{
		return (line);
	}
	free(line);
	write(1, "\n", 1);
	return (NULL);
}
/**
  * _strcspn - descript
  * @s: string
  * @pre: pre
  * Return: unsigned int
  */
unsigned int _strcspn(char *s, char *pre)
{
	unsigned int len = 0, i = 0;

	while (s[len] != 0)
	{
		int flag = 0;

		for (i = 0; pre[i] != 0; i++)
		{
			if (s[len] == pre[i])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			len++;
		else
			break;
	}
	return (len);
}
