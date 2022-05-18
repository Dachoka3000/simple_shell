#include "shell.h"
/**
 * bridge - check to see if dealing waith a builtin
 * @check: figures out whaat should be executed
 * @args: arguments passed from the command line broken
 * Return: 1 if user entered a path/builtin, 2 if user entered a binary
 */
int bridge(char *check, char **args)
{
	int i = 0;

	if (builtins_checker(args) == 1)
		return (1);
	while (check[i] != '\0')
	{
		if (check[i] == '/')
			return (1);
		i++;
	}
	return (2);
}

