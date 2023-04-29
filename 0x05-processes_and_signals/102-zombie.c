#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * infinite_while - infinite while loop
 * Return: 0
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - create 5 zombie processes
 * Return: Always 0.
 */

int main(void)
{
	pid_t zombie_pid;
	char i;

	for (i = 0; i < 5; i++)
	{
		zombie_pid = fork();
		if (zombie_pid == 0)
		{
			printf("Zombie process created, PID: %i\n", zombie_pid());
			exit(0);
		}
	}
	infinite_while();
	return (EXIT_SUCCESS);
}
