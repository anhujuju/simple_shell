#include "holberton.h"
/**
  * _splitline - splits
  * @line: lines
  * Return: char
  */
char **_splitline(char *line)
{
	char **args = NULL;
	int i = 0;
	char *token = NULL;
	char *dup_buf = line;
	int ct;

	ct = _strlen(line);

	if (dup_buf == NULL)
		return (NULL);

	args = (char **)malloc(sizeof(char *) * ct);
	if (args == NULL)
		return (NULL);

	token = _strtok(dup_buf, "\t\r\n ");
	while (token != NULL)
	{
		args[i] = token;
		i++;
		token = _strtok(NULL, "\t\r\n ");
	}

	args[i] = NULL;
	free(token);
	return (args);
}
