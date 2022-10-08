#include "shell.h"

/**
 * * shell process
 *  1. prompt
 *   2. input
 *   3. parse
 *   4. eecute
 *   i
 *
 *   */
void contrl_c(int a)
{
	if (a == SIGINT)
	printf("\n ($) ");
}
int main(int argc __attribute__((unused)), char **argv)
{
	char *line = malloc(1024);
	size_t n = 0;
	int nread = 0;
	(void) argv;
	signal(SIGINT, &contrl_c);
	printf("($) ");
	while (1)
	{
		if ((nread = getline(&line, &n, stdin)) != -1)
		{
			printf("\n($) %s ", line);
		}
	}
}
