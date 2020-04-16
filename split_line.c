#include "holberton.h"
/**
  * _splitline - splits
  * @line_buf: lines
  * Return: char
  */
char **_splitline(char *line_buf)
{
	char **args = NULL;
	int i = 0;
	char *token = NULL;

	if (line_buf == NULL)
		return (NULL);

	args = (char **)malloc(sizeof(char *) * 1024);
	if (args == NULL)
		return (NULL);

	token = _strtok(line_buf, "\t\r\n ");
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
