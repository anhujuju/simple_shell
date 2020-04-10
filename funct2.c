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
char *_strtok(char *s, char *delimiter)
{
	int c;
	static char *str;

	if(!s)
	{
		s = str;
	}
	c= *s++;
	while (_strchr(delimiter,c))
	{
		if (c == 0)
			{
				return (0);
			}
			c = *s++;
	}
	--s;
	str = s + _strcspn(s,delimiter);
	if (*str != 0)
	{
		*str = 0;
		str++;
	}
	return(s);
}

char *_getline(void)
{
    char *line =NULL;
    size_t len = 0;
    int see = 0;

    see = getline(&line,&len,stdin);
    if (see != -1)
    {
        return(line);
    }
    free (line);
    write(1, "\n",1);
    return(NULL);
}

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