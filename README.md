# Shell Project - Simple Shell:books:

Simply put, the shell is a program that takes commands from the keyboard and gives them to the operating system to perform. In the old days, it was the only user interface available on a Unix-like system such as Linux. Nowadays, we have graphical user interfaces (GUIs) in addition to command line interfaces (CLIs) such as the shell.


# Requirements:bulb:

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your C programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Your shell should not have any memory leaks
- No more than 5 functions per file
- All your header files should be include guarded
- Use system calls only when you need to 

# Compiling

gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

# Test

- $ ./hsh
- ($) /bin/ls
- hsh main.c shell.c
- ($)
- ($) exit

# Libraries

#include <stdio.h>

#include <stdlib.h>

#include <unistd.h>

#include <string.h>

#include <sys/wait.h>

#include "myshell.h"

## Files

This is a table with the files and their respective description used to create the shell.

| File | Description |
| --- | --- |
| loop.c | Main function, It receives a command typed by the user in the prompt |
| holberton.h | Header file, contains prototypes of every function used |
| No_interactive.c | Check if the function is not interactive |
| split_line.c | Splits the command into arguments for processing |
| pathfinder.c | Finds path of execution for first argument (command) if ir wasn't typed fully |
| execute.c | Executes the the command and returns a status for continuing or stopping the main loop |
| builtin.c | Innate commands of thell, to need of pathfinding |
| promp.c |Prompt - function to print prompt "$ " |
| env.c | Print enviroment |
| functions.c | Essential functions |
| funct2.c | Essential functions 2 |

# Authors

- Andres Felipe Rodríguez (@anhujuju)

- Juan José Gómez (@JuanJoseGomezR)
