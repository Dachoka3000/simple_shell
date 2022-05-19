#include "shell.h"

/**
 * main - Entry for shell
 * @ac: arg count
 * @av: arr of args
 * @env: Env
 * Return: 0;
 */
int main(int ac, char **av, char **env)
{
	if (!ac)
		(void)ac;
	if (!av)
		(void)av;
	if (!env)
		(void)env;
	shell(ac, av, env);
	return (0);
}
