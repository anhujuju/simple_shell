#include "holberton.h"

/**
 * _promp - Behavior of signals
 * @error: Error ID from signal
 **/

void _promp(int error)

{
	switch (error)
	{
case 1:
	write(1, "\n", 1);
	write(STDOUT_FILENO, "$ ", 2);
	break;

default:
	write(2, "Issued command \n", 15);
	break;
	}

}


